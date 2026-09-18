class Solution {
public:
    void nextPermutation(vector<int>& A) {
    int pivot = -1;
    int n=A.size();
   //1. Find pivot 
     for (int i=n-2;i>=0;i--){
       if(A[i]<A[i+1]){
             pivot=i;
             break ;
         }
       
     }
     if(pivot==-1){
        
        reverse(A.begin(),A.end());
         return ;
         }
     
   // 2.right most ele 
    
    for(int i=n-1;i>pivot;i--){
        
        if(A[i]>A[pivot]){
            swap(A[i],A[pivot]);
            break ;
        }
    }
    
    // 3. reverse 
      int i=pivot+1,j=n-1;
       while (i<j){
           swap(A[i++], A[j--]);
       }
    
       return ;
   }
};
