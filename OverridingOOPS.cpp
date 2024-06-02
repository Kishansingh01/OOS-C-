
// Function overriding means below code i have make two class  display
// but i have taken B and make a call to it and it has only taken
// that function and leave A.So, we call this overriding like function B
//has overriding over A
// #include<iostream>
// using namespace std;
// class A{
//     public:void display(){
//         cout<<"Base Class";
//     }
// };
// class B:public A{
//     public:
//     void display(){
//         cout<<"Derived class";
//     }
// };
// int main(){
//     B aa;
//     aa.display();

// };
// But this is wrong for A for this solution what we  do
// we do ,we do some change in B its after i will 
// able to do print in A also 

//  #include<iostream>
// using namespace std;
// class A{
//     public:void display(){
//         cout<<"Base Class";
//     }
// };
// class B:public A{
//     public:
//     void display(){
//         cout<<"Derived class"<<endl;
//         A::display();//There is a display name function A please u make a call it
//         //::->Scope resolution operator
//     }

// };
// int main(){
//     B aa;
//     aa.display();

// };


//I can use another method to access all of these

#include<iostream>
using namespace std;
class A{
    public:void display(){
        cout<<"Base Class";
    }
};
class B:public A{
    public:
    void display(){
        cout<<"Derived class";
    }
};
int main(){
    // B aa;
    // aa.display();
    A aa;
    aa.A::display();//->Mtlb A ke andar jo display function hai usko call kiye
    B bb;
    bb.B::display();

};