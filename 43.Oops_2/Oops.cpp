#include<iostream>
using namespace std;

//1. Encapsulation(Information hiding) : wrapping up data member and functions.
    //Fully encapsulated class : all data member make private
    //if we want, we can make class "read only by using properties"

class Student{
    private:
        string name;
        int age;
        int height;
    public:
    int getAge(){
        return this->age;
    }
};

//2. Inheritance : 
class Human{
    
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this -> age;
    }
    void setWeight(int w){
        this -> weight = w;
    } 
};

class Male : public Human { // Single inheritance
    public:
    string colour;

    void sleep(){
        cout << "Male sleeping" << endl;
    }
};

class Female : public Male{ // Multi-level inheritance
    
};

class Child : /*public Male,*/ public Female{ // Multiple inheritance

};

/*
class A : public Human{ // Hierarical inheritance

};
class B : public Human{ // |^|

};
*/

class A {
    public:
    void func(){
        cout << "I am A" << endl;
    }
};

class B {
    public:
    void func(){
        cout << "I am B" << endl;
    }
};

class C : public A, public B{ // C++ ambiguity, due to same function in class A and B

};



int main()
{
    //Student first;
    /*
    Male object1;
    cout << object1.getAge() << endl;
    cout << object1.colour << endl;
    object1.setWeight(76);
    object1.sleep();
    cout << object1.weight << endl;
    */

    C obj;
    obj.A::func();
    obj.B::func();



    return 0;
}