#include <iostream>
using namespace std;

class mp3{
    private:
         string song;
    public:
        virtual void addsong(string s)=0;
        virtual void deletesong()=0;
        void greet(){
         cout<<"i am mp3"<<endl;

     }

};
class shakira: public mp3{
    private:
    string name;
    public:
        void addsong (string s){
            name = s;
            cout<<"the song name is "<<name<<endl;
        }
        void deletesong(){
            cout<<"the song is deleted"<<endl;
        }
};

int main(){
    shakira S;
    S.greet();
    S.addsong("Waka Waka");
    S.deletesong();

}