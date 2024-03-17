#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int largest(vector<int> &arr, int n){
         int largestValue = INT_MIN;

    for(int i = 0; i< arr.size(); i++){
        int currentElement = arr[i];
        largestValue = max(currentElement,largestValue);
    }

    return largestValue;
    }
};


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}