vector<vector<int>> mergeintervals(vector<int> intervals)
{
    vector<vector<int>> mergeintervals;
    if(intervals.size() == 0 ) return mergeintervals;
    vector<int> tempintervals = interval[0];
    sort(intervals.begin(),intervals.end());
    for(auto it: intervals)
    {
        if(it[0] <= intervals[1])
        {
            intervals[1] = max(it[1],intervals[1]);
        }
        else{
            mergeintervals.push_back(tempintervals);
            tempintervals = it;
        }
    } 
    mergeintervals.push_back(tempintervals);
    return mergeintervals;
}
