class Solution {
public:
    bool diff(string s, string t)
    {
        int ctr = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == t[i])
            {
                cout << s[i];
                ctr++;
            }
        }
                cout << ctr << endl;
        if((ctr==s.size()) && (ctr == t.size()))
            return true;
        return false;
    }
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());

        set<char> sc;
        set<char> s2;

        for(int i = 0; i<s.size(); i++){
                s2.insert(s[i]);
        }
        for(int i = 0; i<s.size(); i++){
                sc.insert(s[i]);
                sc.insert(t[i]);
        }
        int ctr = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == t[i])
            {
                cout << s[i];
                ctr++;
            }
        }
        cout << ctr << endl;
        if((ctr==s.size()) && (ctr == t.size()))
            return true;
        return false;
        if(ctr == sc.size())
            return true;
        return false;

    }
};
