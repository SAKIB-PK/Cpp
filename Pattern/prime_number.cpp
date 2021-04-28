
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isNumber =1;

    for(int i =2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Not-Prime"<<endl;
            isNumber = 0;
            break;
        }
    }
    if(isNumber == 1){
        cout<<"Prime"<<endl;
    }
    

    
return 0;
}
