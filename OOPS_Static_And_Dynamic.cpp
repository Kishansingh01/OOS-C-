Static drawbacks means i know that ten thousand player are going to play on a website but
i watched that only 1000 players came.So,It is the drawbacks of static and 9000 memory 
get vanished from that 9000 memory system also become a little bit slow.

Note:* is for the storing the address and & is for the addressing the another value


Static allocation =>Stores stack memory.It  also take some compile time means i am giving 
int a=12;So,it has just given the fixed size.Compile time will do all memory handling 
before runtime

Dynamic allocation=>Stores heap memory in a real time.Like i need 1 GB but i need more than
1 GB in real time If i write new,some memory will get allocated in runtime.So,we called it run time memory 
allocation or Dynamic memory allocation.

New is used for the memory location

Instead of *(Pointer),int set and get we can use arrow(->)


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

int b=10;
int *b=&b;
cout<<*a;//We will get the value of b
    Player*urvi=new Player;//Runtime ,Dynamic allocation
    Player urviobject=*urvi;
    (*urvi).setHealth(20);
    kishan.setage(20);
    kishan.setscore(100);
    kishan.setIsalive(true);
    kishan.setHealth(200);
    urvi object.setScore(40);
    urvi object.setage(90);
    
    cout<<kishan.setage<<endl;//This line is wrong
    cout<<addScore(kishan,gautam); 
    getScore(kishan,gautam);
    Player ram=getScore(kishan,gautam);
    cout<<ram.getScore()<<endl;
    cout<<sanket.getHealth();
    cout<<urviobject.getScore()<<endl;
    cout<<(*urvi)or->.getHealth()<<endl;//I will get urvi value
}




