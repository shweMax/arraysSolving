#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeroesBrute(vector<int>&arr){
  vector<int>temp;
  for(int i=0; i<arr.size(); i++){
    if(arr[i]!=0){
      temp.push_back(arr[i]);
    }
  }
  while(temp.size()<arr.size()){
    temp.push_back(0);
  }
  return temp;
}
vector<int> moveZeroesOptimised(vector<int>&arr){
  int n= arr.size();
  int j=-1;
  for(int i=0; i<n; i++){
    if(arr[i]==0){
      j=i;
      break;
    }
  }
  if(j==-1) return arr;
  for(int i=j+1; i<n; i++){
    if(arr[i]!=0){
      swap(arr[j], arr[i]);
      j++;
    }
  }
  return arr;
}
int main(){
  vector<int>arr= {0,1,2,0,3};
  vector<int>ans= moveZeroesOptimised(arr);
  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
}