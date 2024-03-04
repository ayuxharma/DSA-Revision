// Approach 1
int singleNonDuplicate(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    // Edge case: if array contains only one element
    if (end == 0)
        return arr[0];

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Edge cases: check if mid is at the ends
        if (mid == 0 || mid == end)
            return arr[mid];

        // If element at mid is not equal to its adjacent elements
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
            return arr[mid];
        }


        // If the element at mid is equal to its left neighbor
        if (arr[mid] == arr[mid - 1]) {
            // If the number of elements to the left of mid (including mid) is odd
            if ((mid - start + 1) % 2 == 1) {
                end = mid - 2;
            } else {
                start = mid + 1;
            } 
        } else { // If the element at mid is equal to its right neighbor
            // If the number of elements to the left of mid is odd
            if ((mid - start) % 2 == 1) {
                end = mid - 1;
            } else {
                start = mid + 2;
            }
        }
    }

    // Indicate no single non-duplicate element found
    return -1; // Or any suitable error code
}




// APPROACH 2
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = (left + right) / 2;

            if (mid % 2 == 1) { // This step ensures that mid always points to the start of a pair of elements.
                mid--;
            }


            if (nums[mid] != nums[mid + 1]) { // It checks if the element at index mid is not equal to the element at index mid + 1. If they are not equal, it means the single non-duplicate element lies to the left of mid, so it updates right to mid.
                right = mid;
            } else { // If the elements at mid and mid + 1 are equal, it means the single non-duplicate element lies to the right of mid. So, it updates left to mid + 2 to skip the pair of elements.
                left = mid + 2;
            }
        }

        return nums[left];
    }
}; 