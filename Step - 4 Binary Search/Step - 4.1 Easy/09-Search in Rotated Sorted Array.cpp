
int miniElement(vector<int> arr, int n){

    int start = 0;
    int end = n - 1;

    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[0] <= arr[mid]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int BinarySearch(vector<int> arr, int start,int end, int key){

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}


int search(vector<int>& arr, int n, int k){
    // Write your code here.
    // Return the position of K in ARR else return -1.
        int pivotindex = miniElement(arr,n);

        // last part of the sorted array 
        if(arr[pivotindex] <= k && k <= arr[n-1]){
            return  BinarySearch(arr,pivotindex,n-1,k);
        // first part of the sorted array into
        } else {
            return BinarySearch(arr, 0, pivotindex - 1, k);
        }
}

