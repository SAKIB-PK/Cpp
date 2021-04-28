#include<iostream>
using namespace std;
int main(){


    int n;
    cin>> n;
    //Row printing
    for(int i =1;i<=n;i++){
        //column print
        //space and Element
        for(int j=n-i;j>=1;j--){
            cout<<' ';
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}