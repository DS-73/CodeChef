#include <iostream>
#include <algorithm>

using namespace std;

void solve(){
    string s;
    cin >> s;

    int balance = 0, max_balance = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            balance++;
        }
        else{
            balance--;
        }
        max_balance = max(max_balance, balance);
    }
    
    for(int i = 0; i < max_balance; i++){
        cout << '(';
    }
    
    for(int i = 0; i < max_balance; i++){
        cout << ')';
    }
    cout << endl;
}

int main(){
    int t;      cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

