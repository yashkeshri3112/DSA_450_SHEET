/*QUESTIONS */
int trap(vector<int>&height){
    int n=height.size();
    if(n==0)return 0;
    //step-1: left max ka array banao 
    vector<int>leftMax(n);
    leftMax[0]=height[0];
    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],height[i]);

    }
    //step-2: right max array banao
    vector<int>rightMax(n);
    rightMax[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],height[i]);
    }
    //step-3: har builidng ke upar water calculate.
    int trappedWater=0;
    for(int i=0;i<n;i++){
        int waterLevel=min(leftMax[i],rightMax[i]);
        trappedWater=trappedWater+(waterLevel-height[i]);

    }
    return trappedWater;
}