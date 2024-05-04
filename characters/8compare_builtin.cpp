#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[]="abc";
    char s2[]="abj";
    int ans= strcmp(s1,s2);

    if(ans==0){
        cout<<"s1 and s2 are equal"<<endl;
    }else if(ans==-1){
        cout<<"s1 is less than s2"<<endl;
    }else{
        cout<<"s1 is more than s2"<<endl;
    }
}