class Solution {
public:
    TreeNode* recoverFromPreorder(string traversal) {
       int i=0;
       return recoverFromPreorder(traversal,0,i);
    }
    private:
    TreeNode* recoverFromPreorder(const string& traversal, int d, int& i) {
        int n=0;
        while(i+n<traversal.length()&&traversal[i+n]=='-')
        n++;
        if(n!=d)
        return nullptr;
        i+=d;
        const int s=i;
         while (i < traversal.length() && isdigit(traversal[i]))
      ++i;

    return new TreeNode(stoi(traversal.substr(s, i - s)),
                        recoverFromPreorder(traversal, d + 1, i),
                        recoverFromPreorder(traversal, d + 1, i));
  }
};
