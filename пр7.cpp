#include<bits/stdc++.h>
using namespace std;
 
int main (){
	int n, amax = -1, amin = 1000000, sum, kmax = 0, kmin = 0;
	int a[10]= {0};
	
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		sum += a[i];
		if(a[i]<amin){
			amin = a[i];
			//kmin++;
		}
		if(a[i]>amax){
		amax = a[i];
		//kmax++;
		}
	}
	sum = sum - amax - amin;
	cout << 1.0 * sum / (n-2) << endl;
	
	//sum = sum - kmin * amax - kmax * amin;
	//cout << 1.0 * sum / (n-kmin-kmax) << endl;
	
  return 0;
}
