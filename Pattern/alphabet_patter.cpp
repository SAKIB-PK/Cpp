#include<iostream>
using namespace std;
int main(){
    int i,j,rows;
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<" "<<char(64+j);
        }
        cout<<endl;
    }

    // output
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E

    return 0;
}