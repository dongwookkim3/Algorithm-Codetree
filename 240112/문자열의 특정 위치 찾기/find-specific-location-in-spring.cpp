#include <iostream>
#include <string>
using namespace std;
int main(){
	string A;
    char c;
	int i=-1;
    cin >> A >> c;
	if (A.find(c)!=string::npos) {
		i=A.find(c);
	}
	if (i==-1) cout << "No";
    else cout << i;
	return 0;
}