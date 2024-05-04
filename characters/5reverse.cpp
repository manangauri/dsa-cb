#include<iostream>
#include<cstring>
using namespace std;
void reverseString(char str[]){
    int n=strlen(str);
    int i=0;
    int j=n-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
}
int main(){
    char str[]= "hello";
    cout<<"the original string"<<str<< endl;
    reverseString(str);
    cout<<"the reversed string is : "<<str <<endl;
}