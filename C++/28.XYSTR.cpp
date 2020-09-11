#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        
        int res = 0;
        for(int i = 1; i < s.length(); i++){
            if(s[i] != s[i - 1]){
                res++;
                i++;
            }
        }
        cout << res << endl;
    }

    return 0;
}
