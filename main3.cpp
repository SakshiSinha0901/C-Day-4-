#include <iostream>
using namespace std;

//if else if block
int main(){
    int marks = 55;

    if (marks > 90){
        cout<<"A";
    } 
    else if (marks > 80){
        cout<<"B";
    } 
    else if (marks > 70){
        cout<<"C";
    } 
    else if (marks > 60){
        cout<<"D";
    } 
    else {
        cout<<"You failed.";
    }
    return 0;

} 