int findPeakElement(vector<int> &arr) {

    int n = arr.size();
    

    // Edge case1 - when Only one element contain or Two element contain
    if(n == 1 or arr[0] > arr[1]){
        return 0;
    }

    // last element is greater to second last elements
    if(arr[n-1] > arr[n-2]){
        return n-1;
    }


    // Write your code here
     int start = 0;
        int end = arr.size() - 1;
        
        int mid = start + (end- start)/2;
        
        while(start < end){
            if(arr[mid] < arr[mid+1]){
                start = mid + 1;
            }else{
                end = mid;
            }
            mid = start + (end- start)/2;
        }
        return start;
}
