class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0;
        int ans=0;
        vector<int>f(26,0);
        for(int i=0;i<s.size();i++){
            f[s[i]-'a']++;
            while(f[s[i]-'a']>2){
                f[s[l]-'a']--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};