//You have to find the two doublet whose summation is 7.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    vector<int>v;
    cout<<"Enter the exact summation target";
    cin>>x;
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int array;
    cout<<"Enter the array elements";
    for(int i=0;i<n;i++){   //This loop is taken for the iterating of array in a form by taking an input
        int q;
        cin>>q;
        v.push_back(q);
    }}

for(int i=0;i<=v.size()-2;i++){        //Here we are playing with two numbers that i am iterating first and
    for(int j=i+1;j<=v.size()-1;j++){  //after to all and since it is index so, we do -2 because index till
        if (v[i]+v[j]==x){             //7 we have to go and we are adding all of then in coding and index are
 cout<<"("<<i<<","<<j<<")"<<endl;//coming.
        }
    }
        }