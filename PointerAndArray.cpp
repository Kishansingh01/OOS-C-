 //It print the first element of the adress
// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={1,2,2,3,5,6};
//     int*ptr=array;
//     //int*ptr=&array[0];
//     cout<<ptr;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int x=4;
// int*ptr=&x;
// cout<<ptr;}

//We can also modify array by using the pointer
// #include<iostream>
// using namespace std;
// int main(){
// int array[]={1,2,3,4,3,4};
// int*ptr=array;
// cout<<ptr<<endl;
// ptr[0]=8;//*ptr=8;
// for(int i=0;i<8;i++){
// cout<<ptr[i]<<" ";
// }
       
// }  

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int*ptr=arr;//Giving the adress
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;//Means increase by+4 of the array
    }
    ptr=arr;

*ptr=8;
ptr++;
*ptr=9;
ptr--};


THis was boring thats why i leave it.
