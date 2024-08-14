class Solution
{
    public:
    bool areIsomorphic(string str1, string str2)
    {
    if(str1.length() != str2.length())
        return false;
        int s1[256] = {0};
        int s2[256] = {0};
        for(int i=0 ;i<str1.length(); i++){
            if(s1[str1[i]] != s2[str2[i]])
            return false;
            s1[str1[i]] = i + 1;
             s2[str2[i]] = i + 1;
        }
        return true;
    }
};