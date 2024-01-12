#include <iostream>
#define MAX 5
using namespace std;
int main(){
    string A[MAX]={"apple","banana","grape","blueberry","orange"};
    int m=0;
    char c;
    cin >> c;
    for (int i=0;i<MAX;i++){
        if (A[i][2]==c || A[i][3]==c){
            cout << A[i] << "\n";
            m++;
        }
    }
    cout << m;
    return 0;
}