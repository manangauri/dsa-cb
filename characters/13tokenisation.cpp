#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[]="abc.def.ghi";
    char dlim[]=".";
    char* token = strtok(s1,dlim);
    while(token != NULL){
        cout<<token<<endl;
        token = strtok(NULL,dlim);
    }
}