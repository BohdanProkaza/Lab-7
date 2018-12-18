#include <bits/stdc++.h>
using namespace std;

void in_array(int arr[], int narr){
	srand(time(NULL));
	for(int i=0;i<narr;i++){
		arr[i] = rand();
	}
}

int find_min(int arr[], int narr, int min_arr){
	for(int i=0;i<narr;i++){
		if(arr[i] < min_arr){
			min_arr = arr[i];
		}		
	}
	return min_arr;
}

int find_max(int arr[], int narr, int max_arr){
	for(int i=0;i<narr;i++){
		if(arr[i]>max_arr){
			max_arr = arr[i];
		}		
	}
	return max_arr;
}

int sum_arr(int arr[], int narr, int max_arr, int min_arr, int s_arr){
	for(int i=0;i<narr;i++){
		if(arr[i] != max_arr && arr[i] != min_arr){
			s_arr += arr[i];
		}		
	}
	return s_arr;
}


void output_arr(int sum_arr, int narr){
	cout << sum_arr * 1.0 / (narr - 2) << endl;
}

	
int main (){
	int n, amax = -1, amin = 100000000, sum = 0, kmax = 0, kmin = 0;
	int a[100] = {0};
	
	cin >> n;	
	
	in_array(a,n);	
	amin = find_min(a,n,amin);			cout << amin << endl;
	amax = find_max(a,n,amax);			cout << amax << endl;
	sum = sum_arr(a,n,amax, amin, sum);	cout << sum << endl;
	output_arr(sum,n);	

	return 0;
}
