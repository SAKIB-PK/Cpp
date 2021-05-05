#include<iostream>
using namespace std;
int fact(int n){
    int result = 1;
     for(int i=2;i<=n;i++){
         result *=i;
     }
     return result;
}

int main(){

    int row;
    cin>>row;
    for(int i=0; i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j) * fact(i-j) )<<" ";
        }
        cout<<endl;
    }

return 0;
}