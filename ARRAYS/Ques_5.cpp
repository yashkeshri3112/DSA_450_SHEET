void rearrange(int arr[],int n){
    int left=0,right=n-1;
    while(left<=right){
        if(arr[left]<0&&arr[right]<0){
            left++;
        }
        else if(arr[left]>0&&arr[right]<0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else if(arr[left]>0&&arr[right]>0){
            right--;
        }
        else{
            left++;
            right--;
        }
    }
    }