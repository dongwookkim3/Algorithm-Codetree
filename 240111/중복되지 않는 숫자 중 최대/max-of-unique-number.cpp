#include <iostream>
#define MAX 1000
using namespace std;
int main(){
    int A[MAX+1]={};
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A[a]++;
    }
    for (int i=MAX;i>=1;i--){
        if (A[i]==1){
            cout << i;
            break;
        }
        else if (i==1){
            cout << -1;
        }
    }
    return 0;
}