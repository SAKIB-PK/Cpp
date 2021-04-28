#include<iostream>
using namespace std;

int main(){
    //Hallow Rectangle
    //row,col initialize
    int row,col;
    cin>>row >>col;

    //Rectangle Design
    // for(int i=1;i<=row;i++){
    //     for(int j=1;j<=col;j++){
    //         cout<< "*";
    //     }
    //     cout<< endl;
    // }
    //hallow Rectanlge
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(j==1 || j == col ||i==1||i== row){
                cout<<"*";
            }else{
                cout<< " ";
            }
        }
        cout<< endl;
    }
    //output
    // supposse row =3 col = 4
        // *  *  *  *
        // *        *
        // *  *  *  *

    return 0;
}