// 1 
// 11
// 111 
// 1001 
// 11111
// 100001

#include <iostream>
using namespace std;
int main(){
    int n=6;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            int k=7;
            int m=1;
            while(m<=k){
                cout<<"1";
                m++;

            }
            j++;
        }
        i++;
        cout<<endl;

    }
}