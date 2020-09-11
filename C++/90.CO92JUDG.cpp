#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        int max_a = a[0], max_b = b[0];
        int64_t sum_a = a[0], sum_b = b[0];
        for(int i = 1; i < n; i++){
            if(a[i] > max_a){
                max_a = a[i];
            }
            sum_a += a[i];
        }
        for(int i = 1; i < n; i++){
            if(b[i] > max_b){
                max_b = b[i];
            }
            sum_b += b[i];
        }

        sum_a -= max_a, sum_b -= max_b;
        if(sum_a > sum_b){
            cout << "Bob" << endl;
        }
        else if(sum_a < sum_b){
            cout << "Alice" << endl;
        }
        else{
            cout << "Draw" << endl;
        }

    }
    return 0;
}
