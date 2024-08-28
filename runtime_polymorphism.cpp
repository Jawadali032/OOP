#include<iostream>
using namespace std;
class base{
private:
int num_base=40;

public:
void display(){
cout<<"The base class var is "<<num_base<<endl;
}};

class derived:public base{
private:
int num_derived=80; 

public:
void display(){
    cout<<"The derived class variable is "<<num_derived<<endl;
}};


int main()
{
    base *ptr_base;
    base base_obj;
    derived *ptr_derived;
    derived derived_obj;

    ptr_base=&base_obj;
    ptr_base->display();

    ptr_derived=&derived_obj;
    ptr_derived->display();

    ptr_base=&derived_obj;
    ptr_base->display();
    
    return 0;
}