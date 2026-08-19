/* Questions 34 */-> leetcode questions 35 ( yeh questions ko ek baar binary search se bhi karna )
//median of two sorted arrays 
vector<itn>ans;
int i=0;
int j=0;
int n=nums1.size();
int m=nums2.size();
while(i<n&&j<m){
    if(nums1[i]<=nums2[j]){
        ans.push_back(nums1[i]);
        i++;

    }
    else{
        //nums1[i]>nums2[j];
        ans.push_back(nums2[j]);
        j++;
    }
}
}
//for remaining elements 
while(i<n){
ans.push_back(nums1[i]);
i++;
}
while(j<m){
    ans.push_back(nums2[j]);
    j++;
}
int size=ans.size();
if(size%2==1){//iska mtlb hai ki arrays me odd elements hai iska mtlb direct median mil jayega 
    return ans[size/2];
    else{
        return ans[size/2-1]+ans[size-2]/2.0;

    }

};