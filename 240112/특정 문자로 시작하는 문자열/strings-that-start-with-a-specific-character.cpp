#include <iostream>
#define MAX 20
using namespace std;
int main(){
    int n,m=0,t=0;
    string A[MAX+1]={};
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    char c;
    cin >> c;
    for (int i=0;i<n;i++){
        if (A[i][0]==c){
            m++;
            t+=A[i].length();
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << m << ' ' << (float)t/m;
    return 0;
}