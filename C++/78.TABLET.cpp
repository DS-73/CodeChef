#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int64_t n, b;
        cin >> n >> b;
        
        vector<int64_t> v1(n), v2(n);
        for(int i = 0; i < n; i++){
            int64_t w, h, p;
            cin >> w >> h >> p;

            v1[i] = (w * h);
            v2[i] = (p);
        }

        int64_t res = 0;
        for(int i = 0; i < n; i++){
            if((res < v1[i]) && (v2[i] <= b)){
                res = v1[i];
            }
        }

        if(!res){
            cout << "no tablet";
        }
        else{
            cout << res;
        }

        cout << endl;
    }

    return 0;
}
