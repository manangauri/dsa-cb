#include<iostream>
using namespace std;
int main() {
	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);
    int i;
    cout<<"enter the starting range value :"<<endl;
    cin>>i;
    int j;
    cout<<"enter the ending range value : "<<endl;
    cin>>j;
    if(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
	return 0;
}