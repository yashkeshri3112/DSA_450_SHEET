/* Questions -:COUNT FREQUENT ELEMENTS */
int countOccurences(vector<int>&arr,int k){
    int n=arr.size();
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int threshold=n/k;
    int count=0;
    unordered_map<int,int>::iterator it;
    for(it=freq.begin();it!=freq.end();it++){
        int element=it->first;
        int frequency=it->second;
        if(frequency>threshold){
            count++;
        }
    }
    return count;
}
    
};