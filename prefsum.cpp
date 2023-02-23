bool subArrayExists(int arr[], int n){
    unordered_set<int> s;
    int prefixsum = 0;
    for(int i=0; i<n; i++){
        
        arr[i] += prefixsum;
        if(arr[i] == 0)
            return 1;
        if(s.find(prefixsum) != s.end())
            return 1;
        s.insert(prefixsum);
    }
    return 0;
}