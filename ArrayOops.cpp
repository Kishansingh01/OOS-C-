//By Pw Skills Teachers

#include<iostream>
using namespace std;
class Cricketer{
public:
char name;
int age;
int noOfTestMatches;
int  averageScore;

};
int main(){
Cricketer virat;
virat.name='v';
virat.age=30;
virat.noOfTestMatches=100;
virat.averageScore=80;

Cricketer dhoni;
dhoni.name='D';
dhoni.age=49;
dhoni.noOfTestMatches=150;
dhoni.averageScore=50;
Cricketer cricketers[2]={virat,dhoni};
for(int i=0;i<2;i++){
cout<<cricketers[i].name<<endl;
cout<cricketers[i].age<<endl;
cout<<cricketers[i].noOfTestMatches<<endl;
cout<<cricketers[i].averageScore<<endl;
}}






#include<iostream>
using namespace std;
class Cricketer{
public:
char name;
int age;
int noOfTestMatches;
int  averageScore;

};
int main(){
    vector<Cricketer>cricketers;
Cricketer virat;
virat.name='v';
virat.age=30;
virat.noOfTestMatches=100;
virat.averageScore=80;

Cricketer dhoni;
dhoni.name='D';
dhoni.age=49;
dhoni.noOfTestMatches=150;
dhoni.averageScore=50;
for(int i=0;i<2;i++){
    Cricketer *cricketer=new Cricketer;
    cricketer->name=;
    cricketers.add(*cricketer);

}
Cricketer cricketers[2]={virat,dhoni};
for(int i=0;i<2;i++){
cout<<cricketers[i].name<<endl;
cout<cricketers[i].age<<endl;
cout<<cricketers[i].noOfTestMatches<<endl;
cout<<cricketers[i].averageScore<<endl;
}}

