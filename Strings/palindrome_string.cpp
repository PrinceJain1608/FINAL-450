#include<algorithm>
class Solution{
public:	
	int isPalindrome(string S)
	{
	    string a=S;
	    reverse(S.begin(),S.end());
	    if(S==a){
	        return 1;
	    }
	    return 0;
	}

};