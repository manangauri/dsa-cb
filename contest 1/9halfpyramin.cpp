// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    while(i<=n){
        int j=1;
        int no=1;
        while(j<=i){
            cout<<no<<" ";
            j++;
            no++;

        }
        i++;
        cout<<endl;
    }

}