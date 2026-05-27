class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> b;
        for(int r = 0; r < board.size(); r++)
            for(int c = 0; c < board[0].size(); c++)
            {
                int e=  board[r][c];
                if((char)(e) == '.')
                    continue;
                string rr = string(1, e) + " row " + string(1, r);
                string cc = string(1, e) + " col " + string(1, c);
                string bx = string(1, e) + " box " + string(1, r / 3) + "/" + string(1, c / 3);
                if(!b.insert(rr).second || !b.insert(cc).second || !b.insert(bx).second)
                    return false;
            }
        return true;
    }
};
