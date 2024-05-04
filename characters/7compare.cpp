#include<iostream>
#include<cstring>
using namespace std;
int compare(char s1[],char s2[]){
    int i=0;
    int j=0;
    while(s1[i]!='\0' and s2[j]!='\0'){
        if(s1[i]>s2[j]){
            return 1;
        }
        else if(s1[i]<s2[j]){
            return -1;
        }
        i++;
        j++;
    }
    if(s1[i]!='\0'){
        return 1;
    }else if(s2[j]!='\0'){
        return -1;
    }else{
        return 0;
    }
}
int main(){
    char s1[]="abc";
    char s2[]="abc";
    int ans = compare(s1,s2);
    if(ans==0){
        cout<<"s1 and s2 are equal"<<endl;
    }else if(ans==-1){
        cout<<"s1 is less than s2"<<endl;
    }else{
        cout<<"s1 is more than s2"<<endl;
    }
}