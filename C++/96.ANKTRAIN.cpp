#include <iostream>
#include <map>

using namespace std;

void solve(int n){
    map<pair<int, int>, string> m {{{1, 3},"LB"}, {{2, 3},"MB"}, {{3, 3},"UB"}, {{4, -3},"LB"}, {{5, -3},"MB"}, {{6, -3},"UB"}, {{7, 1},"SU"}, {{8, -1},"SL"}};
    int temp = n % 8;
    if(temp == 0){
        temp = 8;
    }
    for(auto& it: m){
        if(it.first.first == temp){
            cout << n + it.first.second << it.second << endl;
            return;
        }
    }

}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;      cin >> n;
        solve(n);
    }

    return 0;
}
