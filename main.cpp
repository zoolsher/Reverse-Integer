class Solution {
public:
    int reverse(int x) {
        bool neg=false;
        if (x < 0) neg = true, x = -x;
        unsigned int ret = 0;
        while (x / 10){
            int temp = ret*10;
            if(temp/10!=ret){return 0;}
            ret = ret*10 + x%10;
            x = x / 10;
        }
        int tempRet = ret*10;
        if(tempRet/10!=ret){return 0;}
        ret =ret*10+ x;
        if (ret>0x7fffffff) return 0;
        if (neg) return -(int)ret;
        return (int)ret;
    }    
};
