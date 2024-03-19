long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long currentsum = 0;

    long long maxisum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        maxisum = max(currentsum, maxisum);
        // by chance currentsum gonna to negative site,we have to set with help zero 0
        // start again with 0
        if (currentsum < 0)
            currentsum = 0;
    }

    if (maxisum < 0)
        return 0;

    return maxisum;
}