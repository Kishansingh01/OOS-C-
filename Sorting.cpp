//We have given an array which only consists 0,1 
//we have to do sort it.

// #include<iostream>
// #include<vector>
// using namespace std;
// void sort1(vector<int>&v){
//     int n =v.size();
//     int noz=0;
//     int noo=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0){
//             noz++;
//         }
//         else noo++;
//     }
//     //filling elements
//     for(int i=0;i<n;i++){
//         if(i<noz){
//             v[i]=1;
//         }
//         else v[i]=0;
//     }
// }
// int main(){
// vector<int>v;
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(1);
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";;

// }
// cout<<endl;
// sort1(v);
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// }




#include<iostream>
#include<vector>
using namespace std;
void sort2(vector<int>&v){
int a=v.size();
int noo=0;
int noz=0;
for(int i=0;i<a;i++){
    if(a[i]==0){
       noo++;
    }
    else{b[i]==1}
    noz++;   
}
for(int i=0;i<a;i++){
    if(i<noz){
        v[i]=0;
    }
    else{v[i]=1;}
}
}
void sort2(vector<int>&v){
    int a=v.size();
    int i=0;
    int j=a-1;
    while(i<j){
        if(a[i]==1){
            i++;
        }
        else(a[j]==0){
            j--;
        }
        else(i>j) break;
        else(a[i]==0&&a[j]==1){
            a[i]=1;
            a[j]=0;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
cout<<endl;
sort2(v);
{
    for(int i=0;i<n.size();i++){
        cout<<v[i]<<" ";
    }
}
}










