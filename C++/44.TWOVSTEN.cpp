#include <iostream>
#define lli long long int

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        lli x;
        cin >> x;
        x = x % 10;

        if(x == 0){
            cout << 0;
        }
        else if(x == 5){
            cout << 1;
        }
        else{
            cout << -1;
        }
        
        cout << endl;
    }


    return 0;
}
