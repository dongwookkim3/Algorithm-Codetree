#include <iostream>
using namespace std;
int main(){
    int A[10]={};
    for (int i=0;;i++){
        cin >> A[i];
        if (A[i]==0 || i==10){
            for (int j=i-1;j>=0;j--){
                cout << A[j] << ' ';
            }
            return 0;
        }
    }
    return 0;
}