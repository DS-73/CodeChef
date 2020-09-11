#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int a_count = 0, b_count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a'){
                a_count++;
            }
            else{
                b_count++;
            }
        }
        if(a_count < b_count){
            cout << a_count << endl;
        }
        else{
            cout << b_count << endl;
        }

    }

    return 0;
}
