#include <iostream>
#include <vector>

using namespace std;

int solve(string s, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
            if(i + 1 < n && (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u')){
                count++;
                i++;
            }
        }
    }
    return count;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;          cin >> n;
        string s;       cin >> s;
        
        cout << solve(s, n) << endl;
    }
    
    return 0;
}