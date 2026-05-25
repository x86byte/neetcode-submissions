// writing another solution instead of AES solution

class Solution {
    char del = 227;
    int emp = 0;
public:

    string encode(vector<string>& s)
    {
        const size_t sz = s.size();
        if(!sz)
        {
            emp = 1;
            return "";
        }
        if(sz == 1)
        {
            if(!s[0].size())
                return "";
        }
        string enc;
        for(int i = 0; i < sz; i++)
        {
            if(!s[i].size()){
                enc+= 128;
                continue;
            }
            enc += s[i];
            if(i < sz - 1)
            {
                enc += del;
            }
        }
        const size_t ez = enc.size();
        for(int i = 0; i < ez; i++)
        {
            enc[i] = enc[i] + (i % 10);
        }
        return enc;
    }

    vector<string> decode(const string s)
    {
        const size_t sz = s.size();
        if(emp)
            return {};
        vector<string> re;
        string rs;
        if(sz == 1 && s[0] != 128)
            return {s};
        if(!sz)
            return {""};
        for(int i = 0; i < sz; i++)
        {
            s[i] = s[i] - (i % 10);
            if(s[i] == -128)
            {
                re.push_back("");
                continue;
            }
            if(s[i] == del || i == sz - 1){
                if(i == sz - 1)
                    rs += s[i];
                re.push_back(rs);
                rs.clear();
                continue;
            }
            rs+=s[i];
        }
        return re;
    }
};