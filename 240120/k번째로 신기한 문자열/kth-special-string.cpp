#include <iostream>
#include <algorithm>
#include <string>
#define MAX 100
using namespace std;
int main(){
    int n,m,index=1;
    string A[MAX+1]={},T;
    cin >> n >> m >> T;
    while(n--){
        string a;
        cin >> a;
        if (a.substr(0,T.length())==T){
            A[index]=a;
            index++;
        }
    }
    sort(A+1,A+index);
    cout << A[m];
    return 0;
}