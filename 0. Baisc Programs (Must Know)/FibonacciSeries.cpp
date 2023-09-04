//Fibonaci Series --> a series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers. The simplest is the series 1, 1, 2, 3, 5, 8, etc.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n2 = 1, n3, number;
    cout<<"Enter the number of elements : ";
    cin>>number;
    cout<< n2 << " ";

    for(int i = 0; i < number; i++){
        //n3 = n1 + n2;
        n2 = n3;
        cout<< n3 <<" ";
       // n1 = n2;
    }
return 0;
}