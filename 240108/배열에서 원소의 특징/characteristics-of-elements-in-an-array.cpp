#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int A[MAX+1]={};
    for (int i=1;i<=MAX;i++){
        cin >> A[i];
        if (A[i]%3==0){
            cout << A[i-1];
            break;
        }
    }
    return 0;
}