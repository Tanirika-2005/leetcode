class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int count_5 = 0; 
        int count_10 = 0; 
        int count_20 = 0; 
        //printf("%d %d ",count_5,count_10);
        int change = 5;
        for(int i = 0; i < bills.size();i++)
        {
            bool m = false;
            if(bills[i] == 5)
            count_5++; 
            else if(bills[i] == 10)
            count_10++; 
            else if(bills[i] == 20)
            count_20++; 
            int c = bills[i]-change; 
            if(c == 0)
            {
                m = true;
            } 
            else if(c == 5 and count_5 > 0)
            {
                count_5 = count_5 - 1; 
                m = true;
            }
            else if(c == 15 and count_10>0 and count_5>0 )
            {
                count_10 = count_10-1; 
                count_5 = count_5-1;
                m = true;
            }
            else if(c == 15 and count_5>=3)
            {
                count_5 = count_5 - 3;
                m = true;
            }

            if(m == false)
            return false ;
        }
        return true;
    }
};