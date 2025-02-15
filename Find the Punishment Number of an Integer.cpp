class Solution {
public:
    int punishmentNumber(int n) {
       int p=1;
       for(int i=2;i<=n;i++){
        string s=to_string(i*i);
        if(iscorrect(s,0,0,i)){
            p+=i*i;
        }
       }
        return p;
       }
       bool iscorrect(string&s,int pos,int sum,int&val){
        if(pos>=s.size())
        return sum==val;

        for(int i=0;i+pos<s.size();i++){
            int cur=stoi(s.substr(pos,i+1));
            if(iscorrect(s,i+pos+1,sum+cur,val))
            return true;
        }
        return false;
       }
    };
