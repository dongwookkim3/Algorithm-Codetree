#include <iostream>
using namespace std;
class Secret_Code{
    public:
        string secret_code;
        char losation;
        int time;
        Secret_Code(string secret_code, char losation, int time){
            this->secret_code=secret_code;
            this->losation=losation;
            this->time=time;
        }
};
int main(){
    string secret_code;
    char losation;
    int time;
    cin >> secret_code >> losation >> time;
    Secret_Code code1 = Secret_Code(secret_code, losation, time);
    cout << "secret code : " << code1.secret_code << "\n";
    cout << "meeting point : " << code1.losation << "\n";
    cout << "time : " << code1.time << "\n";
    return 0;
}