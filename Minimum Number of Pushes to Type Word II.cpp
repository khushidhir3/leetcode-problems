class Solution {
public:
    int minimumPushes(string word) {
       vector<int>count(26,0);
        for(char ch:word){
             count[ch-'a']++;
              }
        
        sort(count.begin(),count.end(),greater<int>());
        int a=0;
        for(int i=0;i<8;i++){
            a+=count[i];
        }
        for(int i=8;i<16;i++){
            a+=count[i]*2;
        }
        for(int i=16;i<24;i++){
            a+=count[i]*3;
        }
        for(int i=24;i<26;i++){
            a+=count[i]*4;
        }
        return a;
    }
};
