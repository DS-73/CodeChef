#include <iostream>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int n, x = 0, y = 0;      cin >> n;
        string s;       cin >> s;
        char c = 'Z';

        for(int i = 0; i < s.length(); i++){
            if((s[i] == 'L' || s[i] == 'R') && (c != 'L' && c != 'R')){
                if(s[i] == 'L')             x--;
                else if(s[i] == 'R')        x++;
                c = s[i];
            }
            else if((s[i] == 'U' || s[i] == 'D') && (c != 'U' && c != 'D')){
                if(s[i] == 'U')        y++;
                else if(s[i] == 'D')        y--;
                c = s[i];
            }
        }
        cout << x << " " << y << endl;
    }

    return 0;
}
