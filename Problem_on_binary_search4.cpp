/************************ Search in 2D matrix ************************/
/* You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
*/

#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>& a,int target){
	int n=a.size();//no. of rows
	int m=a[0].size();//no. of colomns
	int lo=0,hi=(n*m)-1;
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		int mid_ele=a[mid/m][mid%m];
		
		if(mid_ele==target) return true;
		
		else if(mid_ele>target) hi=mid-1;
		
		else lo=mid+1;
		
		}
    return false;
}
int main(){
vector<vector<int>> matrix= {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
int target = 3;

cout<<search(matrix,target);
	return 0;
}
