#include <iostream>

using namespace std;

int main(){
    short t;    scanf("%hi", &t);
    while(t--){
        short n, k;    scanf("%hi%hi", &n, &k);
        int *arr = new int[n];
        for(int i = 0; i < n; i++){
            scanf("%d", (arr +i));
            *(arr +i) += k;
        }

        int count = 0;
        for(int i = 0; i < n; i++){
            if( (*(arr + i) % 7) == 0){
                count++;
            }
        }
        cout << count;
    }

    return 0;
}
