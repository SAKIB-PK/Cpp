#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter two operand:";
    cin>>a>>b;
    cout<<"Enter an operator: ";
    cin >>op;
    switch(op){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        default:
            cout<<"Operator not found!\n";
            break;
    }


    return 0;
}