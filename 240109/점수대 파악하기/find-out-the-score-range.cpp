#include <iostream>
using namespace std;
int main(){
    int A[11]={};
    while(1){
        int a;
        cin >> a;
        if (a==0) break;
        A[a/10]++;
    }
    for (int i=10;i>=1;i--){
        cout << i*10 << " - " << A[i] << "\n";
    }
    return 0;
}