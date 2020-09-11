#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;

        if( (n1 + n2 + n3) == 180 ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
