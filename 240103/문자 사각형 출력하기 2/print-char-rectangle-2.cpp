#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int n;
    int A[MAX+1][MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
		if (i%2==0){
			A[i][1]=i*n;
		}
		else {
			A[i][1]=A[i-1][1]+1;
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=2;j<=n;j++){
			if (i%2==0){
				A[i][j]=A[i][j-1]-1;
			}
			else {
				A[i][j]=A[i][j-1]+1;
			}
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cout << (char)(A[i][j]%26+64) << ' ';
		}
		printf("\n");
	}
    return 0;
}