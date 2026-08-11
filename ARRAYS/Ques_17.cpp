/* count inversions */
class Solution {
  public:
    long long mergeAndCount(vector<int> &arr, int left, int mid, int right) {
        long long count = 0;
        vector<int> temp;
        int i = left;
        int j = mid + 1;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                j++;
                count += (mid - i + 1);
            }
        }

        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
        }

        while (j <= right) {
            temp.push_back(arr[j]);
            j++;
        }

        for (int k = left; k <= right; k++) {
            arr[k] = temp[k - left];
        }

        return count;
    }

    long long mergeSortAndCount(vector<int> &arr, int left, int right) {
        long long count = 0;
        if (left < right) {
            int mid = (left + right) / 2;
            count += mergeSortAndCount(arr, left, mid);
            count += mergeSortAndCount(arr, mid + 1, right);
            count += mergeAndCount(arr, left, mid, right);
        }
        return count;
    }

    int inversionCount(vector<int> &arr) {
        return (int)mergeSortAndCount(arr, 0, arr.size() - 1);
    }
};
