#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no :";
    cin>>n;
    int ans=0;
    while(ans*ans <= n){
        ans = ans+1;

    }
    ans=ans-1;
    cout<<ans<<endl;
    

    return 0;
}