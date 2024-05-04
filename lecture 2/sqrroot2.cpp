// to find square root at decimal places to get more significant answer


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
    while(ans*ans <= n){
        ans = ans+0.1;

    }
    ans=ans-0.1;
    while(ans*ans <= n){
        ans = ans+0.01;

    }
    ans=ans-0.01;

    cout<<ans<<endl;
    

    return 0;
}