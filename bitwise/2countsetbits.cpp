#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
    cout<<"enter the no : ";
    cin>>n;
	int cnt = 0;
    int k = 0;
    while(k<ceil(log2(n+1))){
        if ((n >> k) & 1) {
            cnt++;
		}
        k++;

	}

	cout << cnt << endl;

	return 0;
}