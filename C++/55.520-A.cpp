#include <iostream>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(n < 26){
        cout << "NO";
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        set<char> set_c;
        for(int i = 0; i < s.size(); i++){
            set_c.insert(s[i]);
        }

        if(set_c.size() == 26){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }


    return 0;
}