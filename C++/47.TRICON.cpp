#include <iostream>
#define LLI long long int

using namespace std;

int main(){
    LLI t;
    cin >> t;
    
    while(t--){
        LLI n, count = 0, formula = 1;
        cin >> n;
    
        for(int i = 2; formula <= n; i++){
            formula = (i * (i + 1)) / 2;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}

