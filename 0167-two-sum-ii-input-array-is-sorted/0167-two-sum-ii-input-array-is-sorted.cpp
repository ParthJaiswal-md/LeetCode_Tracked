class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int start = 0;
        int end = numbers.size() - 1;
        int currsum = INT_MAX;
        while(currsum!=target)
        {
            currsum = numbers[start] + numbers[end];
            if(currsum < target)
                start++;
            if(currsum > target)
                end--;
        }
        vector<int> result = {start+1,end+1} ;
            return result;
    }
};