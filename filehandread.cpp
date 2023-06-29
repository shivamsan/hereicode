#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    fstream myfile; //myfile is a variable of type fstream
    myfile.open("shivam.txt", ios::in); //read
    if (myfile.is_open()) 
    {
        string line;
        while(getline(myfile, line))
        {
            cout << line<<endl;
        }
        myfile.close();//close
    }

  
    system("pause>0");
}