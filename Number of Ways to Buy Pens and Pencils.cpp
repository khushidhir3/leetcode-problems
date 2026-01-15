class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        int b=total/cost1;
        long long p=0;
        for(int i=0;i<b;i++){
            int b=abs(total-(i*cost1));
            int r=(b/cost2)+1;
            p+=r;
        }
        return p;
      }
};
