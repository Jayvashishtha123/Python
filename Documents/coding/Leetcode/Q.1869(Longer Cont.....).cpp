class Solution {
public:
    bool checkZeroOnes(string s) {
       int count0 = 0;
       int count1 = 0;
        int ans1 = 0;
        int ans0 = 0;
        int i = 0;

        while (i < s.size()) {
             
            if (s[i] == '1') {  
                count0 = 0;
                count1++;
                ans1 = max(ans1, count1);
                i++;
            } else if (s[i] == '0') {  
                count1 = 0;
                count0++;
                ans0 = max(ans0, count0);
                i++;
            } else {
                i++;
            }
        }

        return ans1 > ans0;
    }
};
