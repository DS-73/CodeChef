#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s1, s2;
        cin >> s1 >> s2;

        int base = 0, never = 0; // Never is used for same ith pos character
        for(int i = 0; i < s1.length() ; i++){
            if(s1[i] != '?' && s2[i] != '?' && s1[i] != s2[i]){
                base += 1;
            }
            else{
                never += 1;
            }
        }
        cout << base << " " << s1.length() - never << endl;
    }

    return 0;
}

