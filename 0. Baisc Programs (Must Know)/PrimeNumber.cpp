//Prime NUmber

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int flag = 0;

    cout<<"Enter a ositive integer : ";
    cin >> n;

    for(int i = 2; i <= n /2; i++){
        if(n % i == 0){
            flag = 1;
        }
    }
return 0;
}