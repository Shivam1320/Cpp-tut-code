// Find Largest Area In Histogram

/*
step 1: find prev smaller ->  store indexes 
step 2: find next smaller -> store indexes and in place of (-1) store maximum length of array
step 3: find area
step 4: return maximum area
*/

// Find previous Smaller Element

#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>
using namespace std;


//function to find prev smaller element
vector<int> prevSmallerElement(vector<int>&nums) {
    stack<int>st;
    st.push(-1);
    int n = nums.size();
    vector<int>ans(n);

    for(int i = 0; i < n; i++) { //left to right
        int curr = nums[i]; 
        while(st.top() != -1 && nums[st.top()] >= curr) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}


//function to find next smaller element
vector<int> nextSmallerElement(vector<int>&nums) {
    stack<int>st;
    st.push(-1);
    int n = nums.size();
    vector<int>ans(n);

    for(int i = n-1; i >= 0; i--) {
        int curr = nums[i];

        while(st.top() != -1 && nums[st.top()] >= curr) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

//function to find Maximum Rectangular Area in Histogram
int getLargestRectangleArea(vector<int>heights) {
    //step 1: prevSmaller output
    vector<int>prev = prevSmallerElement(heights);

    //step 2: nextSmaller output
    vector<int>next = nextSmallerElement(heights);

    //step 3: find area
    int maxArea = INT_MIN;
    int size = heights.size();

    for(int i = 0; i < heights.size(); i++) {

        if(next[i] == -1) { // place size of array in place of (-1).
            next[i] = size;
        }

        int length = heights[i];
        int width = next[i] - prev[i] - 1;

        int area = length * width;
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main(){
    vector<int> heights = {2,4};

    int ans = getLargestRectangleArea(heights);
    cout << "Maximum Area is: " << ans;
  
return 0;
}