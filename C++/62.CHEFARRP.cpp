#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        
        vector<long long> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        long long count = 0;
        for(int i = 0; i < n; i++){
            long long prod = 1, sum = 0;
            for(int j = i; j < n; j++){
                prod *= v[j];
                sum += v[j];
                if(sum == prod){
                    count++;
                }
            }
        }

        cout << count << endl;
    }
    
    return 0;
}
