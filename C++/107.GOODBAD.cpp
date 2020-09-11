#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int n, k, lower = 0, upper = 0;       cin >> n >> k;
        string s;       cin >> s;
        for(int i = 0; i < n; i++){
            if(islower(s[i])){
                lower++;
            }
            else{
                upper++;
            }
        }
        if(lower <= k && upper <= k){
            cout << "both" << endl;
        }
        else if(lower <= k){
            cout << "brother" << endl;
        }
        else if(upper <= k){
            cout << "chef" << endl;
        }
        else{
            cout << "none" << endl;
        }
    }

    return 0;
}
