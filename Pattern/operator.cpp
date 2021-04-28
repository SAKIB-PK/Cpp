#include<iostream>
using namespace std;
int main(){

    //variable initialize
    int a=10;


    //Arithmetic Operator 
    int b = a++;
    cout<<a<<" " <<b <<endl;//a=11,b=10
    b= a--;
    cout<<a <<" "<<b << endl;//a=10,b=11
    //logical operator and Conditional or Relational Operator
    int n=10;
    // cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"Divisible by 2 and 3 both!\n";
    }else if (n%2==0){
        cout<<"Divisible by only 2 \n";
    }else if(n%3==0){
        cout<<"Divisible by only 3 !\n";
    }else{
        cout<<"Divisible by none!\n";
    }



    return 0;
}