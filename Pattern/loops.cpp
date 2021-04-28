#include<iostream>
using namespace std;
int main(){
    //variable initialize 
    int sum =0,n=10,k=1;
    int j =1;
    //for loop 

    for(int i = 1 ; i<101; i++){
        sum = sum+i;
    }
    cout<<"Sum: " << sum <<endl;
    //while loop
    while(j<11){
        cout<< j<<" ";
        j++;
    }
    //do while loop
    do{
        cout<< k<< " ";
        k++;
    }while(k<n+1);


    return 0;
}