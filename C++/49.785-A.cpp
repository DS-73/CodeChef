#include <iostream>
#include <string>

#define LLI long long int

using namespace std;

int main(){
    LLI n, count = 0;
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        if(s.compare("Tetrahedron") == 0){
            count += 4;
        }
        else if(s.compare("Cube") == 0){
            count += 6;
        }
        else if(s.compare("Octahedron") == 0){
            count += 8;
        }
        else if(s.compare("Dodecahedron") == 0){
            count += 12;
        }
        else if(s.compare("Icosahedron") == 0){
            count += 20;
        }
    }

    cout << count;

    return 0;
}
