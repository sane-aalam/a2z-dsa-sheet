int floorSqrt(int n)
{
    // Write your code here.
        long long start = 0;
        long long end = n;
        
        long long mid = start + (end - start)/2;
        
        long long result = -1;
         long long squreValue = 0;
        
        while(start <= end){
            // mid value now => 4
            // 4 * 4 == 16 
            // return 4 value
             squreValue = mid * mid;
            if(squreValue == n){
                return mid;
            }else if(squreValue < n){
                result = mid;
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return result;
}
