#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long t;
    cin >> t;

    vector<int> v{100, 50, 10, 5, 2, 1};
    while(t--){
        long long n, res = 0;
        cin >> n;

        for(int i = 0; i < v.size(); i++){
            if(n == 0){
                break;
            }
            else{
                res += n / v[i];
                n = n % v[i];
            }
        }

        cout << res << endl;

    }

    return 0;
}