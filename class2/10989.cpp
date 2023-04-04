#include <iostream>


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int n;
	int i, j;
	int num;
	
	int count[10001]={0,};

	cin >> n;
	
	for(i=0; i<n ;i++){
		cin >> num;
		count[num] = count[num] + 1;
	}
	
	for(i=1; i<10001; i++){
		for(j=1; j<=count[i]; j++)
			cout << i << "\n";
	}
	return 0;
}