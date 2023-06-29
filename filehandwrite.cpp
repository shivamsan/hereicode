#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream myfile;

    myfile.open("shivam.txt", ios::out); //-open-write

    if (myfile.is_open())
    {
        myfile << "Hello World!"<<endl;
        myfile << "second line"<<endl;
        myfile << "third line"<<endl;
        myfile.close();
    }


    myfile.open("shivam.txt", ios::out); //-open-write

    if (myfile.is_open())
    {
        myfile << "overriden"<<endl;
        
        myfile.close();
    }


   // everytime we use this 'out' output mode it overrides the text in the file
    // thus is we want to add a et of statements into the doc without replacing the erlier content 
    //we just use another mode called 'append'

    myfile.open("shivam.txt", ios::app); //-open-write

    if (myfile.is_open())
    {
        myfile << "appended"<<endl;
        
        myfile.close();
    }
    system("pause>0");
}