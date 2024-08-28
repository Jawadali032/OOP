#include<iostream>
using namespace std;

int sum (int a ,int b){

    cout<<"the total eidi of jawad and junaid"<<endl;

    return a+b;
}

int sum ( int a ,int b,int c){
    cout<<" the total eidi of jawad , junaid and ali"<<endl;

    return a+b+c;
}

int main(){
    cout<<sum(500,400)<<endl;
    cout<<sum(500,400,300)<<endl;
}

