#include <iostream>
using namespace std;
bool g(int y){
    if (y%4==0){
        if (y%100==0){
            if (y%400==0){
                return 1;
            }
            return 0;
        }
        return 1;
    }
    return 0;
}
bool f(int y,int m,int d){
    if (m==4 || m==6 || m==9 || m==11){
        if (d==31){
            return 0;
        }
        return 1;
    }
    if (m==2){
        if (d>28+g(y)){
            return 0;
        }
        return 1;
    }
    return 1;
}
int main(){
    int y,m,d;
    cin >> y >> m >> d;
    if (!f(y,m,d)) cout << -1;
    else if (3<=m && m<=5) cout << "Spring";
    else if (6<=m && m<=8) cout << "Summer";
    else if (9<=m && m<=11) cout << "Fall";
    else cout << "Winter";
    return 0;
}