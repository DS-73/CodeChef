#include <iostream>

using namespace std;

int main(){
    int n, count = 0;      cin >> n;
    while(n--){
        string s;       cin >> s;
        for(int i = 0; i < s.length() - 1; i++){
            if((s[i] == 'c' && s[i + 1] == 'h') ||(s[i] == 'h' && s[i + 1] == 'e') || (s[i] == 'e' && s[i + 1] == 'f') ){
                count++;
                break;
            }
        }
    }
    cout << count;
    
    return 0;
}

