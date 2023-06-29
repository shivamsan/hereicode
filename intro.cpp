#include <iostream>
using namespace std;

class Hero
{
   public:

    // by default access modifier id private inside the class
    //properties
    int health;
    public:   // public access modifier

    char level;

    void print()
    {
        cout << level <<endl;

    }

    

};

int main()
{
    //creating object
    Hero ramesh;   //ramesh object & Hero class

   

    ramesh.health = 70;  //Assigning value
    ramesh.level = 'a';

     cout<< "health is: "<< ramesh.health << endl;
     cout<< "level is: "<< ramesh.level << endl;

     //cout<< "size : "<< sizeof(ramesh) <<endl; //size of empty class

     return 0;
}