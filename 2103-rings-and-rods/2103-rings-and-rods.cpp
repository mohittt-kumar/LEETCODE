class Solution {
public:
    int countPoints(string rings) {
        vector<int> color(10, 0);

        for(int i = 0; i < rings.size(); i += 2) {
            int rod = rings[i + 1] - '0';

            if(rings[i] == 'R')
                color[rod] |= 1;
            else if(rings[i] == 'G')
                color[rod] |= 2;
            else
                color[rod] |= 4;
        }

        int ans = 0;

        for(int i = 0; i < 10; i++) {
            if(color[i] == 7)
                ans++;
        }

        return ans;
    }
};