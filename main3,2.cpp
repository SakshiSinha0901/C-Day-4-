#include<iostream>
using namespace std;

int main(){
    int weight;
    cout<<"Enter your weight:"<<endl;
    cin >> weight;

    int height;
    cout<<"Enter your height:"<<endl;
    cin >> height;
    if(height > 5){
        if (weight>70){
            cout<< "You got good health."<<endl;
        
        }
        else{
            cout<<"You need to exercise."<<endl;
        }
    }
    else{
        cout<<"You need complan."<<endl;
    }

    return 0;
}