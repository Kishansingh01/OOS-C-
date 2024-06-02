//In constructor first Parent will be called its after child bcz child come from parents.
//But in Destructure first child will get distory its after Parents
//Protected means directly calling by inherit i think like this
// #include<iostream>
// using namespace std;
// class Human{
//  protected:
//  string name;
//  int age;
//  public:
//  void work(){
//     cout<<"I am working\n";
//  }
// };
// class Student:public Human{
//  int roll_no,fees;
//  public:
//  Student(string name,int age,int roll_no,int fees)//Constructor Call
// {
//     this->name=name;
//     this->age=age;
//     this->roll_no=roll_no;
// }
// };
// int main(){
//   Student A1("Rohit",26,32,99);  
//   A1.work();
// }

//I can call Human in Student in upper constructor.Example:-Below

// #include<iostream>
// using namespace std;
// class Human{
//  protected:
//  string name;
//  int age;
//  public:
//  Human(string name,int age){
//     this->name=name;
//     this->age=age;
//  }
//  void display(){
//     cout<<name<<" "<<age<<"\n";
//  }
//  void work(){
//     cout<<"I am working\n";
//  }
// };
// class Student:public Human{
//  int roll_no,fees;
//  public:
//  Student(string name,int age,int roll_no,int fees):Human(name,age)//Constructor Call
// {
//     this->roll_no=roll_no;
//     this->fees=fees;
// }
// void display(){
//     cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
//  }
// };
// int main(){
//   Student A1("Rohit",26,32,99);  
//   A1.work();
//   A1.display();
// }


//2....MULTILEVEL INHERITANCE

// Means i have an animal->Dog comes under animal->German Sepherd
// comes under dog and animal.So,this way 
// animal.dog.German Sepherd is called multilevel inheritance.

// #include<iostream>
// using namespace std;
// class Person{
//     protected:
//     string name;
//     public:
//     void introduce(){
//         cout<<"Hello my name is "<<name<<endl;
//     }};
//     class Employee:public Person{
//         protected:
//         int salary;
//         public:
//         void monthly_salary(){
//             cout<<"My monthly salary is:"<<salary<<endl;
//         }
//     };
//     class Manager:public Employee{
//         public:
//         string department;
//          Manager(string name,int salary,string department){
//             this->name=name;
//             this->salary=salary;
//             this->department=department;
//          };
//          void work(){
//             cout<<"i am leading the department "<<department<<endl;
//          }
//     };
//     int main(){
//         Manager A1("Rohit",200,"Finance");
//         A1.work();
//         A1.monthly_salary();
//         A1.introduce();
//         //A1.salary();//It will throw an error bcz it is protected i cannont access and change it.
//         A1.department="Ro";
//     }



    //3..Multiple Inheritance(Like Sir Utuber bhi hai,Teacher bhi hai,Gamer bhi hai to ye teeno ko inherit sir kr sakte hai aur code teacher kh sakte hai)

    // #include<iostream>
    // using namespace std;
    // class Engineer{
    //     void money(){
    //         cout<<"Hello money";
    //     }
    //     public:
    //     string specialization;
    //     Engineer(){
    //         cout<<"Heello Engineers\n";
    //     }
    //     void work(){
    //         cout<<"I have specialization in "<<specialization<<endl;
    //     }
    // };
    // class Youtuber{
    //     public:
    //     int subscribers;
    //     Youtuber(){
    //        cout<<"Hello Youtubers\n";
    //     }
    //     void contentcreator(){
    //     cout<<"I have a subscriber base of "<<subscribers<<endl;
    //     }

    // };
    // class CodeTeacher:public Engineer,public Youtuber{//This will decide the constructor here engineer
    // //first .So,Constructor will call engineer first its after Youtuber
    //     public :
    //     string name;
    // CodeTeacher(){
    //     cout<<"Hello Coder";
    // }

    //    CodeTeacher(string name,string specialization,int subscriber){
    //     this->name=name;
    //     this->specialization=specialization;
    //     this->subscribers=subscribers;
    //    }
    //    void showcase(){
    //     cout<<"My name is "<<name<<endl;
    //     work();
    //     contentcreator();
    //    }

    // };
    // int main(){
    // CodeTeacher A1("Kishan","CSE",233323);
    // A1.showcase();
    // A1.work();
    // CodeTeacher();//Here i am using constructor
   // A1.money(); This will throw error bcz money is private
  //  };






