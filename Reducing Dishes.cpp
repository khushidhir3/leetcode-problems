class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.rbegin(),satisfaction.rend());
        int maxt=0;
        int current=0;
        int t=0;
        for(int s:satisfaction){
            t+=s;
            current+=t;
            if(current>maxt){
                maxt=current;
            }
        }
        return maxt;
    }
};
