#include <iostream>
using namespace std;
int main(){
    int m=0;
    for (int i=1;i<=3;i++){
        int N;
        char Y;
        cin >> Y >> N;
        if (Y=='Y' && N>=37) m++;
    }
    if (m>=2) cout << 'E';
    else cout << 'N';
    return 0;
}