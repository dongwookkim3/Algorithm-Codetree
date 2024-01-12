#include <iostream>
using namespace std;
int main(){
    int m=0;
    char a;
    string A;
    getline(cin,A);
    cin >> a;
    for (int i=0;i<A.length();i++){
        if (A[i]==a){
            m++;
        }
    }
    cout << m;
    return 0;
}