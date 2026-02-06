class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;

        for(int i=0;i<asteroids.size();i++){
            int curr=asteroids[i];
            bool destoryed=false;

            while(!st.empty() && st.top()>0 && curr<0){
                if(abs(st.top())<abs(curr)){
                    st.pop();
                }else if(abs(st.top())==abs(curr)){
                    st.pop();
                    destoryed=true;
                    break;
                }else{
                    destoryed=true;
                    break;
                }
            }
            if(!destoryed){
                st.push(curr);
            }
        }
        vector<int>res(st.size());
        for(int i=st.size()-1;i>=0;i--){
            res[i]=st.top();
            st.pop();
        }
        return res;
    }
};
