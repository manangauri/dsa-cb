#include<iostream>
using namespace std;
int main(){
    char str[]="coding blocks";
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<count<<endl;
}