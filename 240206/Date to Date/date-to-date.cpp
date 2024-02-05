#include <iostream>
using namespace std;
int main(){
    int M[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int m1,d1,m2,d2,D=1;
    cin >> m1 >> d1 >> m2 >> d2;
    while(m1!=m2 || d1!=d2){
        D++;
        d1++;
        if (M[m1-1]==d1){
            m1++;
            d1=0;
            if (m1==13){
                m1=1;
            }
        }
    }
    cout << D;
    return 0;
}