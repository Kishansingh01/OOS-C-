// Constructor=>I am assining a class  and there i am defining an object. So,what we are defining and inside memory 
// what is allocated  is it a static or dynamic the constructor defines it.It is a hidden function which
// do memory allocation.It is a hidden function ,where we do initialisation ,Object creations.
//when i make a class constructor will always be there by default.It is very similar to function.So, it will take some
//function ,some parameter,return type.c It has no name but it take parameter.Bike()

// Three types of constructors:-
// 1)Default constructor
// 2)Parameterised constructors
// 3)Copy constructor

// Default constructor will always in a class in compiled process but we can make a 
// constructor from ourselves.


// 1)

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// class Bikes{
//     public:
//     int tyreSize;
//     Bikes(){
//         cout<<"Constructor call hua"<<endl;
//  //Here we have made own constructor       
//     }
// };
// int main(){
//     Bikes tvs;//Object creation,Constructor ko call jayenji
// //Jb jb object banega constructor ko call jayenji
//       Bikes Honda;
//       Bikes Splender;
// }

// 2)Parameterised Constructor
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// class Bikes{
//     public:
//     int tyreSize; 
//     int engineSize;
//  //Value intialize constructor uses.   
//     Bikes(int tyreSize,int engineSize){
//         this->tyreSize=tyreSize;
//         this->engineSize=engineSize;
//         cout<<"Constructor call hua"<<endl;
//  //Here we have made own constructor       
//     }
// };
// int main(){
//     Bikes tvs(tyreSize:19,engineSize:350);//Object creation,Constructor ko call jayenji
// //Jb jb object banega constructor ko call jayenji
//       Bikes Honda(tyreSize:12,engineSize350);
//       Bikes splender(tyreSize:12,engineSize:150);
//       cout<<tvs.tyreSize<<endl;
//       cout<<Honda.tyreSize<<endl;
//       cout<<splender.tyreSize<<endl;
//       cout<<tvs.engineSize<<endl;
//       cout<<splender.engineSize<<endl;
//       cout<<Honda.engineSize<<endl;
// }

// By coder army

#include<iostream>
using namespace std;
class Human{
protected:
string name;
int age;
public:
Human(){
cout<<"Hello human"<<endl;
}
void work(){
    cout<<"I am working"<<endl;
}
};
class Student:public Human{
    int roll_no,fees;
    public:
    Student(){
        cout<<"Hello students"<<endl;
    }
};
int main(){
    Student A1;
}