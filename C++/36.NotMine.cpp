#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        char operators[1000];
        int operators_it = 0;
        for(int i = 0; i < s.length(); i++){
            
            if(s[i] >= 'a' && s[i] <= 'z'){
                cout << s[i];
            }
            else if(s[i] != '(' && s[i] != ')' && (!(s[i] >= 'a' && s[i] <= 'z'))){
                operators[operators_it] = s[i];
                operators_it++;
            }

            if(s[i] == ')'){
                cout << operators[--operators_it];
            }

        }
        cout << endl;
        
    }

   return 0;
}

