#include<iostream>
using namespace std;

class complex{
    public:
    int real;
    int img;
complex(){
    real=0;
    img=0;

}
complex(int x,int y){
    this->real=x;
    this->img=y;
    
}
complex(const complex& obj){
    real=obj.real;
    img=obj.img;

}

friend ostream & operator <<(ostream& out, complex& obj){

    out<<obj.real;
    out<<obj.img;
    return out;
}

complex operator+(complex&obj){
    complex temp;
    temp.real=this->real + obj.real;
    temp.img=this->img + obj.img;
    return temp;
}

};
int main(){
    complex a1(5,4);
    complex a2(5,4);
    complex a3;
    a3= a1 + a2;
    cout<<a3;
    return 0;
}