#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        vector<int> v(12);
        for(int i = 1; i < 12; i++){
            v[i] = 0;
        }
        int n;      cin >> n;
        while(n--){
            int pi, si;     cin >> pi >> si;
            v[pi] = max(si, v[pi]);
        }
        int res = 0;
        for(int i = 1; i < 9; i++){
            res += v[i];
        }
        cout << res << endl;

    }
    return 0;
}

