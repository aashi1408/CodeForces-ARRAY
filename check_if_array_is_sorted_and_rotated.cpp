class Solution {
public:
    bool check(vector<int>& nums) {
        int pt_of_decre = -1;
        //but agr pt_of_decre aaye hi naa means array already sorted and was rotated k*n times
        for(int i=1; i<nums.size() ; i++)
        {
            if(nums[i - 1] > nums[i])
            {
                pt_of_decre = i ;
            }
        }
        if(pt_of_decre == -1) return true;//as when we'll try to copy further there exists no -1 index

        vector<int> v(nums.size()) ;
        int k = pt_of_decre ;
        int j = 0;
        while(k != nums.size())//copy from pt of decrease to last ele
        {
            v[j++] = nums[k++] ;
        } 
        int i = 0 ;
        while(j != nums.size())//copy from nums[0] till before pt_of_decre
        {
            v[j++] = nums[i++];
        }
        //checking if the array sorted or not
        bool sorted = true;
        for(int m=1; m<nums.size() ; m++)
        {
            if(v[m - 1] > v[m]) sorted = false ;
        }

        // sorted ? return true : return false ;  <---wrong syntax
        return sorted ;
        
    }
};
