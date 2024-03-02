int searchInsert(vector<int>& arr, int m)
{
    // if empty array
    if (arr.empty()) {
        return 0;
    }

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (arr[mid] == m) {
            return mid;
        }
        else if (arr[mid] < m) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    // If the loop completes without finding the target, 'start' would be the correct index
    return start;
}