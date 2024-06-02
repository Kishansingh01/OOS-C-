
//Array  is pass by reference it direct takes adress.

//Here i have only call the display function and it is working
// #include<iostream>
// using namespace std;
// void display(int a[]){
//     for(int i=0;i<=4;i++){
//         cout<<a[i]<<" ";
//     }
//     return;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
// //Accessing the elements of aerray 
// //in another function
// //Updation,Pass by value
//     display (arr);

// }



// If i have to make a call to the functioin(what happens here is i have declaring a an array and making a loop 
// to go and traverse each of them its after i have make another function change and i have made a change in index
// its after i have again call the display and thus it works,Here i am sending my value by saying inta,b.But array
//is pass by reference not pass by value)
#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
     cout<<endl;
    return ;
}
void change(int b[],int size){
b[0]=100;
}
int main(){
    int arr[]={1,2,3,4};
    int size=sizeof (arr)/4;
    cout<<size<<endl;
display(arr,size);
change(arr,size);
 display(arr,size);
 }



//  #include<iostream>
// using namespace std;
// void display(int a[]){
//     for(int i=0;i<=4;i++){
//         cout<<a[i]<<" ";
//     }
//      cout<<endl;
//     return ;
// }
// void change(int b[]){
// b[0]=100;
// }
// int main(){
//     int arr[5]={1,2,3,4};
// display(arr);
// change(arr);
//  display(arr);
//  }
// If i write int*a then its okay it is right.Which denotes a pointer