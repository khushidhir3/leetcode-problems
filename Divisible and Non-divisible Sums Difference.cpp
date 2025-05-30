class Solution {
public:
    int differenceOfSums(int n, int m) {
        int t=n*(n+1)/2;
        int a=n/m;
        int sumdm=m*a*(a+1)/2;
        int nsumdm=t-sumdm;
  return nsumdm-sumdm;
    }
};
