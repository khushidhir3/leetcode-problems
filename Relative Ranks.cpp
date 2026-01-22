class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>y(score.size());
      priority_queue<pair<int,int>>pq;
      for(int i=0;i<score.size();i++){
       pq.push({score[i],i});
      }  
     int c=1;
     while(!pq.empty()){
       int k=pq.top().second;
       pq.pop();
       if(c==1){
        y[k]="Gold Medal";
       }
       else if(c==2){
        y[k]="Silver Medal";
       }
       else if(c==3){
        y[k]="Bronze Medal";
       }
       else{
        y[k]=to_string(c);
       }
       c++;
     }
     return y;

    }
};
