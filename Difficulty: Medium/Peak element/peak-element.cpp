class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int start = 0, end = arr.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Handle boundaries
            bool leftOk = (mid == 0) || (arr[mid] >= arr[mid - 1]);
            bool rightOk = (mid == arr.size() - 1) || (arr[mid] >= arr[mid + 1]);

            if (leftOk && rightOk) {
                return mid;
            }
            else if (mid > 0 && arr[mid - 1] > arr[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return -1; // Should never reach here
    }
};