#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 12
using namespace std;
int main(){
    int M[MAX+1]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    vector<string> DAY={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    for (int i=1;i<=MAX;i++){
        M[i]+=M[i-1];
    }
    int m1,m2,d1,d2;
    string A;
    cin >> m1 >> d1 >> m2 >> d2 >> A;
    int D=(M[m2-1]+d2-M[m1-1]+d1)/7;
    for (int i=0;i<7;i++){
        if (DAY[i]==A){
            if ((M[m2-1]+d2-M[m1-1]+d1)%7<=i){
                D++;
            }
            break;
        }
    }
    cout << D-2;
    return 0;
}