//geeksforgeeks
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        vector<int>vect;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==i+1)
            {
                vect.push_back(i+1);
            }
        }
        return vect;
    }
};
