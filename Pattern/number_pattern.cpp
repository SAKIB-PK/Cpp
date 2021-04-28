#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1;n>=i;i++){
        //space
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        //element
        int count =1;
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
        //output
//          1 
    //     1 2 
    //    1 2 3 
    //   1 2 3 4 
    //  1 2 3 4 5 
    // 1 2 3 4 5 6
return 0;
}