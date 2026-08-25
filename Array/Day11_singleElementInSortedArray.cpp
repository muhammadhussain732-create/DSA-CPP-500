class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n =nums.size();
     if(n==1) return nums[0];
     if (nums[0]!=nums[1]){
            return nums[0];
        }
     if (nums[n-1]!=nums[n-2]){
            return nums[n-1];
        }
        int st=1,end=n-2 ;
     while (st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]!=nums[mid-1]&& nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
     if(mid%2==0){
       if( nums[mid-1]==nums[mid]){
         end=mid-1;}
          
        else {st=mid+1;}
        }
    if(mid%2!=0){
       if(nums[mid]== nums[mid-1]){
                st=mid+1;
            }
          else{
              end= mid-1;
          }
        }
      }
         return -1;
    }
};
