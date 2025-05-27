/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int>a;
        if(root==nullptr)return a;
        stack<Node*>s;
        s.push(root);
        while(!s.empty()){
            Node* node=s.top();
            s.pop();
             a.push_back(node->val);
             for(Node* b: node->children) {
                s.push(b);
            }
        }
reverse(a.begin(),a.end());
        return a;
        
    }
};
