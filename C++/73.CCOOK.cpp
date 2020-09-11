#include <iostream>

using namespace std;

int main(){
    int n;      cin >> n;
    for(int i = 0; i < n; i++){
        int count = 0; 
        for(int i = 0; i < 5; i++){
            int x;      cin >> x;
            count += x;
        }
        if(count == 0){
            cout << "Beginner";
        }
        
        else if(count == 1){
            cout << "Junior Developer";
        }
        
        else if(count == 2){
            cout << "Middle Developer";
        }
        
        else if(count == 3){
            cout << "Senior Developer";
        }
        
        else if(count == 4){
            cout << "Hacker";
        }
        
        else if(count == 5){
            cout << "Jeff Dean";
        }
        cout << endl;
    }

    return 0;
}