#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        double range ;
        cin >> range;

        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        double len1, len2, len3;
        len1 = sqrt( pow((x1 - x2), 2) + pow((y1 - y2), 2) );  // 1,2
        len2 = sqrt( pow((x2 - x3), 2) + pow((y2 - y3), 2) );  // 2,3
        len3 = sqrt( pow((x1 - x3), 2) + pow((y1 - y3), 2) );  // 1,3

        int flag = 0;
        if(len1 > range && len2 > range ){
            flag = 1;
        }
        else if(len2 > range && len3 > range ){
            flag = 1;
        }
        else if(len1 > range && len3 > range ){
            flag = 1;
        }
        

        if(flag == 1){
            cout << "no" << endl;
        }
        else{
            cout << "yes" << endl;
        }
        
    }

    return 0;
}

