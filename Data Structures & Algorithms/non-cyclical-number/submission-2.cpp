class Solution {
public:


int squar(const int n, const int p)
{
    return pow(n, p);
}


int re(int n)
{
            size_t res = 0;

    while(n)
    {
        int sum = n % 10;
        sum= squar(sum, 2);
        res += sum;
        n = n / 10;
    }
    
    return res;
}

    bool isHappy(int n) 
    {

        size_t c = 0;
        if(!n)
            return 0;
        int fq[1000000] = {};
        size_t res = 0;
        int raper=0;
        while(1)
        {
            int ret = re(n);
            if(fq[ret])
            {
                return 0;
            }
            fq[ret]=1;
            n = ret;
            if(n == 1)
                return 1;
        }
        return 1;
    }
};
