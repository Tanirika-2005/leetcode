class Solution {
public:
    int next(int s,int index,vector<int>& nums)
    {

        int greater = -1;
        for(int i = index+1 ; i<nums.size();i++)
        {
            if(nums[i]>s)
            {
                greater = nums[i];
                return greater;
            }
        }
        for(int i = 0 ; i<index; i++)
        {
            if(nums[i]>s and greater == -1)
            {
                greater = nums[i];
                break;
            }
        }
        return greater;
    }
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        vector <int> arr;
        for(int i = 0 ;i<nums.size();i++)
        {
            int g = next(nums[i],i,nums);
            arr.push_back(g);
        }
        return arr;
        
    }
};