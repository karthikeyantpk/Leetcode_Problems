class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> s;
        for(int i=0;i<heights.size();i++){
            int mx = -1 , mi = -1;
            for(int j=0;j<heights.size();j++){
                if(mx < heights[j]){
                    mx = heights[j];
                    mi = j;
                }
            }
            s.push_back(names[mi]);
            heights[mi] = -1;
        }
        return s;
    }
};