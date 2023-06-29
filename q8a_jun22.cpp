#include<iostream>
#include<fstream>
using namespace std;

class EMP_CLASS
{
    

    struct EMPLOYEE
    {
        char name[10];
        int emp_id;
        int salary;

    };

    EMPLOYEE emp;

    public:
    void Create()
    {
        char ch ='y';
        fstream seqfile;
        seqfile.open("EMP.DAT",ios::app);

        do
        {
            cout<<"enter name..."<<endl;
            cin>>emp.name;
            cout<<"emp id"<<endl;
            cin>>emp.emp_id;
            cout<<"emp salary"<<endl;
            cin>>emp.salary;
            seqfile.write((char*)&emp, sizeof(emp));
            cin>>ch;
            cout<<"enter 'y' to enter again"<<endl;
        } while (ch=='y');
        seqfile.close(); 
    }


    int Search()
    {
        fstream seqfile;
        int id,pos;
        cout<<"enter emp id to search"<<endl;
        cin >> id;

        seqfile.open("EMP.DAT",ios::ate|ios::binary|ios::in|ios::out);
        seqfile.seekg(0,ios::beg);
        pos=-1;
        int i =0;

        while(seqfile.read((char*)&emp,sizeof(emp)))
        {
            if(id==emp.emp_id)
            {
                pos=i;
                cout<<"found "<<pos<<endl;
                break;
            }
            i++;
        }
        return pos;
    }
};
    int main()
    {
        EMP_CLASS List;
        char ans ='y';

        int choice,key;
        //clrscr();

        do
        {
            cout<<"1. Create"<<endl;
            cout<<"2.Search"<<endl;

            cout<<"enter your choice"<<endl;
            cin>>choice;

            switch(choice)
            {
                case 1:List.Create();break;
                case 2:List.Search();break;

                case 3:exit(0);
            }
            cout<<"enter your choice"<<endl;
        } while (ans=='y');
        

    }