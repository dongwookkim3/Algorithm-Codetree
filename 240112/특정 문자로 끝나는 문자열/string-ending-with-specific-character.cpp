#include <iostream>
#define MAX 10
using namespace std;
int main(){
    string A[MAX]={};
    for (int i=0;i<MAX;i++){
        cin >> A[i];
    }
    int m=0;
    char c;
    cin >> c;
    for (int i=0;i<MAX;i++){
        if (A[i][A[i].length()-1]==c){
            cout << A[i] << "\n";
            m++;
        }
    }
    if (m==0){
        cout << "None";
    }
    return 0;
}