#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;

    if(n == 0){
        cout << 1;
    }
    else{
        long long count = 0;
        while(n){
            n/10;
            count++;
        }

        if(count == 1){
            cout << 1;
        }
        else if(count == 2){
            cout << 2;
        }
        else if(count == 3){
            cout << 3;
        }
        else if(count > 3){
            cout << "More than 3 digits";
        }
    }

}
