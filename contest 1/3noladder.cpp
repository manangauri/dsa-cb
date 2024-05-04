// 1
// 2       3
// 4       5       6
// 7       8       9       10
// showing wrong answer


#include<iostream>
using namespace std;

int main() {
	int n=4;
	int i;
	int no=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<no<<"\t";
			j++;
			no++;
		}
		i++;
		cout<<endl;


	}

	return 0;
} 