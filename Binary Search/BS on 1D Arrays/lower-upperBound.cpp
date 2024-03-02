// LOWER BOUND
int lowerBound(vector<int> arr, int n, int x) {
	int start = 0 ;
	int end = n-1 ;

	int ans = n ;


	while (start <= end){

	int mid = start + (end-start)/2 ;

		if (arr[mid] < x){
			start = mid+1 ;
		}
		else {
			ans = mid ;
			end = mid-1 ;
		}
	}
	return ans ;
}





// UPPER BOUND
int upperBound(vector<int> &arr, int x, int n){
	int start = 0;
	int end = n; // change from n-1 to n

	int ans = n; // initialize ans to n

	while (start < end) { // change condition to strictly less than
		int mid = start + (end - start) / 2;

		if (arr[mid] <= x) { // change comparison to <=
			start = mid + 1; // update start to mid + 1
		}
		else {
			ans = mid; // update ans to mid
			end = mid; // update end to mid
		}
	}	
	return ans;
}