/******************** Linear Search***********************/
/******** Return the index of the target if present otherwise -1**********/
#include<bits/stdc++.h>
using namespace std;
int Linear_Search(vector<int> &v,int target){
	int n=v.size();
	for(int i=0;i<n;i++){
		if(v[i]==target)
		return i;
	}
	return -1;
}
int main(){
	vector<int> vec={2,5,3,4,7,1,8,10,9};
	int target=4;
	
	cout<<Linear_Search(vec,target);
	/*
	 Time complexity=O(n)
	space complexity=O(1)
	*/
	return 0;
}
