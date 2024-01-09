#include <iostream>
using namespace std;
int main(){
    int A[10]={};
    while(1){
        int a;
        cin >> a;
        if (a==0) break;
        A[a/10]++;
    }
    for (int i=1;i<10;i++){
        cout << i << " - " << A[i] << "\n";
    }
    return 0;
}