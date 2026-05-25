// writing another solution instead of AES solution

class Solution {
    int checker = 0;
public:

    string encode(vector<string>& s)
    {
        if(!s.size())
            checker = 1;
        if(s.size() == 1)
        {
            if(!s[0].size())
                return {""};
            return s[0];
        }
        string re;
        for(auto ss : s){
            re+= ss;
            re+='#';
        }
        return re;
    }

    vector<string> decode(string s)
    {
        if(checker)
            return {};
        if(!s.size())
            return {""};
        if(s.size() == 1)
            return {s};
        vector<string> re;
        string sv;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '#' || i == s.size() - 1)
            {
                if(s[i] != '#')
                    sv+=s[i];
                re.push_back(sv);
                sv.clear();
                continue;
            }
            sv+=s[i];
        }
        return re;
    }
};
