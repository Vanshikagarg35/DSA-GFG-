#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        vector<int> ans;
        unordered_map<int, int> freq;
        int i = 0; 
        int j = 0;
        
        while (j < arr.size()) {
            freq[arr[j]]++;
            
            if (j - i + 1 < k) {
                j++;
            } 
            else if (j - i + 1 == k) {
                ans.push_back(freq.size());
                
                freq[arr[i]]--;
                if (freq[arr[i]] == 0) {
                    freq.erase(arr[i]);
                }
                
                i++;
                j++;
            }
        }
        return ans;
    }
};