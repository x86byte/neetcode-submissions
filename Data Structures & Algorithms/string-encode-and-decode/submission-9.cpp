// writing another solution instead of AES solution

class Solution {
public:

    string encode(vector<string>& s)
    {
        if(s.size() == 1)
        {
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
        if(!s.size())
            return {""};
        if(s.size() == 1)
            return {s};
        vector<string> re;
        string sv;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '#')
            {
                re.push_back(sv);
                sv.clear();
                continue;
            }
            sv+=s[i];
        }
        return re;
    }
};
