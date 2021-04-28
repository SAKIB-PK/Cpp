#include<iostream>
using namespace std;
int main() {
    //row value assign 
    int n;
    cin>>n;
    //half pyramid code
    //Output
        // ****
        // ***
        // **
        // *
    //code for Half pyramid
    // for(int i = n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //half pyramid after 180 rotation
    // output
       //         *
    //          * *
    //        * * *
    //      * * * *
    //    * * * * *

    // for(int i =1; i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(j <=n-i){
    //             cout<<"  ";
    //         }else{
    //             cout<<" *";
    //         }
    //     }
    //     cout<<endl;
    // }

    //Half pyramid using number
    //output
    // 1
    // 2  2
    // 3  3  3
    // 4  4  4  4
    // 5  5  5  5  5
    //code
    // for(int i = 1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"  "<<i;
    //     }
    //     cout<<endl;
    // }

    //Floyd pyramid using number
    //output
    //code
    int count = 1;
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){    
            cout<<"  "<<count;
            count++;
        }
        cout<<endl;
    }


    return 0;
}