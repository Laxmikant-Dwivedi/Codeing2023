long long pickGifts(vector<int> gifts,int k)
{
    priority_queue<int> pq(gifts.begin().gift.end());   // priority queue q ki isme top per largets element rahata hai
    while(k--)
    {
        pq.push(sqrt(pq.top));       // 100 ka sqrt nikal kr push kiye and 100 ko pop kr diye
        pq.pop();
    }
    long long ans = 0;
    while(pq.empty())
    {
        ans+=pq.top();        
        pq.pop();
    }
    return ans;
}
