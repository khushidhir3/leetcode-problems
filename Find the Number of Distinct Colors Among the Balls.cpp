class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int>colors;
        unordered_set<int> used;
        vector<int>result;
        
        for (auto& query:queries) {
            int ball=query[0];
            int color=query[1];
            if (colors.find(ball) !=colors.end()) {
                int o =colors[ball];
                if (used.count(o)>0) {
                   bool remove = true;
                    for (const auto& [b, c] :colors) {
                        if (c == o&& b != ball) {
                            remove = false;
                            break;
                        }
                    }
                    if (remove) {
                        used.erase(o);
                    }
                }
            }
            colors[ball] = color;
            used.insert(color);
            
            
            result.push_back(used.size());
        }
        
        return result;
    }
};
