#include<iostream>
using namspace std;
class Player{
    public:
    int score;//Data Member
    int health;

void showHealth(){//Member function
    cout<<"Health is :"<<health ;
}
void showScore(){
    cout<<"score:"<<score;
class Calculator{
    public:
    int a;
    int b;//Data Member
    void add(){
        cout<<a+b;
    }
void subtract(){
    cout<<a-b;
} 
}
};
int main(){
    int score[100]={};
    int health[100]={};
    Player kishan;
    kishan.score=90;
    kishan.health=100;
    kishan.showHealth();
    kishan.showScore();

    Calculator calci;
    calci.a=10;
    calci.a=7;
    calci.add();
    calci.subtract();
}