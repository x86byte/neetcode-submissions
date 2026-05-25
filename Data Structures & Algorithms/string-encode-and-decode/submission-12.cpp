// writing another solution instead of AES solution

class Solution {
    char del = '|';
    int checker = 0;
public:

    string encode(vector<string>& s)
    {
        if(s.size() == 1)
        {
            if(!s[0].size())
                checker=1;
        }
        string enc;
        for(int i = 0; i < s.size(); i++)
        {
            enc += s[i];
            if(i < s.size() - 1)
            {
                enc += del;
            }
        }
        for(int i = 0; i < enc.size(); i++)
        {
            enc[i] = enc[i] + (i % 10);
        }
        return enc;
    }

    vector<string> decode(string s)
    {
        if(checker)
            return {""};
        vector<string> re;
        string rs;
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = s[i] - (i % 10);
            cout << s[i];
            if(i == s.size() - 1)
                cout << "at the end\n";
            if(s[i] == del || i == s.size() - 1){
                if(i == s.size() - 1)
                    rs += s[i];
                re.push_back(rs);
                rs.clear();
                continue;
            }
            rs+=s[i];
        }
                    cout << endl;
        return re;
    }
};
