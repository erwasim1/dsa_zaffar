/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
/*
    Time Complexity: O(N * log(N))
    Space Complexity: O(1)

    Where N is the number of intervals.
*/
#include<algorithm>
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>>mergeinterval;
    if(intervals.size()==0){
        return mergeinterval;
    }
    sort(intervals.begin(),intervals.end());
    vector<int>tempinterval=intervals[0];
    for(auto it:intervals){
        if(it[0]<=tempinterval[1]){
            tempinterval[1]=max(it[1],tempinterval[1]);
            
        }else{
            mergeinterval.push_back(tempinterval);
            tempinterval=it;
        }
    }
     mergeinterval.push_back(tempinterval);
    return mergeinterval;
    
}
