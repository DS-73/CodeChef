#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool check9(string &s){
    int count = 0;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '9')
            ++count;
    }
    if(s.length() == count){
        cout << 1;
        for(int i = 0; i < s.length() - 1; ++i){
            cout << 0;
        }
        cout << 1 << endl ;
        return true;
    }
    return false;
}

void solve(){
    string s, l = "";       cin >> s;
    if(check9(s)){
        return;
    }
    else if(s.length() == 1){
        if(s[0] == '9'){
            cout << "10" << endl;
        }
        else{
            cout << s[0] + 1 << endl;
        }
        return;
    }

    int left = s.length() / 2, i = 0;
    if(s.length() % 2){
        ++left;
    }
}


int main(){

    int t;		cin >> t;
    fflush(stdin);
    while(t--){
        solve();
    }

    return 0;
}