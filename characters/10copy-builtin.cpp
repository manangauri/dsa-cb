#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[]="abcde";
    char s2[]="xyz";
    cout<<"before copying s1[]: "<<s1<<endl;
    strcpy(s1,s2);
    cout<<"after copying s1[]: "<<s1<<endl;

    
}