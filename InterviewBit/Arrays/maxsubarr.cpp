int Solution::maxSubArray(const vector<int> &a) {
    int n=a.size();
    long long  sum=INT_MIN,ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(sum<0)
        {
        sum=0;
        }
        sum+=a[i];
        
        ans=max(ans,sum);
    }
    return ans;
}
