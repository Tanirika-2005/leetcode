class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {   
        // bool dupe = false; 
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     for(int j = i+1 ; j<nums.size() ; j++)
        //     {
        //         if(nums[i] == nums[j])
        //         dupe = true;
        //     }
        // }
        set <int> dup ; 
        for(int i = 0 ; i < nums.size() ; i++)
        {
            dup.insert(nums[i]);
        }
        if(dup.size() < nums.size())
        return true; 
        else 
        return false; 

    }
};