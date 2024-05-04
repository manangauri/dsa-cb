// a non negative integer n .set the kth bit of n .
//  eg n=42 and k=4 this means that set 4th bit of 42 that is set 4th bit of 
//  42= 101010 
//      111010
// which comes out to be 58 as 58 = 111010

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no ; ";
    cin>>n;
    int k;
    cout<<"enter the value of k : ";
    cin>>k;
    cout<< (n | 1<<k) ;
}