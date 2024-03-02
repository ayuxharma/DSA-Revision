int count(vector<int>& arr, int n, int x) {
	int cnt = 0 ;

	for (int i=0 ; i<n ; i++){
		if (arr[i] == x){
			cnt++ ;
		}
	}
	return cnt ;
}


// approach 2
// #include<bits/stdc++.h>

// int count(vector<int>& arr, int n, int x) {
//     auto it1=lower_bound(arr.begin(),arr.end(),x);
//     auto it2=upper_bound(arr.begin(),arr.end(),x);

//     return it2-it1;
// }