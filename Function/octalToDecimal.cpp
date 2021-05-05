#include<iostream>
using namespace std;
int octaToDeci(int n){
    int ans = 0,x = 1, y;
    while(n>0){
        y = n % 10;
        ans += x*y;
        x *=8;
        n /=10;
    }
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    cout<<octaToDeci(n)<<endl;
return 0;
}