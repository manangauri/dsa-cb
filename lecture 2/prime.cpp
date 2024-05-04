#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    int i=2;
    while(i<=n){
        int d;
        d=i%2;
        if(d==0){
            cout<<"not prime";
            break;
        }
        else{
            cout<<"prime";
            break;
        }
        i++;
    }



    return 0;
}