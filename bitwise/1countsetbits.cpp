#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int k=0;
    int count=0;
    int i= (1<<k);
    while(k<=31){
        if( (n & i) > 0){
            count++;

        }
        k++;
    }
    cout<<count<<endl;
}

// // sir ka code 
// #include<iostream>
// #include<cmath>

// using namespace std;

// int main() {

// 	int n = 16;
// 	int cnt = 0; 

// 	for (int k = 0; k <= 31; k++) {

// 	

// 		// if (((n >> k) & 1) == 1) {
// 		// 	cnt++;
// 		// }


// 	

// 	

// 	cout << cnt << endl;

// 	return 0;
// }