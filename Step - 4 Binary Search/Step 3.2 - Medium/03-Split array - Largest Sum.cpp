
// RE-use the code of Book Allocation problem statement
bool isPossibleAllocate(vector<int> & a,int n, int LimitStudent, int capacity){

      int count = 1;
      int sum = 0;

      for(int i = 0; i<n; i++){
          if(sum + a[i] > capacity ){
        
          // incease the new student count
          // assign value of the new student 
              count = count + 1;
              sum = a[i];
          }else{
          // you can add the next element countinous manner, until it sum is not greater to capacity of the element
              sum = sum + a[i];
          }
      }

      if(count <= LimitStudent){
          return true;
      }
      return false;
}

int LargetSum(vector<int> &a, int k)
{
    //    Write your code here.
     int n = a.size();
     int m = k;

     if(m > n){
         return -1;
     }

    int sum = 0;
    int maxi = -1;

    for(int i=0; i<n; i++){
            sum += a[i];
            maxi = max(maxi, a[i]);
    }
      
    int start = maxi;
    int end = sum;
    int mid = 0;

    int result = -1;

    while(start <= end){
        mid = start + ( end - start)/2;
        if(isPossibleAllocate(a,n,m,mid) == true){
            result = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return result;

}

int largestSubarraySumMinimized(vector<int> a, int k) {
    // Write Your Code Here
    return LargetSum(a,k);
}