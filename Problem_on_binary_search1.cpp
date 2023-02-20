/* Find the first occurrence of a given element x, given that the array is sorted.If no occurrcence of x is found then return -1.
input:
arr[]={2,5,5,5,6,6,9,9,9}
x=5
output:
1
*/
#include<bits/stdc++.h>
using namespace std;
int first_occurrence(int *arr,int n,int x){
	
	int lo=0,hi=n-1;
	int ans=-1;
	while(lo<=hi){
	 int mid=lo+(hi-lo)/2;
	 
	 if(arr[mid]==x){
	 	ans=mid;
	 	hi=mid-1;
	 }
	 
	 else if(arr[mid]>x)
	 hi=mid-1;
	 
	 else
	 lo=mid+1;
	}
	
	return ans;
}
int main(){
	int arr[]={2,5,5,5,6,6,9,9,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int x=5;
	
	cout<<first_occurrence(arr,n,x);
	/* Time complexity=O(log n)
	space complexity=O(1)
	*/
	
	return 0;
}
