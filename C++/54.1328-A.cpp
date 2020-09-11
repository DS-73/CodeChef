#include <iostream>
#define LL long long

using namespace std;

int main(){
    LL t;
    cin >> t;

    while(t--){
        LL a, b;
        cin >> a >> b;
        if(a < b){
            cout << b - a;
        }
        else{
            if(a % b){
                LL temp = ((a / b) + 1) * b;
                cout << temp - a;
            }   
            else{
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}
