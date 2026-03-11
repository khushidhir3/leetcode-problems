class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int a=0;
        int i=0;
        while(n>0){
         
            a|=(!(n&1)<<i);
            n=n>>1;
            i++;

}
        return a;


     
    }
};
