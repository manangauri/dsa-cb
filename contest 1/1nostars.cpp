
//  1******
//  12*****
//  123****
//  1234***
//  12345**
//  123456*
//  1234567
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int i=1;

	while(i<=n){
		int j=1;
		int no=1;
		while(j<=i){
			cout<<no;
			j++;
			no++;
		}
		int k=1;
		while(k<=n-i){
			cout<<"*";
			k++;
		}
		i++;
		cout<<endl;

	}




	return 0;
}