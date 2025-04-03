class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        int mpp[26]={0};

        for(int i=0;i<n;i++) mpp[s[i]-97]++;

        for(int i=0;i<n;i++){
            if(mpp[s[i]-97]==1) return i;
        }
        return -1;
    }
};
