#include <iostream>
using namespace std;
int main()
{
    //int *p;
    //initialize pinter that points to any garbage value 
    //bad practice

    //int *p =0;
    //thus we initialize a null value

    //1st way
    int i =5;
    int *q=&i;
    //& is address operator

    cout<<q<<endl;
    cout<<*q<<endl;

    //2nd way
    int *p=0;
    p=&i;

    cout<<p<<endl;
    cout<<*p<<endl;

    //we get the same address
    

}