#include <iostream>
using namespace std;
bool f(int m,int d){
    if (m<1 || m>12){
        return 0;
    }
    if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        if (d<1 || d>31){
            return 0;
        }
        return 1;
    }
    else if (m==2){
        if (d<1 || d>28){
            return 0;
        }
        return 1;
    }
    else {
        if (d<1 || d>30){
            return 0;
        }
        return 1;
    }
}
int main(){
    int m,d;
    cin >> m >> d;
    if (f(m,d)) cout << "Yes";
    else cout << "No";
    return 0;
}