#include <iostream>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int n, res = 0;      cin >> n;
        while(n--){
            int si, ji;     cin >> si >> ji;
            if(ji - si > 5){
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}

