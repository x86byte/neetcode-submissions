class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        n = int(num1);
        nn = int(num2)
        return (str(n * nn))

"""
    string multiply(string num1, string num2) {
            if((num1.size() >= 1 && num1.size() <= 200) && (num1.size() >= 1 && num1.size() <= 200))
            {
                size_t n = stoi(num1);
                size_t nn = stoi(num2);
                return(to_string(n * nn));
            }
            return string("");
            
    }
"""