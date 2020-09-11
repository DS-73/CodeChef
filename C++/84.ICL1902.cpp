#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    vector<int> v(40);
    for(int i = 0; i < 40; i++){
        v[i] = (i + 1) * (i + 1);
    }
    while(t--){
        int n, count = 0;
        cin >> n;

        while(n){
            for(int i = 0; i < 40; i++){
                if(v[i] > n){
                    n -= v[i - 1];
                    count++;
                    break;
                }
                else if(v[i] == n){
                    n -= v[i];
                    count++;
                    break;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
