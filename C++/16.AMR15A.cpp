#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int t, e = 0, o = 0;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        if(n % 2 == 0)
            e++;
        else
            o++;
        
    }

    if(e > o){
        cout << "READY FOR BATTLE" << endl;
        
    }
    else{
        cout << "NOT READY" << endl;
    }
    

    return 0;
}
