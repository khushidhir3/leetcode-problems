class Solution {
public:
    string stringHash(string s, int k) {
     int n=s.length();
     if(n%k!=0)return "";
     string res="";
     for(int i=0;i<n;i+=k){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=(s[j]-'a');

        }
        sum=sum%26;
        char ch=sum+'a';
        res+=ch;
     } 
     return res;  
    }
};
