#include <iostream>

using namespace std;

int main(){
    int64_t R;      cin >> R;
    if(R <=50){
        cout << 100;
    }
    else if(R <= 100){
        cout << 50;
    }
    else{
        cout << 0;
    }

    return 0;
}
