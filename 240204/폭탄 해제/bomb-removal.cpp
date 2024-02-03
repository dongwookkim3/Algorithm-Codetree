#include <iostream>
using namespace std;
class Unlock{
    public:
        string Code;
        char Color;
        int Second;
        Unlock (string Code="A",char Color='A',int Second=0){
            this->Code=Code;
            this->Color=Color;
            this->Second=Second;
        }
};
int main(){
    Unlock unlock=Unlock();
    cin >> unlock.Code >> unlock.Color >> unlock.Second;
    cout << "code : " << unlock.Code << "\n";
    cout << "color : " << unlock.Color << "\n";
    cout << "second : " << unlock.Second;
    return 0;
}