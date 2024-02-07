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
    int m1,m2,d1,d2,D=1,m=0;
    string A;
    cin >> m1 >> d1 >> m2 >> d2 >> A;
    for (int i=0;i<7;i++){
        if (DAY[i]==A){
            m=i;
            break;
        }
    }
    for (int i=0;i<=(M[m2-1]+d2-M[m1-1]-d1);i++){
        if (i%7==m){
            D++;
        }
    }
    cout << D;
    return 0;
}