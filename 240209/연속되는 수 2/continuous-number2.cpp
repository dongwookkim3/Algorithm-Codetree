#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> A;
    int n,m=1,max=1;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    for (int i=1;i<A.size();i++){
        if (A[i-1]==A[i]){
            m++;
            if (max<m){
                max=m;
            }
        }
        else {
            m=1;
        }
    }
    cout << max;
    return 0;
}