#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int n;
    int A[MAX]={};
    cin >> n;
    while (n--){
        int a;
        cin >> a;
        A[a]++;
    }
    for (int i=1;i<MAX;i++){
        cout << A[i] << "\n";
    }
    return 0;
}