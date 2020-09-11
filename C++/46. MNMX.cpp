#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int *arr = new int[n];
        for(int i = 0; i < n; i++){
            cin >> *(arr + i);
        }
        
        long long int cost = 0;
        for(int i = 1; i < n; i += 2){
            if( (*(arr + i)) > (*(arr + i - 1)) ){
                cost += (*(arr + i - 1));
            }
            else{
                cost += (*(arr + i));
            }
        }
        cout << cost << endl;
    }
    return 0;
}
