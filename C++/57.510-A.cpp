#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int flag  = 0, turn = 0;
    while(n--){
        if(flag == 0){
            for(int i = 0; i < m; i++){
                cout << "#";
            }
            flag = 1;
            cout << endl;
        }
        else{
            if(turn == 0){
                for(int i = 0; i < m - 1; i++){
                    cout << ".";
                }
                cout << "#";
            }
            else{
                cout << "#";
                for(int i = 0; i < m - 1; i++){
                    cout << ".";
                }
            }

            if(turn == 0){
                turn = 1;
            }
            else{
                turn = 0;
            }
            flag = 0;
            cout << endl;
        }
    }

    return 0;
}
