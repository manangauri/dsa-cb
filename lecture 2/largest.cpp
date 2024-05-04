#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n=5;
    int i=1;
    int x;
    int lsf = INT_MIN;
    while(i<=n){
        cin>>x;
        if(x>lsf){
            x=lsf;
        }
        x++;
        i++;

    }
    cout<<lsf;








    return 0;
}