//4.  HIERARCHICAL  INHERITNCE(Like we are human butStudent,teacher,Staff belongs to the human)


// #include<iostream>
// using namespace std;
// class Human{
//  protected:
//  string name;
//  int age;
//  public:
//  Human(){
// //It is the default constructor
//  };
//  Human(string name,int age){
//     this->name=name;
//     this->age=age;
//  }
//  void display(){
//     cout<<name<<" "<<age<<"\n";
//  }
//  void work(){
//     cout<<"I am working\n";
//  }
// };
// class Student:public Human{
//  int roll_no,fees;
//  public:
//  Student(string name,int age,int roll_no,int fees):Human(name,age)//Constructor Call
// {
//     this->roll_no=roll_no;
//     this->fees=fees;
// }
// void display(){
//     cout<<name<<" "<<age<<" "<<roll_no<<" "<<endl;
// }};
// class Teacher:public Human{
//     int salary;
//     public :
//     Teacher(int salary,string name,int age){
//         this->salary=salary;
//         this->name=name;
//         this->age=age;
//     }
//     void display(){
//          cout<<name<<" "<<age<<" "<<endl;
//     }
// };

// int main(){
//   Student A1("Rohit",26,32,99);  
//   A1.work();
//   A1.display();
//   Teacher A2(99,"Mohit",23);
//   A2.display();
// }



    //  HYBRID INHERITANCE(Mixture of two three Heritance )
// Like as=>Boy and girl is the inherit of students and same female and male is 
// is the inherit of boy and girl

// Boy is the multiple inheritance bcz it takes from male and student both.
// girl is also a multiple inheritance bcz it takes from both female and student
//Same format i can say that Student is hierarchical bcz boy and girl both comes there
   
//    #include<iostream>
//    using namespace std;
//    //student,boy,girl,male,female
//    class Student{
//     public:
//     void print(){
//         cout<<"I am student\n";
//     }
//    };
//    class Male{
//     public:
//     void Maleprint(){
//         cout<<"i am male"<<endl;
//     }
//    };
//   class Female{
//     public:
//     void Femaleprint(){
//         cout<<"i am female"<<endl;
//     }
//    };
//    class Boy:public Student,public Male{
//     public:
//     void Boyprint(){
//         cout<<"i am a boy"<<endl;
//     }
//    };
//    class Girl:public Student,public Female{
//     public:
//     void Girlprint(){
//         cout<<"i am a girl"<<endl;
//     }
//    };
//   int main(){
//     Girl G1;
//     G1.Girlprint();
//     G1.print();
//     Boy B1;
//     B1.Boyprint();
//     B1.print();
//   }





 //6. Multipath Heritance

// Means Human->Engineer->Code Teacher->
//             ->Youtuber->
// like Human,Engineer,Code Teacher,Youtuber,human they are multipath inheritance
// but difficulty is when i call one it will to another one and get two times.
//Here path is multiple thats why we called it multipath.


    #include<iostream>
    using namespace std;
    class Human{
        public:
        string name;
        void display(){
            cout<<"my name is"<<name<<endl;
        }
    };
    class Engineer:public virtual Human{
        public:
        string specialization;
        
        void work(){
            cout<<"I have specialization in "<<specialization<<endl;
        }
    };
    class Youtuber:public virtual Human{//Virtual lagane se wo ek hi baar inherit karega
        public:
        int subscribers;
       
        void contentcreator(){
        cout<<"I have a subscriber base of "<<subscribers<<endl;
        }

    };
    class CodeTeacher:public Youtuber,public Engineer{//This will decide the constructor here engineer
    //first .So,Constructor will call engineer first its after Youtuber
        public :
        int salary;
        CodeTeacher(){ 
        }
       CodeTeacher(string name,string specialization,int subscriber,int salary){
        this->name=name;//Here it is confused that name belongs to utuber or engineer
        this->specialization=specialization;
        this->subscribers=subscribers;
        this->salary=salary;
       }};
    int main(){
    CodeTeacher A1("Kishan","CSE",233323,978778778);
    A1.display();
    };//Here i am using constructor
  // A1.money(); This will throw error bcz money is private
//For multiple things where compiler get confused things we will use is VIRTUAL



