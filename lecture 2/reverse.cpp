#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no: ";
    cin>>n;
    int i=1;
    int s=0;
    while(i<=n){
        int d=n%10;
        s=s * 10+d;
        n=n/10;
        i++;
    }
    cout<<s;
    return 0;
}