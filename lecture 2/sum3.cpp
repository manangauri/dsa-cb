#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no: ";
    cin>>n;
    int s=0;
    while(n>0){
        int d=n%10;
        s=s+d;
        n=n/10;
    }
    cout<<s;

    return 0;
}