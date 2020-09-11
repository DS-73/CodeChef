#include <iostream>

using namespace std;

int main(){
    int t;    cin >> t;
    while(t--){
        int64_t a, b, n,temp = 1;
        cin >> a >> b >> n;

        if(n % 2){
            temp = 2;
        }

        a *= temp;
        if(a > b){
            cout << a / b;
        }
        else{
            cout << b / a;
        }
        cout << endl;

    }
    return 0;
}
