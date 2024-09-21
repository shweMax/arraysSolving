//Given an array 'arr' with 'n' elements, the task is to rotate the array to the right by 'k' steps, where 'k' is non-negative.
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
#include<bits/stdc++.h>
using namespace std;
vector<int> rotateArrRightbyKspacesBrute(vector<int> &arr, int k){
  int n= nums.size();
  k = k % n;
  vector<int>temp;
  for(int i=0; i<(n-k); i++){
    temp.push_back(nums[i]);
  }
  for(int i=(n-k); i<n; i++){
    nums[i-(n-k)]=nums[i];
  }
  int j=0;
  for(int i=k; i<n; i++){
    nums[i]=temp[j];
    j++;
  }
}
vector<int> rotateArrRightbyKspacesOptimised(vector<int> &nums, int k){
  int n= nums.size();
  k=k%n;
  reverse(nums.begin(), nums.begin()+(n-k));
  reverse(nums.begin()+(n-k), nums.end());
  reverse(nums.begin(), nums.end()); //optimised by space complexity.
  return nums;
}

int main(){
  vector<int> arr= {1,2,3,4,5,6}; //3 4 5 1 2
  vector<int>ans= rotateArrRightbyKspacesOptimised(arr, 2);
  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
}
