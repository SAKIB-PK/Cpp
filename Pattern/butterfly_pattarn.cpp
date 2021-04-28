#include<iostream>
using namespace std;
int main(){
    //variable initilize
    int n;
    cin>>n;
    //code for Butterfly pattern
    for(int i=1;i<=n;i++){
        for(int j= 1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j= 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Another half pattern
    for(int i=n;i>=1;i--){
        for(int j= 1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j= 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}