class Solution {
public:
    int addDigits(int num) {
       int a=0;
       while(num>9){
        a=0;
        while(num>0){
            int r=num%10;
            a=a+r;
            num=num/10;
        }
        num=a;
       } 
       return num;
    }
};
