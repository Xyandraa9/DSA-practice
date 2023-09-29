int Solution::solve(vector<int> &A, int B) {
    int xr = 0;
    int count = 0;
    map<int, int> mpp;
    mpp[xr]++;
    int n = A.size();
    
    for(int i = 0; i < n; i++){
        xr = xr ^ A[i];
        int x = xr ^ B;
        count += mpp[x];
        mpp[x]++;
    }
    return count;
}
