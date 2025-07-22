class Solution {
public:
    int minPartitions(string n) {
        int prev=0;
        for(char ch:n){
            if(ch-'0'>=prev)
            prev=ch-'0';
        }
        return prev;
    }
};
