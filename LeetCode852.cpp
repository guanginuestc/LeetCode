class Solution {
public:
int peakIndexInMountainArray(vector<int>& A) {
	if (A.size() == 0) {
		return 0;
	}
	if (A.size() == 1) {
		return A[0];
	}
	int lo = 0, hi = A.size() - 1;
	int mid = (lo + hi) / 2;
	while (lo < hi) {
		if (A[mid] > A[mid + 1]&&A[mid]>A[mid-1]) {
			return mid;
		}
		else if(A[mid]<A[mid-1]){
			hi = mid-1;
		}
		else {
			lo = mid+1;
		}
		mid = (hi + lo) / 2;
	}
	return mid;
}
};
//使用二分查找的变种，找到最大的数的位置