class Solution {
public:
    int mirrorDistance(int n)
     {
        int k=n;
        int rev=0;
        while(n!=0){
            int a=n%10;
            rev=rev*10+a;
            n/=10;
        }
        int c=abs(k-rev);
        return c;
    }
};
