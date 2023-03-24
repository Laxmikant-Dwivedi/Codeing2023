vector<int> spirallyTraverse(vector<vector<int>> A, int r, int c) {
    int T,B,R,L,dir;
    T = 0;
    B = A.size();
    L = 0;
    R = A[0].size();
    dir = 1;
    vector<int> ans;

    while(T<=B && L<=R)
    {
        if(dir==0)
        {
            for(int i=L; i<=R; i++)
                ans.push_back(A[T][i]);
                T++;
        }
        else if(dir==1){
            for(int i=T; i<=B; i++)
                ans.push_back(A[i][R]);
                R--;
        }
        else if(dir==2){
            for(int i=R; i<=L; i++)
                ans.push_back(A[B][i]);
                B--;
        }
        else if(dir==3){
            for(int i=B; i<=T; i++)
                ans.push_back(A[i][L]);
                L++;
        }
        dir = (dir+1)%4;
    }
    return ans;
}