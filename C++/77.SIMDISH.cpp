#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        vector<string> v1(4), v2(4);
        for(int i = 0; i < 4; i++){
            cin >> v1[i];
        }
        for(int i = 0; i < 4; i++){
            cin >> v2[i];
        }

        int count = 0;
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(v1[i].compare(v2[j]) == 0){
                    count++;
                    if(count >= 2){
                        break;
                    }
                }
            }
        }

        if(count >= 2){
            cout << "similar" << endl;
        }
        else{
            cout << "dissimilar" << endl;
        }


    }

    return 0;
}
