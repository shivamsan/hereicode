#include<iostream>
using namespace std;

int main()
{

    int a =3;
    //int* b = &a;

    int *b;
    b = &a;


    cout<< " the address of a is: "<<&a<<endl;
    cout<< "the address : "<< b<< endl;

    //*var value at address var
    cout<< " the value at address b is: " << *b<<endl;

// & address of operator
//* derefreence operator
    return 0;

}