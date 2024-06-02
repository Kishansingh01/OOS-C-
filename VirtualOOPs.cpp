
//        VIRTUAL FUNCTION
// Virtual is a keyword in C++ which is redefined in derived class.
// When a virtual function is defined in base class then the pointer 
// to base class is created. Now,On the basis of type of object assined
// to the pointer, the function is called. This is called run time polymorphism.
// the respective class function is called


//Early Binding:-Mtlb(Overriding) pahle pta lg jaa rha hai ki kaun pahle execute hoga A or B.

// #include<iostream>
// using namespace std;
// class A{
//     public:void display(){
//         cout<<"Base Class"; }
// };
// class B:public A{
//     public:
//     void display(){
//         cout<<"Derived class";
//     }
// };
// int main(){
//     // B aa;
//     // aa.display();
//     A aa;
//     aa.A::display();//(Early binding)//->Mtlb A ke andar jo display function hai usko call kiye
//     B bb;
//     bb.B::display();
// };

// Come to the virtual,Below is for the virtual.

// #include<iostream>
// using namespace std;
// class A{
//     public:
//    virtual void show(){//Usi class ke function ko call karega
//         cout<<"Base class";
//     }
// };
// class B:public A{
//     public:
//     virtual void show(){
//         cout<<"Derived class";
//     }
// };
// int main(){//Jb function ka call run time virtual ke through  me pta chalta hai ,run time mein decide kiya jata hai 
//to use late binding kahate hai
    //  A*bptr; 
    //  A aa;
    //  bptr=&aa;
    //   bptr->show();
//     B*bptr;  //i am taking B part here but still it if printing A part
//     B bb;  //Problem become skip
//     bptr=&bb;
//     bptr->show();//->Mtlb A ke andar jo show function hai usko but ab ye B ko nhi call karega
// };



      // PURE VIRTUAL FUNCTION=> Pure virtual  means up function has no any definition  So,Derived class is 
   //responsible for access the function it is called pure function

  #include<iostream>
using namespace std;
class A{
    public:
   virtual void show()=0;//Usi class ke function ko call karega
//    Pure virtual  means up function has no any definition  So,Derived class is 
//    responsible for access the function it is called pure function
};
class B:public A{
    public:
    virtual void show(){
        cout<<"Derived class";
    }
};
int main(){//Jb function ka call run time virtual ke through  me pta chalta hai ,run time mein decide kiya jata hai 
//to use late binding kahate hai
     A*bptr; 
     A aa;
     bptr=&aa;
      bptr->show();
//     B*bptr;  //i am taking B part here but still it if printing A part
//     B bb;  //Problem become skip
//     bptr=&bb;
//     bptr->show();//->Mtlb A ke andar jo show function hai usko but ab ye B ko nhi call karega
};