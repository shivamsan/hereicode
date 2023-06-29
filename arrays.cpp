#include<iostream>
using namespace std;
int main()
{
    int marks[4] = {23,45,67,89};  // declaring array

    int mathmarks[4];
    mathmarks[0] = 425;
    mathmarks[1] = 7545212;
    mathmarks[2] = 85456212;
    mathmarks[3] = 895451;

    // these are math marks
    cout<< "these are maths marks"<<endl;
    cout << mathmarks[0]<<endl;
    cout << mathmarks[1]<<endl;
    cout << mathmarks[2]<<endl;
    cout << mathmarks[3]<<endl;

    // these are marks
    cout<<"these are marks"<<endl;
    cout << marks[0]<<endl;
    cout << marks[1]<<endl;

    marks[2] = 546;
    // change the vaue of an array (overwrite)
    cout << marks[2]<<endl;
    cout << marks[3]<<endl;
}