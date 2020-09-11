#include <iostream>
#include <vector>

using namespace std;

int main(){
    int64_t t;
    cin >> t;

    vector<int> v{6,2,5,5,4,5,6,3,7,6};
    while(t--){
        int64_t a, b, res, count = 0;
        cin >> a >> b;

        res = a + b;
        while(res > 0){
            int temp = res % 10;
            count += v[temp];
            res = res /10;
        }
        cout << count << endl;
    }
    return 0;
}