#include <iostream>
using namespace std;
int main(){
    int x; // initialization variable
    x = 12; // Declaration Variable
    cout<<"int datatypes size of " << sizeof(x)<<endl;
    short int sh;
    cout<<"short int datatypes size of " << sizeof(sh)<<endl;
    long int lo;
    cout<<"long int datatypes size of " << sizeof(lo)<<endl;
    long long int lon;
    cout<<"long long int datatypes size of " << sizeof(lon)<<endl;
    float s;
    cout<<"float datatypes size of " << sizeof(s)<<endl;
    double d;
    cout<<"double datatypes size of " << sizeof(d)<<endl;
    char ch; 
    cout<<"char datatypes size of " << sizeof(ch)<<endl;
    bool b;
    cout<<"bool datatypes size of " << sizeof(b)<<endl;
    return 0;
}