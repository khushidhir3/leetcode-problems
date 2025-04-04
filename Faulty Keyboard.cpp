class Solution {
public:
    string finalString(string s) {
      string a="";
      for(char c:s){
        if(c!='i'){
        a+=c;
      }
      else{
         reverse(a.begin(),a.end());
      }
      } 
      return a; 
    }
};
