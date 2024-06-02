//Rotate a given array by a, k=2 
// int arr[]={1,2,3,4,5,6,7,8,9};
// k=3,So  arr[]={8,9,1,2,3,4,5,6,7}

//We do reverse where till it had asked before k=2 
//and k=4 from both reverse solo  its after reverse all
//7,6,5,4,3,2,1    9,8
//then 8,9,1,2,3,4,5,6,7



//FOr rotation part
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl;}
void reversePart(int i,int j,vector<int>&a){
    while(i<=j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    return ;
}
int main(){
    vector<int>m;
    m.push_back(20);
    m.push_back(87);
    m.push_back(23);
    m.push_back(234);
    m.push_back(90);
    m.push_back(45);
    m.push_back(43);
    display(m   );
    int n=m.size();
    int k=2;
    if(k>n){
        k=k%n;
    }
    reversePart(0,n-k-1,m);
    reversePart(n-k,n-1,m);
    reversePart(0,n-1,m);
    display(m);


}






































