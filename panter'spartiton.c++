class Solution {
public:

    int paint(int A, int B, vector<int>& C) {

        int n = C.size();

        long long start = 0;
        long long end = 0;

        // find max board and total sum
        for(int i = 0; i < n; i++) {

            start = max(start, (long long)C[i]);
            end += C[i];
        }

        start *= B;
        end *= B;

        long long ans = end;

        while(start <= end) {

            long long mid = start + (end - start) / 2;

            long long total_time = 0;
            int count = 1;

            for(int i = 0; i < n; i++) {

                long long board_time = 1LL * C[i] * B;

                if(total_time + board_time > mid) {

                    count++;
                    total_time = board_time;
                }
                else {
                    total_time += board_time;
                }
            }

            if(count <= A) {

                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};
