//        1 
//      2 3 2
//    3 4 5 4 3
//  4 5 6 7 6 5 4

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++ ){
        int no=i;
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<no<<" ";
            no++;

        }
        no=no-2;
        for(int k=1;k<=i-1;k++){
            cout<<no<<" ";
            no--;
        }
        cout<<endl;

    }

}