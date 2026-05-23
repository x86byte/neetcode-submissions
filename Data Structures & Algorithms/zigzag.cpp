// https://leetcode.com/problems/zigzag-conversion/
class Solution {
public:
    string convert(string ss, int nr) {
            if(nr == 1)
                return ss;
            short row = 0;
            short gd = 0;
            vector<string> str(nr);
            for(const char c : ss){
                str[row] += c;
                if (row == 0 || row == nr - 1)
                    gd = !gd; 
                row += gd ? 1 : -1;
            }
            ss.clear();
            for(auto r : str)
                ss+=r;
            return (const string)ss;
    }
};
