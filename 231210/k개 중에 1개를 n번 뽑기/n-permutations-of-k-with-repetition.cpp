#include <iostream>
#include <vector>
using namespace std;
int k, n;
vector<int> selected_nums;
void PrintPermutation(){
    for(int i=0;i<(int)selected_nums.size();i++)
        cout << selected_nums[i] << " ";
    cout << endl;
}
void FindPermutations(int cnt){
    if (cnt==n){
        PrintPermutation();
        return;
    }
    for (int i=1;i<=k;i++){
        selected_nums.push_back(i);
        FindPermutations(cnt+1);
        selected_nums.pop_back();
    }
}
int main(){
    cin >> k >> n;
    FindPermutations(0);
    return 0;
}