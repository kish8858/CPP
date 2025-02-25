#include<iostream>
using namespace std;

//3. Polymorphism : Have many forms

// Compile Time Polymorphism(Static Polymorphism) - START
class A{
    //Function overloading : same name with diffrent argument
    public:
    void sayHello(){
        cout << "Kishan" << endl;
    }
    void sayHello(string name){ // change only type and number of parameter if we change the return type only then it through error
        cout << "Hello " << name<< endl;
    }
    int sayHello(int s){
        cout << "Kishan" << endl;
        return s;
    }
};

class B{
    public:
    int a;
    int b;

    int add(){
        return a + b;
    }

    void operator+ (B &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "Output " << value2 - value1 << endl;
    }

    void operator() (){
        cout << "Main Bracket Hu" << endl;
    }
};

// Compile Time Polymorphism - END

// Run-Time Poymorphism - START

class Animal{
    public:
    void speak(){
        cout << "Speaking..." <<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout << "Barking..." <<endl;
    }
};
// Run-Time Poymorphism - END



//4. Abstraction : Implementation hiding

    






// + bianry operator // ++ uniary operator

int main()
{
    // A obj;
    // obj.sayHello("Kishan");


    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 7;
    // obj1 + obj2;
    // obj1();

    
    Dog dog;
    dog.speak();


    return 0;
}