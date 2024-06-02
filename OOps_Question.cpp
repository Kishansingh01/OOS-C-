#include<iostream>
using namespace std;
class Book{
    public:
    string name;
    int price;
int no_of_books;
int countBooks(int p){
    if(p<price){
        return 1;}
        else 
            return 0;
    }
    bool bookPresent(string book){
        if(name==book){
            return true;}
            else if(name==book){
                return false;
            }   
        }}
    ;
    int main(){
    Book HarryPotter;   
    HarryPotter.name="Harry";
    HarryPotter.price=233;
    HarryPotter.no_of_books=23;
    cout<<HarryPotter.countBooks(2000)<<endl;
    cout<<HarryPotter.bookPresent("Harry");
    }