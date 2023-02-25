/************************ Peak Index in a Mountain Array ****************************/
#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
         int n=arr.size();
        int lo=0,hi=n-1;
        int ans=-1;
        
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            
           if(arr[mid]<arr[mid+1]){
               ans=mid+1;
               lo=mid+1;
           }
            
            else hi=mid-1;
        }
        return ans;
    }
    int main(){
    	vector<int> arr={1,2,3,4,5,6,4,3,2,1};
    	cout<<peakIndexInMountainArray(arr);
    	
    	return 0;
	}
