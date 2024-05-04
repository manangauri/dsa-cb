#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    char str[]= "hello";
    int n=strlen(str);
    cout<<"the original string"<<str<< endl;
    reverse(str,str+n);
    //to reverse a string in some
    //specific part we use
    //(str + first part index , str + end part index before which we have to reverse)
    cout<<"the reversed string is : "<<str <<endl;
}