#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no : ";
    cin>>n;
    int ans;

    for (int i=1 ; i<=n ; i++){
        int num;

        cin>>num;
        ans = ans ^ num;

        
    }
    cout<<ans;
}