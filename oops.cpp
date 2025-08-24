//object oriented programming
#include<iostream>
using namespace std;

class Hero{
 public:
 string name;
 int health;
};


int main(){
    Hero h1;
    cout<<"enter the name of hero"<<endl;
    getline(cin,h1.name);
    cout<<"enter the health of hero"<<endl;
    cin>>h1.health;
    cout<<"hero name: "<<h1.name<<endl;
    cout<<"health: "<<h1.health<<endl;
}