#include <iostream>
#define MAX 200
using namespace std;
int main(){
    int i;
    string A[MAX+1]={};
    for (i=1;;i++){
        cin >> A[i];
        if (A[i]=="0"){
            break;
        }
    }
    cout << i-1 << "\n";
    for (int j=1;j<i;j+=2){
        cout << A[j] << "\n";
    }
    return 0;
}