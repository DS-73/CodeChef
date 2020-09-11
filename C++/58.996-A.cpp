#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n, count = 0, i = 0;
    cin >> n;

    vector<int> v{100,20,10,5,1};
    while(n){
        count += n / v[i];
        n = n % v[i++];
    }
    cout << count;

    return 0;
}

