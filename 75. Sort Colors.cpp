class public:
    void sortColors(vector<int>& nums) {
        int size=nums.size();
        for(int i=1;i<size; i++){
            for(int j=0;j<size-1;j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
        }    
            
        printf("[");
        for(int i=0;i<size;i++){
            printf("%d",nums[i]);
            if(i!=size-1){
                printf(",");
            }
           
            
        }
        printf("]");
            
        }
    }
    
};