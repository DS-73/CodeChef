#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int f1 = 0, f2 = 0, f3 = 0, grade = 0;
        float g, c, s;  

        cin >> g >> c >> s;
        if(g > 50){
            f1 = 1;
        }
        if(c < 0.7){
            f2 = 1;
        }
        if(s > 5600){
            f3 = 1;
        }

        if(f1 == 1 && f2 == 1 && f3 == 1){
            grade = 10;
        }
        else if(f1 == 1 && f2 == 1 && f3 == 0){
            grade = 9;
        }
        else if(f1 == 0 && f2 == 1 && f3 == 1){
            grade = 8;
        }
        else if(f1 == 1 && f2 == 0 && f3 == 1){
            grade = 7;
        }
        else if(f1 == 1 || f2 == 1 || f3 == 1){
            grade = 6;
        }
        else if(f1 == 0 && f2 == 0 && f3 == 0){
            grade = 5;
        }

        cout << grade << endl;
    }

    return 0;
}
