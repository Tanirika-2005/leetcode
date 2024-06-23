class Solution {
public:
    double minmax(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        double min = nums[0];
        double max = nums[nums.size()-1];
        nums.erase(nums.begin());
        nums.erase(nums.end() - 1);
        double sum = (min + max)/2; 
        return sum;
    }
    double minimumAverage(vector<int>& nums) 
    {
        vector <double> avg;
        int n = nums.size()/2;
        for(int i = 1;i<=n;i++)
        {
            double sum = minmax(nums);
            avg.push_back(sum);
        }
        sort(avg.begin(),avg.end());
        return avg[0];
        
    }
};