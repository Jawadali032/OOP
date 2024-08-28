#include<iostream>
using namespace std;
class Car{
    private:
        string type;
    public:
        Car(string t){
            type=t;
        }
        void getType(){
            cout<<"The car is "<<type<<endl;
        }
};

class Driver{
    private:
        string name;
    public:
        Driver(string n){
            name=n;
        }
        void drive(Car &obj){
            cout<<"The name of the driver is "<<name<<endl;
            obj.getType();
        }
};

int main()
{
    Car c("Mercedes");
    Driver Zia("Zia Ali");
    Zia.drive(c);
    return 0;
}