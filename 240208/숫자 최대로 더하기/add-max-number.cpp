#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<float> A;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end(),greater<int>());
    while(A.size()!=1){
        A.front()+=A.back()/2;
        A.pop_back();
    }
    cout << fixed;
    cout.precision(1);
    cout << A.front();
    return 0;
}