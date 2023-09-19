// Find previous Smaller Element

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> prevSmallerElement(vector<int>&nums) {
    stack<int>st;
    st.push(-1);
    int n = nums.size();
    vector<int>ans(n);

    for(int i = 0; i < n; i++) { //left to right
        int curr = nums[i]; 
        while(st.top() >= curr) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

int main(){
    vector<int> nums = {4, 2, 1, 5, 3};

    vector<int>ans = prevSmallerElement(nums);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
  
return 0;
}