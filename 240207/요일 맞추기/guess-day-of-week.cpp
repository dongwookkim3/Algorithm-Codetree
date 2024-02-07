#include <iostream>
#include <string>
using namespace std;
int main(){
    int M[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    string DAY[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int m1,m2,d1,d2,D=0;
    cin >> m1 >> d1 >> m2 >> d2;
    if (m1<m2 || (m1==m2 && d1<d2)){
        while(m1!=m2 || d1!=d2){
            D++;
            d1++;
            if (M[m1]==d1){
                m1++;
                d1=1;
            }
        }
    }
    else {
        while(m1!=m2 || d1!=d2){
            D--;
            d1--;
            if (d1==0){
                m1--;
                d1=M[m1];
            }
        }
    }
    cout << DAY[(D+700)%7];
    return 0;
}