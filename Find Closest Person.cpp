class Solution {
public:
    int findClosest(int x, int y, int z) {
        int b=abs(x-z);
        int c=abs(y-z);
        if(b>c){
            return 2;
        }
        else if(b==c){
            return 0;
        }
        else{
            return 1;
        }
    }
};
