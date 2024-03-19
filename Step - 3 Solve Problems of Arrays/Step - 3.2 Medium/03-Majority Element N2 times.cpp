int majorityElement(vector<int> v) {
	// Write your code here

	// majority Algorithm
	// more voting Algorithm we can apply

	int n = v.size();

	// make first element count 1 make, this is majority Element
	 // condtion-1 -> if comes again increase the count
    // conditon-2 -> if does not come again decrease the count 
     // end of the day,you will have the MajorityElement as result 

	int MajorityElementREsult;
	int MajorityCount = 0;

	for(int i = 0; i<n; i++){
		if(MajorityCount == 0){
			MajorityElementREsult = v[i];
			MajorityCount = 1;
		}else if(MajorityElementREsult == v[i]){
			MajorityCount++;
		}else{
			MajorityCount--;
		}
	}
	return MajorityElementREsult;
}