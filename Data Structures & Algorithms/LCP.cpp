class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        const string fs=s[0];
        string re;
        short all = 0;
        for(int d = 0; d < fs.size(); d++)
        {
            char c = fs[d];
            for(auto t : s){
                if(t[d]== c){
                    all++;
                    if(all == s.size()){
                        re+=c;
                        all =0;
                    }
                }
                else
                    return re;
            }
        }
        return re;
    }
};
