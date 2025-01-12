class Solution 
{
public:
    int jump(vector<int>& nums) 
    {
        int maxindex = 0, count = 0, lastjump = 0;
        for (int i = 0; i < nums.size() - 1; i++) 
        {
            maxindex = max(maxindex, i + nums[i]); 
            if (i == lastjump) 
            {
                count++;
                lastjump = maxindex; 
                cout << count << " "; 
            }
        }
    
        return count;
    }
};
