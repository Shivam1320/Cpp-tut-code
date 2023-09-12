 /*
 // print reverse counting using recursion
 #include <iostream>
 #include <vector>
 using namespace std;

void printRevCouting(int num) {
    //base case
    if(num == 0) {
        return;
    }

    //processing
    cout << num << " ";

    //recursive relation
    printRevCouting(num - 1);
}
 
 int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printRevCouting(n);
    cout << endl;

 return 0;
 }
 */


 /*  // factorial of a number using recursion
 #include <iostream>
 #include <vector>
 using namespace std;

int factorial(int num) {
    //base case
    if(num == 1) {
        return 1;
    }

    //recursive relation
    int chotiProblemAns = factorial(num-1);
    int badiProblemAns = num * chotiProblemAns;

    return badiProblemAns;
}
 
 int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = factorial(n);
    cout << "Factorial of "<< n << " is " << ans;



 return 0;
 }
  */


// print nth term of Fibbonacci Series using recursion
 #include <iostream>
 #include <vector>
 using namespace std;
 
 int PrintFib(int n){
    //base case
    if(n == 1) {
        //first term
        return 0;
    }
    if(n == 2) {
        //second term
        return 1;
    }

    //recursive relation --> f(n) = f(n-1) + f(n-2)
    int ans = PrintFib(n-1) + PrintFib(n-2);
    return ans;
 }


 int main(){
    int n;
    cout<<"Enter the term you want to see " << endl;
    cin >> n;

    int ans = PrintFib(n);
    cout << n <<"th term is: " <<ans << endl;

 return 0;
 }