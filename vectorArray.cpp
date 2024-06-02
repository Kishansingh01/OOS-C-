// Vector=>Vector is an Dynamic array.Vector comes in the concept because we 
// know that array goes with continously and if we have to add something in the
//  array we have to make another array and we have toinsert that element in the array.


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;//No need to mension the size
    v.push_back(6);
    v.push_back(112);//It goes with a new element in each array
    v.push_back(89);//Do not use []->Square bracket when u did not give the size  and use
    v.push_back(87);//This push _back
    //If u want to update or accessing it use 
    v[0]=10;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}
