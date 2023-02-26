/********Find Peak element
A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index.
 If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -8. In other words, an element is always
 considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.

Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
*/
#include<bits/stdc++.h>
using namespace std;
int peak_element(int *arr,int n){
	int lo=0,hi=n-1;
	while(lo<=hi){
	int mid=lo+(hi-lo)/2;
	
	if((mid==0)||arr[mid]>arr[mid-1] && (mid==n-1)||arr[mid]>arr[mid+1]) return mid;
	
	else if(arr[mid]<arr[mid+1]) lo=mid+1;
	
	else hi=mid-1;
	}
	return -1;
}
int main(){
	int arr[]={1,2,1,3,4,6,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<peak_element(arr,n);
	return 0;
}

