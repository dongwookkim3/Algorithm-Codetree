#include <iostream>
using namespace std;
int main(){
    int max=1,min=20;
    for (int i=1;i<=3;i++){
        string A;
        cin >> A;
        if (max<A.length()){
            max=A.length();
        }
        if (min>A.length()){
            min=A.length();
        }
    }
    cout << max-min;
    return 0;
}