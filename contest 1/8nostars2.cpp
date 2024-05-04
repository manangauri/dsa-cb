// 1 2 3 4 5
// 1 2 3 4 * 
// 1 2 3 * * *
// 1 2 * * * * *
// 1 * * * * * * *

#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"enter the input : ";
	cin>>n;
	int i;
	while(i<=n){
		int j=1;
		int no=1;
		while(j<n-i+1){
			cout<<no<<" ";
			no++;
			j++;
		}
		int k=1;
		while(k<i-1){
			cout<<"*"<<" ";
			k++;
		}
		int m=1;
		while(m<=i-2){
			cout<<"*"<<" ";
            m++;
		}
        cout<<endl;
		i++;
	}
	return 0;
}