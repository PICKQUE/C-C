 /*
      给一个数组，从数组中取四个数相加和target相等
 */
  //the main solution
  //先对数组进行排序，然后再fix一个数(i)，然后在fix一个数(j),然后去找另外两个数(left,right)，我们只要处理left right两个指针
  vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> res;//make set because not repetitive(重复)
     
        sort(nums.begin(),nums.end());
        //the size_type behave diffrent on the diffrent machines so make implict convsion
        for(int i=0;i<int(nums.size()-3);i++){
            for(int j=i+1;j<int(nums.size());j++){
                if(j>i+1&&nums[j]==nums[j-1])continue;
                int left=j+1,right=nums.size()-1;
                while(left<right){
                    int sum=nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==target){
                        vector<int>out{nums[i],nums[j],nums[left],nums[right]};
                        res.insert(out);
                        ++left;--right;
                    }
                    else if(sum<target)++left;
                    else right--;
                }
            }
        }
        return vector<vector<int>> (res.begin(),res.end());
        
    }
    //3sum
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        sort(nums.begin(),nums.end());
        if(!nums.empty()&&nums.back()<0)return {};
        for(int k=0;k<nums.size();++k){
            if(nums[k]>0)break;
            int target=0-nums[k];
            int i=k+1,j=nums.size()-1;
            while(i<j){
                if(target==nums[i]+nums[j]){
                    res.insert({nums[k],nums[i],nums[j]});
                    while(i<j&&nums[i]==nums[i+1])++i;
                    while(i<j&&nums[j]==nums[j-1])--j;
                    ++i;--j;
                }
                else if(target>nums[i]+nums[j])++i;
                else --j;
            }
        }
        return vector<vector<int>>(res.begin(),res.end());
    }
};
