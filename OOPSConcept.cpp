//  OOPS are basically classified by four categories.
//  1)Data Abstraction
//  2)Encapsulation
//  3)Inheritance
//  4)Polymerphisms 
 
 
 
//  Class=Blueprint of object is called class .It is a user defined datatype.

//  object=Objects are the real entities.

//  Data Abstraction=We are seperating the data according to their working like as there is a car 
//  and it has break,engine and we are just pressing keys and it is just showing its 
//  working but we are not knowing how it is working we are just using it. Security __GCC_ASM_FLAG_OUTPUTS__works
//  here.

//  Encapsulation=I have insert the all chuncks of data in a packet.inside a big storage 
//  i have insert all data i a container.In one word i am giving multiple data in a single unit.
//  And in OOPS this datatype is a class.

//  Inheritance=Inheritance means,Two character comes in free fire like alok and K.They have 
//  some similar attributes that they have same health and momentum sppe so i will insert
//  both of them in a same by doing a inheritance method .

//  Polymerphisms=> Poly=Many,Morph=form,We will do different functunality with same code. 
//  Polymerphisms has two form one is overloading and one is overriding.


//In data Abstraction there is an access modifier which is divided into three categories
//  Access modifier=>(1.)Private 
//  (2.)Public 
//  (3.)Protected

//In protected case we can also not access it but we can do inheritance

// Data incapsulation means i am making a class and inside i am giving some 
// object which is in the class

#include<iostream>
using namespace std;
class Player{
    public:
    int score;
    private:
    int health;
};

int main(){
Player ankit;
ankit.score=90;
//ankit.health=500;
cout<<ankit.score<<endl;
//cout<<ankit.health<<endl;

Player kishan;
kishan.score=100;
//kishan.health=322;
cout<<kishan.score<<endl;
//cout<<kishan.health<<endl;


}





