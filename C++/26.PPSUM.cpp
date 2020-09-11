#include <iostream> 

using namespace std;

long long int sum(int n){
    long long int res = 0;
    while(n){
        res = res +n;
        n--;
    }

    return res;
}

int main(){
    int t; 
    cin >> t;

    long long int res = 0;
    while(t--){
        int d, n;
        cin >> d >> n;

        res = n;
        while(d--){
            res = sum(res);
        } 
        cout << res << endl;
    }

    return 0;
}
