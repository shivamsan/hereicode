#include <iostream>
using namespace std;

class Hero
{
    private:

    // by default access modifier id private inside the class
    //properties
    int health;
    public:   // public access modifier

    char level;

    void print()
    {
        cout << level <<endl;

    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }


    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
    	level = ch;
	}
        

    

};

int main()
{
    //creating object
    Hero ramesh;   //ramesh object & Hero class

    cout<< " ramesh health is : " << ramesh.getHealth() <<endl;
    ramesh.setHealth(70);

    //ramesh.health = 70;  //Assigning value
    ramesh.level = 'a';

     cout<< "health is: "<< ramesh.getHealth() << endl;
     cout<< "level is: "<< ramesh.level << endl;

     //cout<< "size : "<< sizeof(ramesh) <<endl; //size of empty class

     return 0;
}
