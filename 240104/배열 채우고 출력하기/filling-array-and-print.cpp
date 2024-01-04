#include <iostream>
using namespace std;
int main(){
    string A;
    getline(cin,A);
    for (int i=A.length;i>=0;i--){
        if (A[i]!=' ') cout << A[i];
    }
    return 0;
}