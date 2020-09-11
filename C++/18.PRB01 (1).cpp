#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        int flag = 0;
        cin >> n;

        for(int i = 2; i < n; i++){
            if(n % i == 0){
                flag = 1;
                break;
            }
        }   

        if(flag == 0){
            if(n == 1){
                cout << "no" << endl;
            }
            else{
                cout << "yes" << endl;
            }
        }
        else{
            cout << "no" << endl;
        }

    }

    return 0;
}
