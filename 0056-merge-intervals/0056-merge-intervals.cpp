class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        vector<int> temp;
        temp = intervals[0];
        for(int i=1;i<intervals.size();i++)
        {
              if(intervals[i][0]<=temp[1])
              {
                temp[1]= max(intervals[i][1],temp[1]);
              }
              else
              {
                ans.push_back(temp);
                temp = intervals[i];
                cout<<temp[0]<<" "<<temp[1]<<endl;
              }
        }
        
            ans.push_back(temp);
        
        return ans;
        
    }
};