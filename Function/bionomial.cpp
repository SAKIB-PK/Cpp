#include<iostream>
using namespace std;
    
int fact(int num){
    int result =1;
    for(int i=1;i<=num;i++){
        result*=i;
    }
    return result;
}
int main(){
    int n,r;
    cin>>n>>r;
    int ans = fact(n) /(fact(r)*fact(n-r));
    cout<<ans<<endl;
return 0;
}