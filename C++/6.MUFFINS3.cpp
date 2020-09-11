
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

        if(n == 2){
            cout << n << endl;
        }
        else{
            cout << ((n/2) + 1) << endl;
        }

    }

    return 0;
}