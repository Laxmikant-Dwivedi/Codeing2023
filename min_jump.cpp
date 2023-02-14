int minjumps(int arr[], int n )
{
    if(n==0) return 1;
    if(arr[0] == 0) return 0;

    int range = arr[0];
    int jump = 1;
    int step = arr[0];

    for(int i=1; i<n; i++)
    {
        if(i == n-1) return jump;
            range = max(range,arr[i] + i);
            step--;
            if(step == 0){
                jump++;
                if(range<=i)
                return -1;
                step = range - i;
            }
    }
    return -1;
        }