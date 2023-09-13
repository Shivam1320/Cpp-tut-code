// Class

#include <iostream>
#include <vector>
using namespace std;

class Animal {
    private:
    int weight;

    public:
    int age;
    string name;

    //behaviour
    void eat(){
        cout << "Eating" << endl;
    }

    void sleep(){
        cout << "Sleeping" << endl;
    }

    //setters and getters --> to access the private member
    int getWeight() {
        return weight;
    }
    void setWeight(int w) {
        weight = w;
    }

};

int main(){
    // Animal ramesh;  // creation of object --> Static

    // ramesh.age = 12;  // accessed using (.) dot
    // ramesh.name = "ramesh";

    // cout << "age of ramesh: " << ramesh.age << endl;
    // cout << "age of ramesh: " << ramesh.name << endl;
    

    // ramesh.eat();
    // ramesh.sleep();

    // ramesh.setWeight(101);
    // cout << "Weight of ramesh: " << ramesh.getWeight() <<endl;


    //Dynamic Memory Allocation
    Animal* suresh = new Animal;

    //Access method - 1
    (*suresh).age = 15;
    (*suresh).name = "John";

    //Access method - 2
    suresh -> age = 15;
    suresh -> name = "John";

    suresh -> eat();
    suresh -> sleep();
return 0;
}