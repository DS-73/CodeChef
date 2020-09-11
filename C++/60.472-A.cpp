#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int n){
    for(int i = 2; i < sqrt(n) + 1; i++){
        if(n % i == 0){
            return true;
        }
    }
    return false;
}

int main(){
    long long n, flag = 1;
    cin >> n;

    long long a, b;
    a = (n / 2);
    b = (n / 2);

    while(flag){
        if(checkPrime(a) || checkPrime(b)){
            a = a + 1;
            b = b - 1;
        }
        else{
            cout << a << " " << b;
            flag = 0;
        }
    }

    return 0;
}

