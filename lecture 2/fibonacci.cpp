// 0 1 2 3 5 8 13 21 34
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    int i=2;
    int a=0;
    int b=1;
    cout<<"fibonacci series: ";

    while(i<=n){
        if (n==0 || n==1){
        cout<<n<<" ";
        }else{

        int c = a+b;
        a=b;
        b=c;
        i++;

        cout<<c<<" ";
    }
    }
   

    return 0;
}