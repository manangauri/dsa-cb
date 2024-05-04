#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no : ";
    cin>>n;
    if (n&1 == 0){
        cout<<"the no is : even"<<endl;

    }else{
        cout<<"the no is : odd"<<endl;
    }
}