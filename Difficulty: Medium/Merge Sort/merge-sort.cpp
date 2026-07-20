class Solution {
  public:
    void merge(vector<int>& arr , int mid , int l , int r){
        int i,j,k,B[arr.size()];
        i = l;
        j = mid+1;
        k = l;
        while(i<=mid && j<=r){
            if(arr[i]>arr[j]){
                B[k]=arr[j];
                j++;
                k++;
            }
            else{
                B[k]=arr[i];
                i++;
                k++;
            }
        }
        while(i<=mid){
            B[k] = arr[i];
            i++;
            k++;
        }
        while(j<=r){
            B[k] = arr[j];
            j++;
            k++;
        }
        for(int i=l; i<=r; i++){
            arr[i] = B[i];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l>=r) return;
        
        int mid = l+(r-l)/2;
        mergeSort(arr , l , mid);
        mergeSort(arr, mid+1 , r);
        merge(arr , mid , l , r);
        
    }
};