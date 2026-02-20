class Solution {
public:
    string reorganizeString(string s) {
      unordered_map<char,int>mp;
      for(char c:s){
        mp[c]++;
      }  
      priority_queue<pair<int,char>>pq;
      for(auto i:mp){
        if(i.second>(s.length()+1)/2)
        return "";
        pq.push({i.second,i.first});
      }
      string a="";
      while(pq.size()>1){
        auto[f1,c1]=pq.top();
        pq.pop();
        auto[f2,c2]=pq.top();
        pq.pop();
        a+=c1;
        a+=c2;
        f1--;
        f2--;
        if(f1>0)pq.push({f1,c1});
        if(f2>0)pq.push({f2,c2});
      }
      if(!pq.empty()){
        a+=pq.top().second;
      }
      return a;
    }
};
