class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    int s=0;
		    sort(v.begin(),v.end());
		    int n=v.size();
		    int e=n-1;
		    if(n%2!=0){
		        int mid=(s+e)/2;
		        return v[mid];
		    }
		    else{
		        int mid=(s+e)/2;
		        int mid2=mid+1;
		        int ans=(v[mid]+v[mid2])/2;
		        return ans;
		    }
		}
};