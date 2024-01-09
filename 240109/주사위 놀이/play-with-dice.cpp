#include <iostream>
using namespace std;
int main(){
    int A[7]={};
    for (int i=1;i<=10;i++){
        int a;
        cin >> a;
        A[a]++;
    }
    for (int i=1;i<=6;i++){
        cout << i << " - " << A[i] << "\n";
    }
    return 0;
}