#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        string var, operators;
        for(int i = 0; i < s.length(); i++){
            int flag = 0;
            while(i < s.length() && s[i] == ')'){
                flag++;
                i++;
            }
            if(flag != 0){
            // Printing elements
                int var_it = var.length() - flag - 1;
                while(var_it < var.length()){
                    cout << var[var_it++]; 
                }

                int operators_it = operators.length() - flag;
                while(operators_it < operators.length()){
                    cout << operators[operators_it++];
                }

            // Poping elements
                var_it = flag + 1;
                while(var_it--){
                    var.pop_back();
                }
                operators_it = flag ;
                while(operators_it--){
                    operators.pop_back();
                }

            }

            
            if(s[i] >= 'a' && s[i] <= 'z'){
                var.push_back(s[i]);
            }
            else if(s[i] != '(' && s[i] != ')'){
                operators.push_back(s[i]);
            }
            
        }
        cout << var << "  " <<  operators << endl;
        
    }

   return 0;
}

