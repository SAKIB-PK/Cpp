#include<iostream>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int x=1,y;
    while(n>0){
        y = n%10; //given last number
        ans += x*y;
        x *= 2;
        n/=10;

    }
    return ans;
}
int main(){

    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
return 0;
}