#include <iostream>
using namespace std;

class Hero
{
    public : 
    //Default Constructor
    Hero()
    {
        cout << "Constructor is called." << endl;
        name = new char[100];
    }
    //Parameterized Construtor
    Hero(int health){
        cout << "Address of constructor :" << this << endl; // Address of object : 0x7ff7bfd0f4d0 
        this -> health = health; // this keyword store the current object's address.
    }

    Hero(int health,char level){
        this -> health = health; 
        this -> level = level;
    }
    // Copy Constructor
    // Hero(Hero& temp){
    //     // char *ch = new char[strlen(temp.name) + 1]; // Deep copy code
    //     // strcpy(ch, temp.name);
    //     // this -> name = ch;
    //     this -> health = temp.health;
    //     this -> level = temp.level;
    // }

    //Destructor to de-allocate memory (No Return type, No input parameter)
    ~Hero(){
        cout << "Destructor called." << endl;
    }
private:
    int health;

public:         // Access Modifier
    char level; // properties or members
    char *name;
    static int timeToComplete; //Must be initialize
    void print()
    { // behaviour or methods
        cout << "Name : "  << name << endl;
        cout << "Level : " << level << endl;
        cout << "Health : " << health << endl;

    }

    int getHealth()
    { // getter
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h1)
    { // setter
        health = h1;
    }
    void setLevel(char c)
    {
        level = c;
    }
    void setName(char name[]){
        strcpy(this -> name, name);
    }
    static int random(){
        cout << timeToComplete << endl; // static function only access static member not other
    }
};


int Hero::timeToComplete = 5;// (::) -> scope resolution operator
int main()
{
    /*
    Hero h1; // Statically Object Created
    h1.print();
    h1.setHealth(10);
    cout << h1.getHealth() << endl;
    cout << sizeof(h1) << endl;

    h1.setLevel('H');
    cout << h1.getLevel() << endl;



    Hero *h = new Hero; // Dynamically Object Created

    cout << (*h).getHealth() << endl;
    cout << (*h).getLevel() << endl;
    cout << endl;
    // OR
    h->setLevel('A');
    cout << h->getHealth() << endl;
    cout << h->getLevel() << endl;
    */

   /*
    Hero hero(70, 'A');
    cout << "Address of object : " << &hero << endl; // Address of constructor :0x7ff7bfd0f4d0
    cout << hero.getHealth() << endl;  //70
    cout << hero.getLevel() << endl;  //A
    */

   /*
    Hero suresh(50,'C');
    Hero R(suresh); //Copy Constructor // Automatically generated
    cout << R.getHealth() << endl;
    */

   /*
    Hero hero1;

    hero1.setHealth(92);
    hero1.setLevel('A');
    char name[7] = "Kishan";
    hero1.setName(name);
    hero1.print();
    cout << endl;

    //Use default copy constructor
    Hero hero2(hero1); // OR Hero hero2 = hero1;
    hero2.print();
    cout << endl;

    hero1.name[0] = 'G';
    hero1.print(); // Gishan
    cout << endl;
    hero2.print(); // Gishan // because default copy constructor shallow copy karta hai
    */

   /*
    Hero a; // Static

    Hero *hero = new Hero(); //Dynamic
    delete hero; // manually destructor call for dynamic object

    cout << "Mid code" << endl;
    */


   cout << Hero::timeToComplete << endl;
   ++(Hero::timeToComplete);

   cout << Hero::timeToComplete << endl;

   
    
    return 0;
}