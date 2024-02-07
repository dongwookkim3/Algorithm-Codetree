#include <iostream>
#include <string>
#define MAX 12
using namespace std;
int main(){
    int M[MAX+1]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    string DAY[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    for (int i=1;i<=MAX;i++){
        M[i]+=M[i-1];
    }
    int m1,m2,d1,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int D=(M[m2-1]+d2)-(M[m1-1]+d1);
    cout << DAY[(D+700)%7];
    return 0;
}