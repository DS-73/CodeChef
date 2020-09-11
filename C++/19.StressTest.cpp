
#include <iostream>

using namespace std;

int func1(int arr[3][3], int n){
        int res = 0;
        for(int i = 0; i < n; i++){
            int temp = i, temp_res = 0;
            for(int j = 0; j < n; j++){
                if(temp > 0){
                    temp_res = temp_res + arr[j][0];
                }
                else{
                    temp_res = temp_res + arr[j][j - i];
                }
                temp--;
            }
            if(res < temp_res){
                res = temp_res;
            }
        }

    return res;
}

int func2(int a[3][3], int n) {
    int i, j, k;
	    for(i=n-1;i>=0;i--)
	    {
	        for(j=0;j<i+1;j++)
	        {
	            if(a[i][j] > a[i][j+1])
	            {
	                a[i-1][j] += a[i][j];
	            }
	            else
	            {
	                a[i-1][j] += a[i][j+1];
	            }
	        }
	    }

	return a[0][0];
}

void my_func(int arr[3][3], int n){
        int res = 0;
        for(int i = 0; i < n; i++){
            int temp = i, temp_res = 0;
            for(int j = 0; j < n; j++){
                if(temp > 0){
                    temp_res = temp_res + arr[j][0];
                }
                else{
                    temp_res = temp_res + arr[j][j - i];
                }
                cout << " TEMP : " << temp_res;  
                temp --;
            }
            cout << "TEMP RES : " << temp_res <<endl;
            if(res < temp_res){
                res = temp_res;
            }
        }

    cout << res;

}

int main(){
    int t = 100;
    while(t--){
        int arr[3][3], temp_arr[3][3];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(j > i){
                    arr[i][j] = 0;
                    temp_arr[i][j] = 0;
                }
                else{
                    arr[i][j] = rand()%10 +1;
                    temp_arr[i][j] = arr[i][j];
                }
            }
        }
        int res1 = func1(arr,3);
        int res2 = func2(arr,3);

        if(res1 == res2){
            cout << endl << "Successful Attempt << " << 100-t << " >> ";
        }
        else{
            cout << endl << "Unsuccessful Attempt ";
            cout << endl << "Result 1 : " << res1 << " Result 2 : " << res2 << endl;
          
            for(int i = 0;  i < 3; i++ ){
                for (int j = 0; j < 3; j++){
                    cout << temp_arr[i][j] << "  ";
                }
                cout << endl;
            }
            cout << "MY DEBUG FUNCTION : " << endl;
            my_func(temp_arr, 3);
            break;
        }
        
    }


    return 0;
}


