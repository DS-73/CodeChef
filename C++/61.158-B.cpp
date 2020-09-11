#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    long long n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    long long int count4 = 0, count3 = 0, count2 = 0, count1 = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 4){
            count4++;
        }
        else if(v[i] == 3){
            count3++;
        }
        else if(v[i] == 2 ){
            count2++;
        }
        else if(v[i] == 1){
            count1++;
        }
    }
    if( ((count4*4)+(count3*3)+(count2*2)+(count1*1)) < 4){
        cout << 1;
        return 0;
    }

    count4 += count3 + (count2 / 2);
    count1 -= count3;
    count2 = count2 % 2;

    while(count2 > 0 && count1 > 0){
        count4 += 1;
        count2 -= 1;
        count1 -= 2;
    }
    if(count2 > 0){
        count4 += count2 % 2;
    }
    while(count1 > 0){
        count4 += 1;
        count1 -= 4;
    }

    cout << count4;
    
    return 0;
}
