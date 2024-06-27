class Solution {
public:
    int next(int s,vector<int>& nums2)
    {
        int index = 0;
        for(int i = 0 ; i<nums2.size();i++)
        {
            if(s==nums2[i])
            {
                index = i;
            }
        }
        int greater = -1;
        for(int i = index+1 ; i<nums2.size();i++)
        {
            if(nums2[i]>s)
            {
                greater = nums2[i];
                break;
            }
        }
        return greater;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {   
        vector <int> arr;
        for(int i = 0 ;i<nums1.size();i++)
        {
            int g = next(nums1[i],nums2);
            arr.push_back(g);
        }
        return arr;
    }
};