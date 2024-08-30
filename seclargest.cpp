//Second Largest Element
int print2largest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        if (n<2)
           return -1;

        int first = INT_MIN;
        int second = INT_MIN;
        for (int i=0; i<n; i++) {
            if (arr[i] > first) {
                second = first;
                first = arr[i];
            }
            else if (first>arr[i] && arr[i]>second) {
                second = arr[i];
            }
        }
        
        if (second == INT_MIN)
           return -1;
        
        return second;
    }
