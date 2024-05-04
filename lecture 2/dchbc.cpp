#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive integer : ";
	cin >> n;
	int s=0;
	for(int i=1;i<=n;i++){
		int d=n%10;
		s=s+d;
		n=n/10;

	}
	cout<<s<<endl;


	return 0;
}