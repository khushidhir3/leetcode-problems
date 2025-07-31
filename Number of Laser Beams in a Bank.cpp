class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res=0,d=0;
        for(int j=0;j<bank.size();j++){
            int c=0;
            for(int k=0;k<bank[0].size();k++){
                if(bank[j][k]=='1'){
                    res+=d;
                    c++;
                }
            }
            if(c!=0){
                d=c;
            }
        } 
        return res;
          }
};
