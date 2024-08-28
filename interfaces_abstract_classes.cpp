#include<iostream>
using namespace std;

class musicPlayer{
    private:
        string addSong;
    public:
        virtual void addsong(string s)=0;
        virtual void deleteSong()=0;
        void greet(){
        cout<<"welcome to musicplayer"<<endl;
        }
};


class Bicycle:public musicPlayer{
    private:
        int speed;
        string name;
    public:
        void increment(int inc){
            speed=speed+inc;
        }
        void addsong(string s){
            name=s;
            cout<<"the song is "<<name<<endl;
        }   
        void deleteSong(){
            cout<<"the song is deleted"<<endl;
        }
};

int main()
{
    Bicycle b;
    b.addsong("Gerua");
    b.deleteSong();
    
    return 0;
}