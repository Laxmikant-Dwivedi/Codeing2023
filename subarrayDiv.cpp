int subarrayDivbyk(vector<int> &nums, int k)
{
    int n = nums.size();
    int result = 0;
    int sum =0 ;
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        sum += nums[i];
        int rem = sum%k;

        if(rem < 0){
            rem+=k;
        }if(mp.find(rem-k) != mp.end()){
            result += mp[rem];
        }
        mp[rem]++;
    }
    return result;
}