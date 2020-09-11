#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Player{
    public:
        int a, b, score;
        void calc(){
            score = (a * 20) - (b * 10);
            if(score < 0){
                score = 0;
            }
        }

};

bool comp(Player A, Player B){
    return (A.score < B.score);
}

int main(){
    int t;      cin >> t;
    while(t--){
        int n;      cin >> n;
        vector<Player> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].a;
        }
        for(int i = 0; i < n; i++){
            cin >> v[i].b;
            v[i].calc();
        }

        sort(v.begin(), v.end(), comp);
        cout << v[n - 1].score << endl;
    }

    return 0;
}
