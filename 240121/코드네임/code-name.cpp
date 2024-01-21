#include <iostream>
#include <algorithm>
#define MAX 5
using namespace std;
class People{
    public:
        string Name;
        int Score;
        People(string Name="A",int Score=0){
            this->Name=Name;
            this->Score=Score;
        }
    bool operator <(People &people){
		return this->Score < people.Score;
	} 
};
int main(){
    People people[MAX];
    for (int i=0;i<MAX;i++){
        string name;
        int score;
        cin >> name >> score;
        people[i]=People(name,score);
    }
    sort(people,people+MAX);
    cout << people[0].Name << ' ' << people[0].Score;
    return 0;
}