/*An array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.
Input: arr = [0,1,0]
Output: 1
Input: arr=[1,2,3,4,6,7,4,3,2,1]
Output:5
*/
#include<bits/stdc++.h>
using namespace std;
int peak_index(int *arr,int n){
	int lo=0,hi=n-1;
	int ans=-1;
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		
		if(arr[mid]<arr[mid+1]){
			ans=mid+1;
			lo=mid+1;
		}
		else{
			hi=mid-1;
		}
	}
	return ans;
}
int main(){
int arr[]={0,1,2,3,4,6,7,8,5,3,2,1};
int n=sizeof(arr)/sizeof(arr[0]);

cout<<peak_index(arr,n);
return 0;
}
