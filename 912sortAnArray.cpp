class Solution {
public:
    vector<int> merge(vector<int> arr1, vector<int> arr2) {
        vector<int> mergedArray;
        
        int m = arr1.size();
        int n = arr2.size();
        
        int i = 0, j = 0;
        
        while (i<m && j<n) {
            if (arr1[i] < arr2[j]) {
                mergedArray.push_back(arr1[i]);
                i++;
            }
            else {
                mergedArray.push_back(arr2[j]);
                j++;
            }
        }

        while (i < m) {
            mergedArray.push_back(arr1[i]);
            i++;
        }

        while (j < n) {
            mergedArray.push_back(arr2[j]);
            j++;
        }

        return mergedArray;
    }

    vector<int> mergeSort(vector<int> &arr, int low, int high) {
        vector<int> temp;
        if (low > high) {
            return temp;
        }
        if (low == high) {
            temp.push_back(arr[low]);
            return temp;
        }

        int mid = (high + low) / 2;
        vector<int> arr1 = mergeSort(arr, low, mid);
        vector<int> arr2 = mergeSort(arr, mid + 1, high);

        return merge(arr1, arr2);
    }
    vector<int> sortArray(vector<int>& nums) {
       vector<int> sortedArray;
       sortedArray = mergeSort(nums, 0, nums.size() - 1);
       return sortedArray;
    }
};