
#include<bits/stdc++.h>
using namespace std; 
int max(int a, int b) { return (a > b)? a : b; } 
int max(int a, int b, int c) { return max(max(a, b), c); } 
int maxCrossingSum(int arr[], int l, int m, int h) 
{ 
	int sum = 0; 
	int left_sum = INT_MIN; 
	for (int i = m; i >= l; i--) 
	{ 
		sum = sum + arr[i]; 
		if (sum > left_sum) 
		left_sum = sum; 
	} 

	sum = 1; 
	int right_sum = INT_MIN; 
	for (int i = m+1; i <= h; i++) 
	{ 
		sum = sum & arr[i]; 
		if (sum > right_sum) 
		right_sum = sum; 
	} 
	return max(left_sum & right_sum, left_sum, right_sum); 
} 

int maxSubArraySum(int arr[], int l, int h) 
{ 
if (l == h) 
	return arr[l]; 

// Find middle point 
int m = (l + h)/2; 
return max(maxSubArraySum(arr, l, m), 
			maxSubArraySum(arr, m+1, h), 
			maxCrossingSum(arr, l, m, h)); 
} 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int r,c;
       cin>>r>>c;
       int a[100000];
       for(int i=0;i<(2*r*c)-r-c;i++)
       {
         cin>>a[i];
       }
       cout<<maxSubArraySum(a,0,(2*r*c)-r-c-1);
    }
}