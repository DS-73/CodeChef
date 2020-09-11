#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int k, n;
        cin >> n >> k;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int median = (n + k - 1) / 2;
        if(median > n){
            cout << 1000 << endl;
        }
        else{
            sort(v.begin(), v.end());
            cout << v[median - 1] << endl;
        }
    }


    return 0;
}
