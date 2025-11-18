class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int k=0;
        for(int i=0;i<word.length();i++){
            if(word[i]==word[i+1]||abs(word[i]-word[i+1])==1){
                k++;
                i++;

            }
        }
        return k;

    }
};
