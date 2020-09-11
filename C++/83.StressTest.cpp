#include <iostream>
#include <vector>

using namespace std;

long long func1(vector<int64_t> arr, int n){
	long long int ans[n] = {0};
	int j = 1,count=0;
	ans[0] = 1;
	for(int i=n-2; i>=0; i--)
	{
	    if(arr[i]<=arr[i+1])
	    {
	        ans[j] = 1 + ans[j-1];
	        j++;
	    }
	    else
	    {
	        ans[j] = 1;
	        j++;
	    }
	}
	for(j=0; j<n; j++)
	{
	    count = count + ans[j];
	}
	return count;
}

long long func2(vector<int64_t> v, int n){
    int64_t count = 0, temp = 1;
    for(int i = 0; i < n - 1; i++){
        if(v[i] <= v[i + 1]){
            temp++;
        }
        else{
            count += (temp * (temp + 1)) / 2;
            temp = 1;
        }
    }
    count += (temp * (temp + 1)) / 2; 
    return count;
}

int main() {
    int64_t count = 1;
    while(1){

        int n = rand() % 100000 + 10;
        vector<int64_t> v(n);
        for(int i = 0; i < n; i++){
            v[i] = rand() % 1000000000 + 10000000;
        }
        int64_t res1 = func1(v, n);
        int64_t res2 = func2(v, n);
        

        if(res1 != res2){
            cout << "Submission Unsusccessful ";
            cout << "RES1 : " << res1 << "RES2 : " << res2 << endl;
            for(int i = 0; i < n; i++){
                cout << v[i] << "  ";
            }
            cout << endl;
        }
        else{
            cout << "Successful Attemt << " << count << " >> " << endl;
        }
        count++;
    }

	return 0;
}