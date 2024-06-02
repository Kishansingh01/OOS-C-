//We have to reverse the part of the index of array till which index it has asking
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&a){ 
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// void reversePart(int i,int j,vector<int>&v){
//     while(i<=j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     return; 
// }
// int main(){
// vector<int>m;
// m.push_back(23);
// m.push_back(98);
// m.push_back(90);
// m.push_back(99);
// display(m);
// reversePart(0,2,m);
// display(m);
// }

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
    display(m);
    int n=m.size();
    int k=2;
    if(k>n){
        k=k-n;
    }
    reversePart(0,n-k-1,m);
    reversePart(n-k,n-1,m);
    reversePart(0,n-1,m);
    display(m);


}

































