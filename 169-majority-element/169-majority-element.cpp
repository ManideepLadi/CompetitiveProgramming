class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int n=nums.size();
        int element=nums[0];
        for(int i=1;i<n;i++){
            if(element==nums[i]){
                count++;
            }
            else{
                count--;
                if(count<0){
                    element=nums[i];
                    count=1;
                }
            }
        }
        int counter=0;
        for(int i=0;i<n;i++){
            if(nums[i]==element){
                counter++;
            }
        }
        if(counter>n/2){
            return element;
        }
        return element;
    }
};