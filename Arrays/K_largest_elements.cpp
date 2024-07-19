class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    int s=0;
	    int e=n-1;
	    vector<int> ans;
	    sort(arr,arr+n);
	    for(int i=n-1;i>n-k-1;i--){
	        ans.push_back(arr[i]);
	    }
	    sort(ans.begin(),ans.end(),greater<int>());
	    return ans;
	}

};