#include <iostream>
using namespace std;
int main(){
    string A,B;
    int m=1;
    char c;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]!=c){
            c=A[i];
            B.append(to_string(m));
            B.append(1,c);
            m=1;
        }
        else m++;
    }
    B.append(to_string(m));
    cout << B.length()-1 << "\n";
    for (int i=1;i<B.length();i++){
        cout << B[i];
    }
    return 0;
}