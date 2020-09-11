
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n1, n2;
        cin >> n1 >> n2;

        if(n1 > n2){
            cout << n1 <<" ";
        }
        else{
            cout << n2 <<" ";
        }
        cout << n1 + n2 << endl;
    }

    return 0;
}