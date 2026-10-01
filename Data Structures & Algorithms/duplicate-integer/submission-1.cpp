class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(auto const&s :nums){
            if(seen.count(s)){
                return true;
            }else{
                seen.insert(s);
            }
        }
        return false;

    }
};