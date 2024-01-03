#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    string A;
    cin >> n;
    getchar();
    getline(cin,A);
    for (int i=0;A[i]!='\0';i++){
        if (A[i]==' ') continue;
        cout << A[i];
        m++;
        if (m%5==0 && m!=0){
            cout << "\n";
        }
    }
    return 0;
}