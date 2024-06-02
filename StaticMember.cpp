// Static keyword is used to make the memory of the variable static.Once we define a variable
// statis,It cannot be changed.
//No static belongs to the class if static has not defined in object ,It can 
//directily call from the class
#include<iostream>
using namespace std;
class Bike{
public:
static int noOfBikes;//This belongs to the class
int tyreSize;
int engineSize;
Bike(int tyreSize,int engineSize=200){
    this->tyreSize=tyreSize;
    this->engineSize=engineSize;}
static void setNoOfBikes(){
    noOfBikes++;
} 

};
Bike::noOfBikes=10;  //Scope resolution operator bcz it will directly call to the class
int main(){
    Bike royalEnfield(tyreSize:15,engineSize:350);
    Bike honda(tyreSize:17);`
    royalEnfield.setNoOfBikes();
    royalEnfield.increaseNoOfBikes();
    cout<<royalEnfield.noOfBikes<<endl;
    cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;

    honda.increaseNoOfBikes();
    cout<<royalEnfield.noOfBikes<<endl;
    cout<<bajaj.noOfBikes<<endl;


    



// Static keyword is used to make the memory of the variable static.Once we define a variable
// statis,It cannot be changed.

// #include<iostream>
// using namespace std;
// class Bike{
// public:
// int tyreSize;
// int engineSize;
// Bike(int tyreSize,int engineSize=200){
//     this->tyreSize=tyreSize;
//     this->engineSize=engineSize;}
// };
// void print(){
//      static int a=10;
//     cout<<a<<endl;//Here i have add static so, it will print 11,12,13.
//     a++;          //But if i no static it willprint 10,10,10.
// }
// int main(){
//     print();
//     print();
//     print();
   
}