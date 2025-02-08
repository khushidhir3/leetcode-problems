class NumberContainers {
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
       if(indexn.count(index)){
        int o=indexn[index];
        num[o].erase(index);
        if(num[o].empty()){
         num.erase(o);
        }
       }
       indexn[index]=number;
       num[number].insert(index);
    }
    
    int find(int number) {
       if(num.count(number)&& !num[number].empty()){
        return *num[number].begin();
       }
       return -1;
    }
    private:
    unordered_map<int,int>indexn;
    unordered_map<int,set<int>>num;
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
