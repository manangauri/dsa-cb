#include <iostream>
using namespace std;
int main(){
    int n=5;
    int s=0;
    int i=1;
    int x;
    while(i<=n){
        cin>>x;
        s=s+x;
        i++;
    }
    cout<<s;
    return 0;
}