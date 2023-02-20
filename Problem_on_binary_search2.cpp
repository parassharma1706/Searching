/**********************Problem solving using binary search*************************/
/*Find the square root of the given non-negative value x.Round it off nearest floor
integer value.
input:
x=40:
output:6
*/
#include<bits/stdc++.h>
using namespace std;
int square_root(int x){
	
	int lo=1,hi=x;
	int ans=-1;

while(lo<=hi){
	int mid=lo+(hi-lo)/2;
	
	if(mid*mid<=x){
		ans=mid;
		lo=mid+1;
	}
	
	else 
	hi=mid-1;
	
}
return ans;
}
int main(){
	int x=40;
	
	int result=square_root(x);
	cout<<result;
	/*
	Time complexity=O(log n)
	space complexity=O(1)
	*/
	return 0;
}
