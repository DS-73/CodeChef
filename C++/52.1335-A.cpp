#include <iostream>
#define LL long long

using namespace std;

int main(){
    LL t;
    cin >> t;

    while(t--){
        LL n;
        cin >> n;

        if(n % 2 == 0){
            cout << (n / 2) - 1;
        }
        else{
            cout << (n / 2);
        }
    }


    return 0;
}
