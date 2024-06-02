// Function Overloading:->Creating the function with same name but different parameters.

// Polymerphisms means many forms

// Polymerphisms are of two types:-
// 1)Compile time Polymerphisms  (i)Fun overloading  (ii).Operation overloading
// 2)Run time Polymerphisms  (i).Fun overidding

// In overloading i cannot make parameter same. If i make parameter same but different return 
// type then it will be a compile time time error

#include<iostream>
#include<vector>
using namespace std;
class Summation{
    public:
    int sum(int a,int b){
        cout<<a+b<<endl;
    }
    void add(int a,double b){
        cout<<10+a<<endl;
    }
     int main(){
        add(a:1,b:2);
        add(a:5,b:5.2);
     }

}


//Constructor overloading:Bcz different parameter we are achieving the same things
#include<iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engineSize;
    Bike(int tS,int eS):tyreSize(tS),engineSize(eS){}
    Bike(int ts):tyreSize(ts),engineSize(100){}
    Bike():tyreSize(12),engineSize(100){}
};
int main(){
    Bike royalEnfield(15,350);
    Bike bajaj(13);
    cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
    cout<<bajaj.tyreSize<<" "<<bajaj.engineSize<<endl;                  

}
