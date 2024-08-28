#include<iostream>
using namespace std;
class engine{

private:
string stroke;

public:

engine(){}

engine(string a){
stroke=a;}

void getdetailsengine(){
cout<<"The stroke of engine is "<<stroke<<endl;}

};

class car{

private:
string colour;
int model;
string name;
engine *eng;

public:

car(){}

car(string i,string j,int k, engine *e){
eng=new engine();
name=i;
colour=j;
model=k;
eng=e;}

car (car &obj){
name=obj.name;
colour=obj.colour;
model=obj.model;}

~car(){
cout<<"The destructor has executed"<<endl;
delete eng;
eng=NULL;}

void getdetailscar(){
    cout<<"The name of Car is "<<name<<endl;
    cout<<"The colour of Car is "<<colour<<endl;
    eng->getdetailsengine();
    }
 
};

int main()
{ engine eng("8 stroke");
car c1("Civic","White",2022,&eng);
c1.getdetailscar();
    
    return 0;
}