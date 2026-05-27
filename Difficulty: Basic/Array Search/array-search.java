class Solution {
    public int search(int arr[], int x) {
        // code here
        // Iterate over the array in order to
        // find the key x
        int N=arr.length;
        for (int i = 0; i < N; i++) {
            if (arr[i] == x)
                return i;
        }
        return -1;
        
    }
}
