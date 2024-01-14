#include <iostream>
using namespace std;
bool DIG(int n){
    if (n%10==3 || n%10==6 || n%10==9){
        return 1;
    }
    else if (n>9){
        return DIG(n/10);
    }
    else {
        return 0;
    }
}
int S(int a,int b){
    int m=0;
    for (int i=a;i<=b;i++){
        if (i%3==0 || DIG(i)){
            m++;
        }
    }
    return m;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << S(a,b);
    return 0;
}