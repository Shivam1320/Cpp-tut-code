// Find Square Root of x

#include <iostream>
#include <vector>
using namespace std;

int squareRoot(int x){
    int start = 0;
    int end = x;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        if(mid * mid == x){
            return mid;
        }
        if(mid * mid > x){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

   int finalAns = squareRoot(n);
   cout<<"Answer is: " << finalAns;

return 0;
}