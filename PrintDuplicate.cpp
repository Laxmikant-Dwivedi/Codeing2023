void printDups(string str){
    int n = str.length();
    map<char,int> count;
    for(int i=0; i<n; i++)
    {
        count[str[i++]];
    }
    for(auto it: count)
    {
        if(it.second > 1)
        cout << it.first << "count=" << it.second << endl;
    }
}