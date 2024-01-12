#include <iostream>
#define MAX 10
using namespace std;
int main(){
    string A[MAX]={};
    for (int i=0;i<MAX;i++){
        cin >> A[i];
    }
    for (int i=MAX-1;i>=0;i--){
        cout << A[i] << "\n";
    }
    return 0;
}