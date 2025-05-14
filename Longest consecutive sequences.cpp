class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int n=nums.size();
        long long int ans=1;
        long long int y=0,c=0;
        if(nums.size()==0) return 0;

        for(auto it:st){
            if(!st.count(it-1)){
                y=1;
                c=it;
            while(st.count(c+1)){
                y+=1;
                c++;
            } 
            ans=max(ans,y);
            }
        }
        return ans;
        
    }
};

// Mine Sol
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int count =0;
        int mx = INT_MIN;
        for (int i=0;i<nums.size()-1;i++){
            if (nums[i] == nums[i+1])continue;

            else if (abs(nums[i] -nums[i+1]) == 1){
                count ++;
            }
            else {
                mx= max(count,mx);
                count =0;
            }
        }
        mx= max(count,mx);
        count =0;
        return mx + 1;
    }
};
