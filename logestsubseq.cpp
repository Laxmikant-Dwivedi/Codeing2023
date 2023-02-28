int longestsubsequence(int nums[], int n)
{
    int n = nums.size();
    set<int> s;
    for(int x: nums){
        s.insert(x);
    }
    int ans = 0;
    for(int i=0; i<n; i++){

        int curr_element = nums[i];
        int prev_element = curr_element - 1;
        int cnt = 0;
        if(s.find(curr_element) == s.end()){
            while(s.find(prev_element) != s.end()){
                curr_element ++;
                cnt ++;
            }

        }
    }
}