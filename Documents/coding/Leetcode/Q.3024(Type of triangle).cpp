class Solution {
public:
    string triangleType(vector<int>& nums) {
        int x = nums.size();
        int a = nums[0];
        int b= nums[1];
        int c = nums[2];
        string s="";
        if((a<b+c) && (b<a+c) && (c<a+b)){
            if(a==b && b==c){
            s = "equilateral";
        }
        else if((a==b && b!=c) || (b==c && a!=b) || (a==c && a!=b)){
            s = "isosceles";
        }
        else{
            s="scalene";
        }
        }
        else{
            s="none";
        }
        return s;
    }
};