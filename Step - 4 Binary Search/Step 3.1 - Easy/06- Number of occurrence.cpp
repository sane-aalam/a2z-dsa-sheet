
int FirstPostionSearch(vector<int>& arr,int n , int key){
        
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start)/2;
        
        int firstIndex = -1;
        
        while(start <= end){
            if(arr[mid] == key){
                firstIndex = mid;
                end = mid - 1;
                // syntax error - fixed
            }else if(arr[mid] < key){
                start = mid + 1;
            }else{
                end = mid -1;
            }
            // update the middle value
            mid = start + (end - start)/2;
        }
        return firstIndex;
    }
    int LastPostionSearch(vector<int>& arr,int n , int key){
        
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start)/2;
        
        int LastIndex = -1;
        
        while(start <= end){
            if(arr[mid] == key){
                LastIndex = mid;
                start = mid + 1;
            }else if(arr[mid] < key){
                start = mid + 1;
            }else{
                end = mid -1;
            }
            // update the middle value
            mid = start + (end - start)/2;
        }
        return LastIndex;
    }

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	 // Write your code here
    int first = FirstPostionSearch(arr,n,x);
    int last = LastPostionSearch(arr,n,x);
    
	// math formula GFG-> LastIndex - FirstIndex + 1;
	int result = last - first + 1;

	if(first == -1 and last == -1){
		return 0;
	}else{
		return result;
	}
}