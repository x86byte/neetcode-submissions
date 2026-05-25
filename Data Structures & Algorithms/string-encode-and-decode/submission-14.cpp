// writing another solution instead of AES solution

class Solution {
    char del = '|';
    int checker = 0;
    int emp = 0;
    int rsz = 0;
public:

    string encode(vector<string>& s)
    {
        rsz = s.size();
        if(s.size() == 1)
        {
            if(!s[0].size())
                checker=1;
        }
        string enc;
        for(int i = 0; i < s.size(); i++)
        {
            cout << s[i];
            if(s[i].size() == 0)
            {
                emp += 1;
                continue;
            }
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

        for(int i = 0; i < emp; i++)
        {
            re.push_back("");
            if(i == rsz)
                return re;
        }
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = s[i] - (i % 10);
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
