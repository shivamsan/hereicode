#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {0};
    int n =10;
    int choice = 1;

    while(choice == 1)
    {
        int key;
        cout<<"Enter Key : ";
        cin>>key;

        int d;
        d = key%10;
        int c=10;

        for (int i=0;i<n;i++)
        {
            if(arr[d] > 0)
            {
                d++;
                c++;
            }
        }
        arr[d] = key;
        for (int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"collision : "<<c<<endl;
        cout<<"enter choice 0/1 : : ";
        cin>>choice;
    }
}