#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;
        
        int res = y, count = 0;
        while(res < x){
            count++;
            res += 1;
        }

        cout << count << endl;
    }
    return 0;
}
