int finddup(vector<int>&nums)
{
    set<int> s;
    for(auto it: nums)
    {
        if(s.count(it) != 0){
            return it;
        }
        s.insert(it);
    }
    return 0;
}