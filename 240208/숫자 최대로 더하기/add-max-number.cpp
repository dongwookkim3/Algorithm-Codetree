#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<long long> A;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end(),greater<int>());
    while(A.size()!=2){
        long long m=A.back();
        A.pop_back();
        A.back()+=m;
    }
    cout << fixed;
    cout.precision(1);
    cout << float(A.front()+A.back()/2);
    return 0;
}