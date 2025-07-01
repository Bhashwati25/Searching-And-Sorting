//geeksforgeeks
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> find(vector<int>& arr, int x) {
        int first = -1, last = -1;
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] == x) {
                if (first == -1) first = i;
                last = i;
            }
        }
        return {first, last};
    }
};

int main() {
    int n, x;
    cin >> n; // number of elements
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x; // element to find

    Solution obj;
    vector<int> result = obj.find(arr, x);

    if (result[0] == -1) {
        cout << "Element not found.\n";
    } else {
        cout << "First occurrence: " << result[0] << "\n";
        cout << "Last occurrence: " << result[1] << "\n";
    }

    return 0;
}