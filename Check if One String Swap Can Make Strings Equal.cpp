class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        int first=-1;
        int second=-1;
        int diffcount=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i] != s2[i] ) {
                diffcount++;
            
             if (diffcount > 2) return false;
            if(first==-1){
                first=i;
            }
            else{
                second=i;
            }
        }
    }
return diffcount == 2 && s1[first]==s2[second]&&s1[second]==s2[first];
}
};
