#include <iostream>
#include <vector>

using namespace std;

int get_sum(int64_t num){
    int temp = 0;
    while(num){
        temp += num % 10;
        num = num / 10;
    }
    return temp;
}

int main(){
    int t;          cin >> t;
    while(t--){
        int n;      cin >> n;
        vector<int64_t> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int max = 0;
        for(int i = 0; i < n - 1; i++){
            int temp;
            for(int j = i + 1; j < n; j++){
                temp = get_sum(v[i] * v[j]);
                if(temp > max){
                    max = temp;
                }
            }
        }
        cout << max << endl;
    }

    return 0;
}
