#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int a = num;
    cout<<"a bofore "<<num << endl;
    //copy of num
    a++;
    cout<<"a after "<<num << endl;

    cout <<"num value: " << num << endl;

    int *p =&num;
    cout<<"bofore "<<num << endl;
    (*p)++;
    cout<<"after "<<num << endl;
    // *is derefrence operator
    // p has adress but *p derefrence it to the value stored in that address
    // in case of pointer diffrence copy is not created

    int *q =p;
    //pinter q stores the address of p pinter that is the address of num
    // there fore q also hass the address of num

    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;
    //copying a pointer

    int i=3;
    int *t =&i;
    //cout <<*t<<endl;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"before t "<<t<<endl;
    t=t+1;
    cout<<"after t "<<t<<endl;
    

    return 0;

}