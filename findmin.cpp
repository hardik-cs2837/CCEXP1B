class Solution {
public:
    int findMin(vector<int>& nums) {
     int low=0,high=nums.size()-1;
     int element=INT_MAX;
     while(low<=high){
        int mid=low+(high-low)/2;
        element = min({element, nums[low], nums[mid], nums[high]});
            if(nums[low]<=nums[mid]){
                element = min(element, nums[low]);
                low=mid+1;
            }
            else if(nums[high]>nums[mid]){
                high=mid-1;
            }
     }  
     return element; 
    }
};
