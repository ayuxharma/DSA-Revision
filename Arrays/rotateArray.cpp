class Solution {

private:
    void reverseArray (vector <int>&nums , int start , int end) {

        while(start < end){
            swap(nums[start],nums[end]) ;
            start++ ;
            end-- ;
        }
       // return nums ;
    }

public:
    void rotate(vector<int>& nums, int k) {
        
        k = k % nums.size() ;

        reverseArray(nums, 0, nums.size() - 1);
        reverseArray(nums, 0, k - 1); 
        reverseArray(nums, k, nums.size() - 1);
    }
};