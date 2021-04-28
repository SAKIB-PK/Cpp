#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //rows
    for(int i=1;i<=n;i++){
        int j=1;
        //space
        for(int j=n-i;j>=1;j--){
            cout<<"  ";
        }
        //front number
        int k =i ;
        for(;j<=i;j++){
            cout<<k<<" ";
            k--;
        }
        //backword number
        k =2;
        for(j=1;j<=i-1;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
return 0;
}