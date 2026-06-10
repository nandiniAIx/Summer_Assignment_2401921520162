class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;
        
        if (s.length() < p.length()) return ans;
        
        int count[26] = {0};
        
        for (int i = 0; i < p.length(); i++) {
            count[p[i] - 'a']++;
        }
        
        int left = 0, right = 0, k = p.length();
        
        while (right < s.length()) {
            
            count[s[right] - 'a']--;  
            
            if (right - left + 1 == k) {
                
                bool flag = true;
                for (int i = 0; i < 26; i++) {
                    if (count[i] != 0) {
                        flag = false;
                        break;
                    }
                }
                
                if (flag) {
                    ans.push_back(left);
                }
                
                count[s[left] - 'a']++;
                left++;
            }
            
            right++;
        }
        
        return ans;
    }
};