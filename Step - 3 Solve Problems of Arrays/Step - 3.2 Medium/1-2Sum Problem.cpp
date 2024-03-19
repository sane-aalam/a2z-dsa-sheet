string read(int n, vector<int> book, int target)
{
    // Write your code here.
    sort(book.begin(),book.end());

	int start = 0;
	int end = n-1;

    vector<pair<int,int>> result;
	// codechef => print Actual Element
	// leetcode -> print the index vlaue

	while(start < end){
		int addtionTwo = book[start] + book[end];

		// When we will get the target Value Avaiable 
		if(addtionTwo == target){
			result.push_back({book[start],book[end]});
			start++;
			end--;
		}else if(addtionTwo < target){
			start++;
		}else{
			end--;
		}
	}

	if(result.size() == 0){
	  return "NO";
    }
    return "YES";
}
