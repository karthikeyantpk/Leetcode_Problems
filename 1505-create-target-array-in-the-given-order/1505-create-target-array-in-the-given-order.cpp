class Solution {
public:

    void insert(int i,vector<int>& n,int v){
        int l = n.size(),m = 0;
        for(int j = i+1;j<l;j++){
            if(n[j] == -1){
                m = j;
                break;
            }
        } 
        for(int j = m;j > i;j--){
            n[j] = n[j-1];
        }
        n[i] = v;

    }

    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int l = nums.size();
        vector<int>r(l,-1);

        for(int i=0;i<l;i++){
            if(r[index[i]] == -1){
                r[index[i]] = nums[i];
            }else{
                insert(index[i],r,nums[i]);
            }
        }
        return r;
    }
};