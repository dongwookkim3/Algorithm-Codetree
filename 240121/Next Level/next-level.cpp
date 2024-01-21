#include <iostream>
#include <string>
using namespace std;
class ID{
    public:
        int level;
        string id;
        ID (string id="codetree",int level=10){
            this->id=id;
            this->level=level;
        }
};
int main(){
    int lv;
    string id;
    cin >> id >> lv;
    ID ID1=ID();
    cout << "user " << ID1.id << " lv " << ID1.level << "\n";
    ID1.id=id;
    ID1.level=lv;
    cout << "user " << ID1.id << " lv " << ID1.level << "\n";
    return 0;
}