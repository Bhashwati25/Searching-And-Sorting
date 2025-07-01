//geeksforgeeks
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        
        unordered_map<int, int> v;
        int missing = 0, repeating = 0;
        int n = arr.size();

        // Count frequencies
        for (int i = 0; i < n; i++) {
            v[arr[i]]++;
        }

        // Identify repeating and missing
        //we cannot use push_back because it returns void and for(i:v) as map doesnot store missing elemets
        //so(i.second==0)statement is invalid
        for (int i = 1; i <= n; i++) {
            if (v[i] == 0) {
                missing = i;
            } else if (v[i] > 1) {
                repeating = i;
            }
        }

        return {repeating, missing};
    }
};
