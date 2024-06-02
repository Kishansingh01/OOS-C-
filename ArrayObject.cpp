//It is the simplest way to make my program  by utube mam
// into array by object and make a loop and take 
// various object of the student and use.

// class student{
//     char name[20];
//     int age;
//     public:
//     void getData(){
//         cout<<"Enter the name"<<endl;
//         cin>>name;
//         cout<<"Enter the age"<<endl;
//         cin>>age;
//     }
//     void putData(){
//         cout<<"The name id"<<name<<endl;
//         cout<<"The age is"<<age<<endl;
//     }
// };
// int main(){
//   student[3];
//   int n;
//   cin<<n;
//   for(int i=0;i<3;i++){
//     s[i].getData();
//   }
//   for(int i=0;i<3;i++){
//     s[i].putdata;
//   }
// return 0;
// }


#include<iostream>
using namespace std;
class Demo{
    int n;
    public:
    void getdata(){
        cout<<"Enter the value of n:";
        cin>>n;
    }
        void putdata(){
            cout<<n<<endl;
            
            }
        };
int main(){
    Demo aa[10];
    for(int i=0;i<10;i++){
        aa[i].getdata();
        for(int i=0;i<10;i++){
            aa[i].putdata();
        }
        return 0;
    }
}