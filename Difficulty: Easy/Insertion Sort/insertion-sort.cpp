class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=1; i<n; i++){
            int temp = arr[i];
            int j = i-1;
            while(arr[j]>temp && j>=0){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1] = temp;
        }
    }
};