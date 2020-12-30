#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n;      cin >> n;
    vector<int> v1(n), v2(n);
    for(int i = 0; i < n; ++i){
        cin >> v1[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> v2[i];
    }

    bool flag1 = true, flag2 = true;
    for(int i = 0; i < n; ++i){
        if(v1[i] > v2[i]){
            flag1 = false;
            break;
        }
    }
    reverse(v1.begin(), v1.end());
    for(int i = 0; i < n; ++i){
        if(v1[i] > v2[i]){
            flag2 = false;
            break;
        }
    }

    if(flag1 && flag2){
        cout << "both" << endl;
    }
    else if(flag1){
        cout << "front" << endl;
    }
    else if(flag2){
        cout << "back" << endl;
    }
    else{
        cout << "none" << endl;
    }

}

int main(){

    int t;		cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
