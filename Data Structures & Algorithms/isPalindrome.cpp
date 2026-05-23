class Solution {
public:
    bool isPalindrome(const int x) {
        const string s = to_string(x);
        if(s.size() == 2)
            return (s[0] == s[1] ? true : false);
        const short sz = s.size();

        for(int i = 0; i < sz; i++)
            for(int j = sz - 1; j >= 0; j--){
                if(i == j)
                    return true;
                if(s[i] != s[j])
                    return false;
                if( j == 0 && i == sz - 1)
                    return true;
                i++;
            }
        return false;
    }
};
