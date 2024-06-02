// We have to find the index position of the last element of x=6;By forward loop
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(32);
    v.push_back(78);
    v.push_back(21);
    v.push_back(21);
    int x=213;
    int idx=-1; 
    for(int i=0;i<v.size();i++){
        if( v[i]==x) idx=i;
    }      
    cout<<idx;}


 //   By the backward loop
 // We have to find the index position of the last element of x=6;By backward loop


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(32);
    v.push_back(78);
    v.push_back(21);
    v.push_back(21);
    int x=213;
    int idx=-1; 
    for(int i=v.size()-1;i>=0;i--){
        if( v[i]==x){
             idx=i;}
        break;
    }      
    cout<<idx;}