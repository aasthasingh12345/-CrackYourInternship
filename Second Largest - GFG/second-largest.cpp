// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int print2largest(int arr[], int n) {
	       int maxt=INT_MIN;
    int ans=maxt;
    for(int i=0;i<n;i++){
        if(arr[i]>=maxt){
            if(arr[i]!=maxt){
            ans=maxt;}
            maxt=max(maxt,arr[i]);
        }
        else{
            ans=max(ans,arr[i]);
        }
    }
    if(ans==INT_MIN)return -1;
    return ans;
}

 
	
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends