#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k, count = 0;
    cin >> n >> k;

    vector<int> v;
    while(k--){
        string s;
        cin >> s;
        
        int num, flag = 0;
        if(s.compare("CLOSEALL") != 0){    
            cin >> num;
           
            for(int i = 0; i < v.size(); i++){
                if(v[i] == num){
                    v.erase(v.begin() + i);
                    flag = 1;
                    break;
                }
            }
            
            if(flag == 0){
                v.push_back(num);
            }
        }

        else{
            v.clear();
        }

        
        cout << v.size() << endl;

    }

    return 0;
}
