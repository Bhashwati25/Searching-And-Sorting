//geeksforgeeks
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int>v;
        int ans;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            v[arr[i]]++;
        }
        for(auto i:v)
        {
        if(i.second>n/2)
        {
            ans=i.first;
            return ans;
            //break;
        }
        
    }
    
        return -1;
    }
};