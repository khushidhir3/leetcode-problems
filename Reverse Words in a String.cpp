class Solution {
public:
    string reverseWords(string s) {
     vector<string>a;
      stringstream ss(s);
      string word;
      while(ss>>word){
        a.push_back(word);
      }
      reverse(a.begin(),a.end());
      string b="";
      for(int i=0;i<a.size();i++){
         b+=a[i];
        if(i!=a.size()-1){
              b+=" ";
        }
       
      
      }
      return b;
     
    }
};
