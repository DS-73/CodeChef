#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n;      cin >> n;
    int64_t count1 = 0, count2 = 0;

    vector<int> v1(n), v2(n);
    for(int i = 0; i < n; ++i){
        cin >> v1[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> v2[i];
    }

    bool flag = true;
    for(int i = 0; i < n; ++i){
        if(flag){
            count1 += v1[i];
            count2 += v2[i];
            flag = !flag;
        }
        else{
            count2 += v1[i];
            count1 += v2[i];
            flag = !flag;
        }
    }

    cout << min(count1, count2) << endl;

}


int main(){

    int t;		cin >> t;

    while(t--){
        solve();
    }

    return 0;
}