// 0 
// 1    1 
// 2    3     5 
// 8   13    21    34
#include<iostream>
using namespace std;
int main() {
	int n=4;
    int a=1;
    int b=1;
    int c;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<"0"<<"\t"<<endl;
        }
        if(i==2){
            cout<<"1       1"<<"\t"<<endl;
        }
        if(i>2){
            for(int j=1;j<=i;j++){
                c=a+b;
                a=b;
                b=c;
                cout<<c<<"\t";
            }
            cout<<endl;
        }
    }
}
