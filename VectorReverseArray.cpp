//Here i was using an extra array to store and reverse 
//to that array.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(67);
    v.push_back(12);
    v.push_back(19);
    display (v);
    vector<int>v2(v.size());{
for(int i=0;i<v2.size();i++){
    //int j=v2.size()-1-i;
    v2[i]=v[v.size()-1-i];
    cout<<endl; 
}
display(v2);
    }
                                                                                     
}



//We have to reverse the part of the index of array till which index it has asking
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){ 
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return; 
}
int main(){
vector<int>m;
m.push_back(23);
m.push_back(98);
m.push_back(90);
m.push_back(99);
display(m);
reversePart(0,2,m);
display(m);
}



































