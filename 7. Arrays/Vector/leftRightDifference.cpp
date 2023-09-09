#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int>nums{10, 4, 8, 3};
  vector<int>leftSum;
  vector<int>rightSum;
  int sum1 = 0, sum2 = 0;

// left sum
  for(int i = 0; i<nums.size(); i++){
      leftSum.push_back(sum1);
      sum1 = sum1 + nums[i];
  }

  //print
  cout << " Left Sum ";
  for(int i = 0; i<leftSum.size(); i++) {
      cout << leftSum[i] << " ";
  }
  cout << endl;

    // right sum
    for(int i = nums.size() - 1 ; i >= 0; i--) {
        rightSum.push_back(sum2);
        sum2 = sum2 + nums[i];
    }

      //print
        cout << " Right Sum ";
    reverse( rightSum.begin(), rightSum.end());
    
     for(int i = 0; i<rightSum.size(); i++) {
      cout << rightSum[i] << " ";
  }
  cout << endl;

    // Diffrence
    vector<int>ans;
    for(int i = 0; i<nums.size(); i++) {
        ans.push_back( abs( leftSum[i] - rightSum[i] ) );
    }
    cout << endl;


    //print ans
    cout << "final ans is " ;
    for(int i = 0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
  return 0;
}