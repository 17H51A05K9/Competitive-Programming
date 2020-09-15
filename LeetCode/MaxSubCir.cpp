class Solution {
public:
    long long kadane(vector<int> a,int n)
{
   long long  sum=INT_MIN,ans=INT_MIN;
    int c=0;
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
    int maxSubarraySumCircular(vector<int>& a) {
        int n=a.size();
      long long wrap=0,ka=kadane(a,n);
        int neg=INT_MIN,c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            neg=max(neg,a[i]);
            c++;
        }
        wrap+=a[i];
        a[i]=-a[i];
    }
        if(c==a.size())
            return neg;
    wrap=wrap+kadane(a,n);
    return max(wrap,ka);
    }
};