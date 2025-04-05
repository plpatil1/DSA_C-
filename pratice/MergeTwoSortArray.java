import java.util.*;

public class MergeSortedArrays {
    public int[] merge(int[] nums1, int m, int[] nums2, int n) {
        int[] result = new int[m + n];
        int i = 0, j = 0, k = 0;
        while(i < m && j < n) {
            if(nums1[i] < nums2[j]) result[k++] = nums1[i++];
            else result[k++] = nums2[j++];
        }
        while(i < m) result[k++] = nums1[i++];
        while(j < n) result[k++] = nums2[j++];
        return result;
    }
}
