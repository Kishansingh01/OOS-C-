
#include<iostream>
using namespace std;
class Gun{
    public:
    int damage;
    int scope;
    int ammo;};
 
class Player{
private:
    int health;
    int score;
    int age;
    int alive;
    Gun gun;
    Helmet helmet;

    Class helmet{
        int hp;
        int level;
    }
}
public:
void sethp(int hp){
    this->hp=hp;
}
int setlevel(int level){
    this->level=level;
}
int getHp(){
    return hp;
}
int getLevel(){
    returnlevel;
}

int getHealth(){
    return health;
}
int getAge(){
    return age;
}
int getScore(){
    return score;
}
int isAlive(){
    return alive;
}
Gun getGun(){
    return gun; 
}
void setAge(int age){
    this->age=age;
}
void setScore(int score){
    this->score=score;
}
void setIsAlive(boolalive){
    this->alive=alive;
}
void setGun(Gun gun){
    return gun;
}
void setHelmet(int level){
    Helmet *helmet=new Helmet;//If u r using pointer in c++ u have to use array
    helmet->setHealth();
    Helmet->setLevel(level);
    int health=0;
    if(level==1){
        health=25;
    }
    else if(level==2){
        health=50;
    }
    else if(level=3){
        health=100;
    }
    cout<<"Error,Invalid Table !";
    helmet->setHp(health);
    this->=*helmet;
}
Helmet getHelmet(){
 return helmet;
}

void setAealth(int health){
    this->health=health;
}
void setAge(int age){
    this->age=age;
}
void setScore(int score){
    this->score=score;
}
void setISAlive(bool alive){
    this->alive=alive;
}};
int addScore(Player a,Player b){
    return a.getScore()+b.getScore();
    return a;
    else
    return b;
}

int main(){
    Player raghav;
    Player harsh;
    Player*urvi=new Player;
   Gun akm;
   akm.ammo=100;
   akm.damage=50;
   akm.scope=2;
   harsh.setAge(21);
   harsh.setScore(100);
   harsh.setIsAlive(true);
   harsh.setHealth(70);
   harsh.setGun(akm);
   harsh.setHelmet(2);
   Gun awm;
   awm.ammo=15;
   awm.damage=150;
   awm.scope=8;

   raghav.setAge(22);
   raghav.setScore(20);
   raghav.setIsAlive(true);
   raghav.setHealth(100);
   raghav.setGun(awm);
   raghav.setHelmet(3);

   Gun gun123=harsh.getGun();
   cout<<gun123.damage<<endl;
   cout<<gun123.ammo<<endl;
   cout<<gun123.scope<<endl;
   Helmet helmet123=harsh.getHelmet();
   cout<<helmet123.getHp()<<endl;
   cout<<helmet123.getlevel()<<endl;
   urvi->setHealth(20);
   harsh.getHelmet();
   raghav.getHelmet();

   cout<<urvi->getHealth()<<endl;

   Player sanket=getMaxScorePlayer(harsh,raghav);}
   Player players[3]={harsh,raghav,*urvi};
   cout<<players[0].getAge();

}