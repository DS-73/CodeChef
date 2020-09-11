#include <iostream>
#include <set>
#define LLI long long int

using namespace std;

int main(){
    set<LLI> s;

    for(int i = 0; i < 4; i++){
        LLI num; cin >> num;
        s.insert(num);
    }

    cout << 4 - s.size();

    return 0;
}
