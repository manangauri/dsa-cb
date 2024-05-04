#include<iostream>
using namespace std;
int main(){
    int a[]={10,20,30,10,20};
    int n=sizeof(a)/sizeof(int);
    int t;
    cout<<"enter the target no ";
    cin>>t;
    int i;
    for(i=0;i<n; i++){
        if(a[i]== t){
            cout<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"-1"<<endl;
    }
}