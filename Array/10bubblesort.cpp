#include<iostream>
using namespace std;
int main(){
    int arr[]={50,40,30,20,10};
    int n=sizeof(arr)/sizeof(int);
    int count=0;  //to count no of comparisons done in bubble sort
    for(int i=1;i<=n-1;i++){
        bool flag = false;//to optimize our code as bubble sort perform n^2 steps to sort but if our arr is already sorted so minimize the steps
        for(int j=0;j<n-i;j++){
            count++;
            if(arr[j]>arr[j+1]){
                flag = true;
                swap(arr[j],arr[j+1]);
            }    
        }
        if(flag == false){
            break;
        }
    }
    cout<<count <<endl;
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}