#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int flag  = 0;
        if(s[0] == s[1]){
            flag = 1;
        }
        else{
            for(int i = 2; i < s.length(); i ++){
                if(s[i] != s[i -2]){
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }


    return 0;
}
