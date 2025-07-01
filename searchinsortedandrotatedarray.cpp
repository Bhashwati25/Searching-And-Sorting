//geeksforgeeks
#include <iostream>
#include <vector>
using namespace std;
int Search(vector<int> vec, int K) {
    // code here
    
    
    int s = 0, e = vec.size() - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (vec[mid] == K) {
            return mid;
        }

        // Check if left half is sorted
        if (vec[s] <= vec[mid]) {
            // Is K in the left half?
            if (vec[s] <= K && K < vec[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        } 
        // Otherwise, right half must be sorted
        else {
            // Is K in the right half?
            if (vec[mid] < K && K <= vec[e]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
    }

    return -1; // Not found
}