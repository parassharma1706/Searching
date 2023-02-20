/*********************************BINARY SEARCH**************************************/
#include<bits/stdc++.h>
using namespace std;

int Binary_search(int *arr,int n,int target){
	int lo=0,hi=n-1;
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		
		if(arr[mid]==target)
		 return mid;
		
		else if(arr[mid]>target)
		 hi=mid-1;
		
		else
		 lo=mid+1;
	}
	return -1;
}

int main(){
	int arr[]={3,5,7,8,10,34,45,56,67,89,100};
	int n=sizeof(arr)/sizeof(arr[2]);
	
	int target=4;
	cout<<Binary_search(arr,n,target);
	/*
	Time complexity=O(log n)
	space complexity=O(1)
	*/
	
	return 0;
}
