class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xora = start^goal;
        int c=0;
        while(xora){
            c+=xora&1;
            xora>>=1;
        }
        return c;
    }
};
