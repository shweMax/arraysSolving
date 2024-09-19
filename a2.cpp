#include<bits/stdc++.h>
using namespace std;
int secondLargestBrute(vector<int>& arr){
  int size = arr.size();
  sort(arr.begin(), arr.end());
  int largest= arr[size-1];
  int sLargest= -1;
  for(int i=size-1; i>=0; i--){
    if(arr[i]!= largest){
      sLargest= arr[i];
      break;
    }
  }
  return sLargest;
}
int secondLargestOptimised(vector<int>& arr){
  int size = arr.size();
  int largest= arr[0];
  int slargest= -1;
  for(int i=0; i<size-1; i++){
    if(arr[i]>largest){
      slargest = largest;
      largest= arr[i];
    }
    else if(arr[i]<largest && arr[i]>slargest){
      slargest= arr[i];
    }
  }
  return slargest;
}

int main(){s
  vector<int>arr= {14, 45, 78, 12, 100};  
  int SLargestEl= secondLargestOptimised(arr);
  cout<<"The answer is: "<<SLargestEl<<endl;
}