#include <iostream>
using namespace std;
int main(){
    string A;
    getline(cin,A);
    for (int i=18;i>=0;i--){
        if (A[i]!=' ') cout << A[i];
    }
    return 0;
}