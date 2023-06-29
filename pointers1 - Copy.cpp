#include <iostream>
using namespace std;

int main()
{
    int num=5;
    cout << num<<endl;

    // address operator -&
    cout<<"address of num is "<< &num<<endl;
    //address in hexa decimal

    int *ptr = &num;//initializing pointer variable and giving it the address of num to store

    cout<<"address of num is "<< ptr<<endl;
    cout<<"value of num is "<< *ptr<<endl;

    double d =4.3;
    double *p2 = &d;

    cout<<"address of d is "<< p2<<endl;
    cout <<"value of d is "<< *p2<<endl;

    cout<<" size pof interger num is "<< sizeof(num)<<endl;
    cout<<" size pof pointer ptr is "<< sizeof(ptr)<<endl;
    cout<<" size pof pointer d is "<< sizeof(p2)<<endl;

    //pointer size will always bbe same (4) as is always stores address

    return 0;
}



