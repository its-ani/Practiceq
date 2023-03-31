#include<iostream>
#include<vector>

using namespace std;
int main(){
 vector<int> nums={4,3,2,7,8,2,3,1};
 int len = nums.size();
        for(int i=0; i<len; i++) {
            int m = abs(nums[i])-1; // index start from 0
            nums[m] = nums[m]>0 ? -nums[m] : nums[m];
            cout<<nums[m]<<" ";
        }
        cout<<endl;
        for(auto val : nums){
            cout<<val<<" ";
        }
        cout<<endl;
        vector<int> res;
        for(int i = 0; i<len; i++) {
            if(nums[i] > 0) res.push_back(i+1);
        }
        for(auto val : res){
            cout<<val<<" ";
        }
        return 0;
}

