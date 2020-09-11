#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int n;      cin >> n;
        vector<int> L(n), R(n);
        for(int i = 0; i < n; i++){
            cin >> L[i];
        }
        for(int i = 0; i < n; i++){
            cin >> R[i];
        }

        int max = -1, index = -1;
        for(int i = 0; i < n; i++){
            int temp = L[i] * R[i];
            if(temp > max){
                max = L[i] * R[i];
                index = i;
            }
            else if(temp == max){
                if(R[i] > R[index]){
                    index = i;
                }
            }
        }
        cout << index + 1 << endl;
    }

    return 0;
}
