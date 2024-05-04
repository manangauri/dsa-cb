#include <iostream>
using namespace std;
int main(){
    int n;
    int a=0;
    int b=1;
    cout<<"Enter the no : ";
    cin>>n;
    if(n==0 || n==1){
        cout<<true;
    }
    else{

        while(true){
            int c=a+b;
            if(c==n){
                cout<<"true";
                break;

            }
            if(c>n){
                cout<<"false";
                break;
            }
            a=b;
            b=c;

            }
        }
        return 0;


    }


