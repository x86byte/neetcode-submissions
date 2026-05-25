// writing another solution instead of AES solution

class Solution {
    char del = 227;
    int checker = 0;
    int emp = 0;
    int rsz = 0;
    int idx  = -1;
public:

    string encode(vector<string>& s)
    {
        rsz = s.size();
        if(!s.size())
        {
            emp = 1;
            return "";
        }
        if(s.size() == 1)
        {
            if(!s[0].size())
                return "";
        }
        string enc;
        for(int i = 0; i < s.size(); i++)
        {
            if(!s[i].size()){
                enc+= 128;
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
        if(emp)
            return {};
        vector<string> re;
        string rs;
        if(s.size() == 1 && s[0] != 128)
            return {s};
        if(!s.size())
            return {""};
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = s[i] - (i % 10);
            cout << int(s[i]);
            if(s[i] == -128)
            {
                re.push_back("");
                continue;
            }
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