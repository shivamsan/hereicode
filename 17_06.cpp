#include<iostream>
#include<fstream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<string>

using namespace std;

class Records_CLASS
{
    

    typedef struct RecordsLOYEE
    {
        char name[10];
        int Records_id;
        int salary;

    }Rec;

    Rec Records;

    public:
    void Create()
    {
        char ch ='y';
        fstream seqfile;
        seqfile.open("Records.DAT",ios::app);

        do
        {
            cout<<"enter name..."<<endl;
            cin>>Records.name;
            cout<<"Records id"<<endl;
            cin>>Records.Records_id;
            cout<<"Records salary"<<endl;
            cin>>Records.salary;
            seqfile.write((char*)&Records, sizeof(Records));
            cin>>ch;
        } while (ch=='y');
        seqfile.close();
        

        
    }


    int Search()
    {
        fstream seqfile;
        int id,pos;
        cout<<"enter Records id to search"<<endl;
        cin >> id;

        seqfile.open("Records.DAT",ios::ate|ios::binary|ios::in|ios::out);
        seqfile.seekg(0,ios::beg);
        pos=-1;
        int i =0;

        while(seqfile.read((char*)&Records,sizeof(Records)))
        {
            if(id==Records.Records_id)
            {
                pos=i;
                break;
            
                cout<<"found "<<pos<<endl;

            }
            i++;
        }
        return pos;
    }
    
};

    int main()
    {
        Records_CLASS List;
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
        } while (ans=='y');
        

    }