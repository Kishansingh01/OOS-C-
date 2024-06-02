//Destructure destory the objects
// Like as i am playing PUBG.So, there crores users are playing and data is being stored but we need to destory
// the continous coming of the data.So, there we will use the destructor when the player goes offline.

// When object is being created we called constructor and Destructor is being called when Object goes out of scope.

// Scope means ilaka which is defined by curley bracket.{ 
//     rint ram-=10;But if i will go out of this scope it will print unknown bcz its area is under the bracket
// }

// ~~~~~Destructor~~~ is also a function type but here no parameter we define it by a symbol(~,~,~,~,~)

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// class Bikes{
//     public:
//     int tyreSize; 
//     int engineSize;
//  //Value intialize constructor uses.   
//     Bikes(int tyreSize,int engineSize=20){
//         this->tyreSize=tyreSize;
//         this->engineSize=engineSize;
//         cout<<"Constructor call hua"<<endl;
//  //Here we have made own constructor       
//     }
//     ~Bikes(){
//         cout<<"Destructure call hua"<<endl;
//     }  //Tilde
// };
// int main(){
//     Bikes tvs(tyreSize:19,engineSize:350);//Object creation,Constructor ko call jayenji
// //Jb jb object banega constructor ko call jayenji
//       Bikes Honda(tyreSize:12,engineSize350);
//       Bikes splender(tyreSize:12,engineSize:150);
//       bool flag=true;  
//       if(flag==true){//This is destructor range it it will gooutside it it will get vanished
//         Bike bmw(tyreSize:17,engineSize:1000);
//         cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;}
//       }

//       cout<<tvs.tyreSize<<endl;
//       cout<<Honda.tyreSize<<endl;
//       cout<<splender.tyreSize<<endl;
//       cout<<tvs.engineSize<<endl;
//       cout<<splender.engineSize<<endl;
//       cout<<Honda.engineSize<<endl;
// }

// Means jb hm prinyt kra lete hai uske baad se jb hamara code usse bahar nikalta hai tb destructure call hota hai.


#include<iostream>
using namespace std;
class Human{
protected:
string name;
int age;
public:
~Human(){
cout<<"Hello human"<<endl;
}
void work(){
    cout<<"I am working"<<endl;
}
};
class Student:public Human{
    int roll_no,fees;
    public:
    ~Student(){
        cout<<"Hello students"<<endl;

    }
};
int main(){
    Student A1;
}