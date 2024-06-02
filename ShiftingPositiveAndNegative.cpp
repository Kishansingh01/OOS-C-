#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>n;
    n.push_back(23);
    n.push_back(12);
    n.push_back(-12);
    n.push_back(-76);
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<" ";
    }

}