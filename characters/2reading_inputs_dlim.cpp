#include<iostream>
using namespace std;
void readstring(char str[], char dlim){
    char ch;
    int i=0;
    while(true){
        ch=cin.get();
        if(ch==dlim){
            break;
        }
        str[i]=ch;
        i++;
    }
    str[i]='\0';
}
int main(){
    char str[100];
    cout<<"enter the string"<<endl;
    readstring(str, '$');
    cout<<"the entered string is : "<<str<<endl;
}