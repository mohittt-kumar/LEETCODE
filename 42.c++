class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0)return 0;
        int left=0,right=n-1;
        int leftmax=0;
        int water=0;
        int rightmax=0;
        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=leftmax){
                    leftmax=height[left];
                }else{
                    water +=leftmax-height[left];
                }left++;
            }
            else{
                if(height[right]>=rightmax){
                    rightmax=height[right];
                }else{
                    water+=rightmax-height[right];
                }right--;
            }
        }return water;
    }
};




class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax(n);
        vector<int>rightmax(n);

        leftmax[0]=0;
        rightmax[n-1]=0;
        int water=0;
        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],height[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i+1]);
        }
        int maxlength=0;
        for(int i=0;i<n;i++){
            maxlength=min(leftmax[i],rightmax[i]);
            if(maxlength-height[i]>0){
                water+=maxlength-height[i];
            }else{
                water+=0;
            }
        }return water;
    }
};








// optimize
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftmax=0,rightmax=0,water=0;
        int maxheight=height[0],index=0;
        for(int i=0;i<n;i++){
            if(maxheight<height[i]){
                maxheight=height[i];
                index=i;
            }
        }

        ///left part/
        for(int i=0;i<index;i++){
            if(leftmax>height[i]){
                water+=leftmax-height[i];
            }else{
                leftmax=height[i];
            }
        }

        ///right part//
        for(int i=n-1;i>=index;i--){
            if(rightmax>height[i]){
                water+=rightmax-height[i];
            }else{
                rightmax=height[i];
            }
        }return water;
    }
};
