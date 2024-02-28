// Approach 1 : Using Kadane's Algorithm
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    
    int i = 0 ;
    int j = 0 ;

    int sum = 0 ;
    int count = 0 ;

    while (i<arr.size() && j<arr.size()) {

        sum = sum + arr[j] ;

        if (sum > k) {
            while (i<j && sum>k){
                sum = sum - arr[i] ;
                i++ ;
            }
        }
        if (sum == k) {
            sum = sum - arr[i]; // Adjust sum
            count++ ;
            i++ ;
            // j = i ;
        }
        j++ ;
    }
    return count ;
}