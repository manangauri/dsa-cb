#include<iostream>
using namespace std;
void copystring(char s1[], char s2[]){
    int i=0;//for iterating over s1
    int j=0;//for iterating over s2
    while(s2[j]!='\0'){
        s1[i]= s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
}
int main(){
    char s1[]="abcde";
    char s2[]="xyz";
    cout<<"before copying s1[]: "<<s1<<endl;
    copystring(s1,s2);
    cout<<"after copying s1[]: "<<s1<<endl;

    
}