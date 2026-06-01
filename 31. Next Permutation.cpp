class Solution {
    void reversee(vector<int>& nums,int strt)
    {
        int end=nums.size()-1;
        while(strt<=end)
        {
        int temp=nums[end];
        nums[end]=nums[strt];
        nums[strt]=temp;
        strt++;
        end--;
        }
    }
public:
    void nextPermutation(vector<int>& nums) {
       int n=nums.size();
       int flag=0;
       for(int i=n-1;i>0;i--)
       {
        if(nums[i-1]<nums[i])
        {
            flag=1;
           int j=n-1;
           
            while(nums[i-1]>=nums[j]) j--;
            swap(nums[i-1],nums[j]);
            reversee(nums,i);
            break;
        } 
       }   
       if(flag==0)  reversee(nums,0);
    }
};