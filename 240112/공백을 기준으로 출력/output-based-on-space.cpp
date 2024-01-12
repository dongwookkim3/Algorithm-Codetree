#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<=2;i++){
        string A;
        getline(cin,A);
        for (int j=0;j<A.length();j++){
            if (A[j]!=' '){
                cout << A[j];
            }
        }
    }
    return 0;
}