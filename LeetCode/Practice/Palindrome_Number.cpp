class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> v;
        if (x < 0) return false;
        while(x)
        {
            int re = x%10;
            v.push_back(re);
            x = x/10;
        }
        for (int i=0,j=v.size()-1;i<j;i++,j--)
        {
            if (v[i] != v[j])
            {
                return false;
            }
        }
        return true;
    }
};