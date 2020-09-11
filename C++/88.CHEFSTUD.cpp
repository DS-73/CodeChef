#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;

        int count = 0;
        for(int i = 1; i < s.length() - 1; i++){
            if((s[i] =='<') && (s[i + 1] == '>')){
                count += 2;
            }
        }

        cout << count << endl;
    }


    return 0;
}
