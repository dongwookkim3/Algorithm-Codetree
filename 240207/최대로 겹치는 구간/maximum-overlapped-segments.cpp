#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int A[MAX+1]={};
    int n,m=0;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        for (int i=a;i<b;i++){
            A[i]++;
            if (A[i]>m){
                m=A[i];
            }
        }
    }
    cout << m;
    return 0;
}