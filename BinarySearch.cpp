WE are doing for the Binary search in loop method but i have not taken the input

class Solution{
    public:
    int search(vector<int>& nums,int target){
        int lo=0;
        int hi=nums.size()-1;
        while(lo<hi-1){
            int mid=(hi+lo)/2;
            if(nums[mid]==target) return mid;
           else if(nums[mid]>target){
                hi=mid-1;}
                else lo=mid+1;
            }
        }
    }
(Time complexity will be nlogn)