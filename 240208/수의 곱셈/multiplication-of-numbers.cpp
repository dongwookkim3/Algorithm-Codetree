#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m=1;
    vector<int> A,B;
    for (int i=1;i<=3;i++){
        int a;
        cin >> a;
        if (a%2==1){
            B.push_back(a);
        }
        else {
            A.push_back(a);
        }
    }
    if (B.size()){
        for (int i=0;i<B.size();i++){
            m*=B[i];
        }
    }
    else {
        for (int i=0;i<A.size();i++){
            m*=A[i];
        }
        for (int i=0;i<B.size();i++){
            m*=B[i];
        }
    }
    cout << m;
    return 0;
}