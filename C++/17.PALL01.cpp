#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, temp1 = 0, nR;
        cin >> n;
        nR = n;

        while(n){
            temp1 = ((temp1 * 10) + (n % 10));
            n = n / 10;
        }

        cout << temp1;
        if(temp1 == nR){
            cout << "wins" << endl;
        }
        else {
            cout << "loses" << endl;
        }

    }


    return 0;
}
