#include <iostream>
using namespace std;
int main(){
    int A[5]={};
    for (int i=1;i<=3;i++){
        int n;
        char c;
        cin >> c >> n;
        if (c=='Y' && n>=37) A[1]++;
        else if (n>=37) A[2]++;
        else if (c=='Y') A[3]++;
        else A[4]++;
    }
    for (int i=1;i<=4;i++){
        cout << A[i] << ' ';
    }
    if (A[1]>=2) cout << 'E';
    return 0;
}