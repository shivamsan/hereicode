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

int **c =&b;
// pointer to pointer var

cout << " the value of b is"<<&b<<endl;
cout << "the value of b is "<<c<<endl;

cout<< "the valye at address c is: "<<*c<<endl;
cout << " the value at address value_at(value_at((c)) is "<<**c<< endl;

    return 0;

}