#include <iostream>
#include <string>

using namespace std;

void solve(){
    string s, temp = "";   getline(cin, s);
    bool flag = true;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == ' '){
            if(temp == "not"){
                flag = false;
                break;
            }
            temp = "";
        }
        else{
            temp.push_back(s[i]);
        }
    }
    if(!temp.empty()){
        if(temp == "not"){
            flag = false;
        }
    }
    
    if(flag){
        cout << "regularly fancy" << endl;
    }
    else{
        cout << "Real Fancy" << endl;
    }
}


int main(){

    int t;		cin >> t;
    cin.get();
    while(t--){
        solve();
    }

    return 0;
}