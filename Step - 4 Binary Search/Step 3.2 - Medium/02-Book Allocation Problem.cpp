bool isPossibleAllocate(vector<int> & arr,int n, int LimitStudent, int capacity){

      int count = 1;
      int sum = 0;

      for(int i = 0; i<n; i++){
          if(sum + arr[i] > capacity ){
        
          // incease the new student count
          // assign value of the new student 
              count = count + 1;
              sum = arr[i];
          }else{
          // you can add the next element countinous manner, until it sum is not greater to capacity of the element
              sum = sum + arr[i];
          }
      }

      if(count <= LimitStudent){
          return true;
      }
      return false;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.

     // Edge case - number of student greater to array is size
     if(m > n){
         return -1;
     }

    int sum = 0;
    int maxi = INT_MIN;

    for(int i=0; i<n; i++){
            sum += arr[i];
            maxi = max(maxi, arr[i]);
    }
      

    int start = maxi;
    int end = sum;
    int mid = 0;

    int result = -1;

    while(start <= end){
        mid = start + ( end - start)/2;
        if(isPossibleAllocate(arr,n,m,mid) == true){
            result = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return result;
}