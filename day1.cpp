#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i= 0; i < nums.size() ; i++){
            int digitcount = 0;
            while(nums[i]>0){
                nums[i]/=10;
                digitcount ++;
            }
            if(digitcount%2==0)
            count ++;
        }
    return count;
    }
};
int main(){
    Solution sol;
    vector<int>nums = {12,345,2,6,7896};
    int result = sol.findNumbers(nums);
    cout << result << endl;
    return 0;
}