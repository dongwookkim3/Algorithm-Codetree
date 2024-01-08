#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int n;
    int A[MAX+1]={},index=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if (a%2==0){
            A[index]=a;
            index++;
        }
    }
    for (int i=index-1;i>=0;i--){
        cout << A[i] << ' ';
    }
    return 0;
}