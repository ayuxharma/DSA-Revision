#include <stack>
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	vector <int> ans(n) ;
	stack <int> st ;

	st.push(-1) ;

	for (int i=n-1 ; i>=0 ; i--){
		
		while (!st.empty() && arr[i]>=st.top())  st.pop() ;

		if (st.empty())  ans[i] = -1 ;
		
		else  ans[i] = st.top() ;


		st.push(arr[i]) ;
	}
	return ans ;
}