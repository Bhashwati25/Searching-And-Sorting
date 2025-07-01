
//geeksforgeeks
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        // code here
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x){
            return i;
            break;
            }
        }
        return -1;
    }
};