#include <iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    if (m>=12 || m<=2) cout << "Winter";
    else if (m>=9) cout << "Fall";
    else if (m>=6) cout << "Summer";
    else cout << "Spring"; 
    return 0;
}