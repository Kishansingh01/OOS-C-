//Shallow and Deep copy
//Shallow copy: only copies the reference of the object.Ex-i am making one object A value is 5 of B. So, i made
A=B,So, what i keep value of a it will be in be.So it is a shallow copy. 

//Deep copy: copies the object itself.So, if i make a copy of A=some memory,B=some memory.So, i if will make a=b,and 
// the same value will not copy from both A and B.

// Bike b2=b1;(Deep copy instructor)
// Bike b2(b1);(deep copy instructor)

// call by value(Call by value me copy bnti hai)
// int add(int x){
//     x++;
// }
// main(){
//     int a
//     add(a);
// }


// call by reference (Isme original value pr kaam hota hai)
// int add(int &x){
//     x++;
// }
// abb(a)

To reduce the copy constructor problem it will go to infinite loop
we will use pass by reference 
Bike(Bike&b){
    Call by reference
}
