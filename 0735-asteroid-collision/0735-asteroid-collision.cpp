class Solution {
public: 
    vector<int> asteroidCollision(vector<int>& asteroids) {
         vector<int>ans;
        // collision tabhi hoga jab stack ka top element 0 se greater hoga and resultant direction stack ke top element aur ith element ke sum se decide hoga 
        // agar sum > 0 , direction right otherwise left direction me proceed hoga

        for( int & a :asteroids){
            while(!ans.empty() && ans.back()>0 && a<0){
                int sum = a + ans.back();
                // agar sum >0 , resultant direction will be right(forward) otherwise left 
                if(sum < 0){
                    ans.pop_back();
                }
                else if(sum > 0){
                   a=0;
                }
                else{
                    // in case of sum == 0 
                    ans.pop_back(); 
                    a = 0;
                }
            }
            if(a!=0){
                ans.push_back(a);
            } 
        }
        return ans;
}
};