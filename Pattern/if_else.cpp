#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age > 18){
        if(age<10){
            cout<<"You're looking kid!\n";
        }else if(age>18){
            cout<<"Your eligible for vote!\n";
        }
    }else{
        cout<<"You're not eligible for vote! \n";
    }
    return 0;
}