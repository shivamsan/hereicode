#include <iostream>
 using namespace std;
//structure are user defined data types

struct Smartphone
{
    //here i'll put all the variables that defines the smart phone
    string name;
    int storagespace;
    string color; 
    float price;
    //here i have defined the attributes
    //we dont assign data to these attributes
    //these attributes actually represent a blueprint
};

struct Person 
{
    string name;
    int age;
    Smartphone smartphone;
};



void printSmartphoneInfo(Smartphone smartphone) 
{
    cout << "Name: " <<smartphone.name<<endl;
    cout << "storagespace: "<< smartphone.storagespace << " GB" << endl;
    cout << "color: " << smartphone.color << endl;
    cout << "price: " << smartphone.price << endl;
}

void printPersonInfo(Person person)
{
    cout << "name: " << person.name << endl;
    cout << "age: " << person.age << endl;
    printSmartphoneInfo(person.smartphone);
}
 int main()
 {
    /*
    string name = "iphone 12";
    int storagespace = 32;
    string color = "black";
    float price = 1999.99;

    string name2 = "samsung";
    int storagespace2 = 64;
    string color2 = "blue";
    float price2 = 999.99;

    */

    // if i'll have to define another phone then i'll have to 
    //repeat the same block of code again

    //better approach would be to group all these and define a user defined data type
    Smartphone smartphone;
    //type || var name
    smartphone.name = "iphone 13";
    smartphone.storagespace =32;
    smartphone.color = "black";
    smartphone.price = 9999.990;

    Smartphone smartphone2;
    smartphone2.name = "iphone 14";
    smartphone2.storagespace =64;
    smartphone2.color = "black";
    smartphone2.price = 119999.990;

    /*
    cout << "name: " << smartphone.name << endl;
    cout << "storageSpace: " << smartphone.storagespace<<" GB" << endl;
    cout << "color: " << smartphone.color << endl;
    cout << "price: " << smartphone.price << endl;  
    */
    
printSmartphoneInfo(smartphone);
printSmartphoneInfo(smartphone2);

Person p;
p.name="saldina";
p.age = 26;
p.smartphone = smartphone2;

printPersonInfo (p);


}




 

 



