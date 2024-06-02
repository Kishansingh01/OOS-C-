//About Setter and Getter function 
// setter is used to set the value and getter is used
// to get the value.When i have made any private class 
// and i try to access it with a security purpose then i have to 
// use getter and setter function to access it.

#include<iostream>
using namespace std;
class Player{
    private:
    int score;
    int health;
    public:
    void setScore(int s){
        score=s;
    }
    void setHealth(int h){
        health=h;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main(){
    Player kishan;
    kishan.setScore(10);
    kishan.setHealth(50);
    cout<<kishan.getScore()<<endl;
    cout<<kishan.getHealth()<<endl;

     
}
