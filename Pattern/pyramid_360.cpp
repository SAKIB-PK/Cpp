#include<iostream>
using namespace std;
int main(){

    int space,rows;
    cin>>rows;
    for(int i=1;rows>=i;i++){
        space= rows-i;
        for(int j=1;space>=j;j++){
            cout<<" ";
        }
        for(int j=1;2*i-1>=j;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Another Pyramid Diagram
    
    for(int i=rows-1;1<=i ;i--){
        space= rows-i;
        for(int j=1;space>=j;j++){
            cout<<" ";
        }
        for(int j=1;2*i-1>=j;j++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}