//::=>Scope Resolution operator
//This:Means what i am talking about the class function

// #include<iostream>
// using namespace std;
// class Player:{
// private:
// int score;
// int health;
// int age;
// int alive;
// public:
// int gethealth(){
//   return health;
// }
// int getscore(){
//     return score;
// }
// int getage(){
//    return age;
// }
// bool isalive(){
//     return alive;
// }
// int setHealth(int health){
//     this->health=health
// }
// int setage(int age){
//     this->age=age;
// }
// int setscore(int score){
//     this->score=score;
// }
// int setIsalive(bool alive){
//     this->alive=alive;
// }
// };
// int main(){
//     Player kishan;
//     Player gautam;

//     kishan.setage(20);
//     kishan.setscore(100);
//     kishan.setIsalive(true);
//     kishan.setHealth(200);
    
//     cout<<kishan.setage<<endl;
// }



//::=>Scope Resolution operator
//This:Means what i am talking about the class function


#include<iostream>
using namespace std;
class Player{
private:
int score;
int health;
int age;
bool alive;
public:
int gethealth(){
  return health;
}
int getscore(){
    return score;
}
int getage(){
   return age;
}
int isalive(){
    return alive;
}
void sethealth(int health){
    this->health=health
}
void setage(int age){
    this->age=age;
}
void setscore(int score){
    this->score=score;
}
void setIsalive(bool alive){
    this->alive=alive;
}
};
int addScore(Player a,Player b){
    return a.getScore()+b.getScore();
}
Player getmaxScore(Player a,Player b){
    if(a.getScore()>b.getScore())
    return a;
    else return b;
}
int main(){
    Player kishan;
    Player gautam;//Compile run, Static allocation

    kishan.setage(20);
    kishan.setscore(100);
    kishan.setIsalive(true);
    kishan.setHealth(200);
    
    cout<<kishan.setage<<endl;//Ithis line is wrong
    cout<<addScore(kishan,gautam); 
    getScore(kishan,gautam);
    Player ram=getScore(kishan,gautam);
    cout<<ram.getScore()<<endl;
    cout<<sanket.getHealth();
}
