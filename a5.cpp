#include<bits/stdc++.h>
using namespace std;
// Left Rotate an Array by One
vector<int> rotatebyOne(vector<int>& arr){
  int n= arr.size();
  int temp= arr[0];
  for(int i=1; i<n; i++){
    arr[i-1]=arr[i];
  }
  arr[n-1] = temp;
  return arr;
}

int main(){
  vector<int>arr= {1, 7, 4, 10, 55};  
  vector<int> ans= rotatebyOne(arr);
  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
}