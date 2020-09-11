#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n < 10){
            cout << "Thanks for helping Chef!" << endl;
        }
        else{
            cout << -1 << endl;
        }
        
    }

    return 0;
}