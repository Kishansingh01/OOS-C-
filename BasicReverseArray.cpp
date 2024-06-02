// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>v;
//     v.push_back(23); 
//     v.push_back(13);
//     v.push_back(45);
//     v.push_back(67);
//     v.push_back(34);
//     display(v);
//     // int i=0;
//     // int j=v.size()-1;
//     // while(i<=j){
//     //     int temp=v[i];(While method)
//     //     v[i]=v[j];
//     //     v[j]=temp;;
//     //     i++;
//     //     j--;
//     // for(int i=0;int j=v.size()-1;i<=j;i++,j--){   (Loop method)
//     //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    // }           
    
    // reverse(v.begin(),v.end());//(This built in function is not working)
    //           // (Here we have used two methods one is while and oneis for )
    // display(v);
    // }

//display(v);
//}



//(DOwn one is yhe correct one for reversing a string)
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
void reverse(vector<int>&v){
    int i=0;
    int j=v.size()-1;
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
reverse(m);
display(m);
}



































