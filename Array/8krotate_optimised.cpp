#include<iostream>
using namespace std;
int main(){      
    int nums[]={10,20,30,40,50,60,70};  
    int n= sizeof(nums)/sizeof(int);
    int k;
    cout<<"enter the value of k : ";
    cin>>k;
    k=k%n;
    int i=0;
    int j=n-1;
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    i=0;
    j=k;
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    i=k;
    j=n-1;
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    for(i=0;i<n;i++){
        cout<<nums[i]<<endl;
    }
}
