// 1						1
// 1	2				2	1
// 1	2	3		3	2	1
// 1	2	3	4	3	2	1

#include<iostream>
using namespace std;
int main(){
    int n=4;
    
    for(int i=1;i<=n;i++){
        int no=1;
        for(int j=1;j<=i;j++){
            cout<<no<<"\t";
            no++;

        }
        for(int j=1;j<=n;j++){
            cout<<" "<<"\t";

        }
        int noo=i;
        for(int j=1;j<=i;j++){
            cout<<noo<<"\t";
            noo--;
        }
        cout<<endl;
    }
}