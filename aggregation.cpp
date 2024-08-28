#include<iostream>
using namespace std;
class Address{
    private:
    string Hno;
    int areacode;
    string street;

    public: 
    Address(){}
    Address(string i,int j,string k){
        this->Hno=i;
        this->areacode=j;
        this->street=k; 
        }

    Address(Address &obj){
        this->areacode=obj.areacode;
        this->Hno=obj.Hno;
        this->street=obj.street;
        }

    void get(){
        cout<<"The House number is "<<Hno<<endl;
        cout<<"The Street is "<<street<<endl;
        cout<<"The Areacode is "<<areacode<<endl;
        }
};

class Person{
    private:
    string name;
    Address *a;

    public:
    Person(){}
    Person(string n,Address *ptr){
        name=n;
        a=ptr;
        }

    void getdetails(){
        cout<<"The name is "<<name<<endl;
        a->get();
        }
};

int main()
{
    Address g1("6/213-A",75100,"Hashim Raza Road");
    Person m1("Zia",&g1);
    m1.getdetails();
    return 0;
}