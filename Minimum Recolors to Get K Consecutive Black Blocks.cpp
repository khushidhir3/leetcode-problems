class Solution {
public:
    int minimumRecolors(string blocks, int k) {
       int n=blocks.size();
       int a=0;
       for(int i=0;i<k;i++){
        if(blocks[i]=='W')a++;

       } 
       int current=a;
       for(int i=k;i<n;i++){
        if(blocks[i-k]=='W')current--;
        if(blocks[i]=='W')current++;
        a=min(a,current);
       }
       return a;
    }                                                                                                                                                                                                                                                                                                                                                                   
};
