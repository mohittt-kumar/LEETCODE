class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest=INT_MIN;
        int secondlargest=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            if(largest<arr[i]){
                secondlargest=largest;
                largest=arr[i];
            }
             else if(arr[i]>secondlargest && arr[i]!=largest){
                    secondlargest=arr[i];
                }
        }return (secondlargest==INT_MIN)?-1:secondlargest;
    }
};
