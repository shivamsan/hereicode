#include<iostream>
using namespace std;

int main()
{
    int arr[10]={2,6,9};

    cout<<"address/location of first memory block of array : "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"address/location of first memory block of array : "<<&arr[0]<<endl;//address of loc zero
    cout<<"1st element "<<*arr<<endl;
    cout<<"1st element "<<*arr + 1<<endl;
    cout<<"1st element "<<*(arr + 1)<<endl;
    return 0;
}