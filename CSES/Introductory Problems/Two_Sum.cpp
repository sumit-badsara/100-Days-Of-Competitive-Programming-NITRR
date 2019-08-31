class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,first=0,second=0;
        
        for(i=0;i<nums.size();i++)
        {
            first = i;
            
            for(j=i+1;j<nums.size();j++)
            {
                second = j;
                if(nums.at(first)+nums.at(second)==target)
                    break;
            }
            
            if(nums.at(first)+nums.at(second)==target)
                break;
        }
        
    
    vector <int> ans(2);
    ans.at(0) = first;
    ans.at(1) = second;
        
    return ans;
        
    }
};