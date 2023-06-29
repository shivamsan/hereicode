#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out_obj;
    int a[5] = {1,2,3,4,5};
    int b[5];
    out_obj.open("input.dat");
    out_obj.write((char *)a, sizeof(a));
    out_obj.close();

    ifstream in_obj;
    in_obj.open("input.dat");
    in_obj.read((char *)b, sizeof(b));
    cout<<"the contents of input.dat are "<<endl;

    for(int i=0; i<5; i++) 
    {
        cout<<b[i]<<endl;
    }
    in_obj.close();
}    