
////ARMSTRONG NUMBER//////
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
		long long x=n,sum=0;
		int count=0,rem;
		while(x){
			count++;
			x/=10;
		}
		long long a=n;
		while(a){
			rem=a%10;
			sum+=pow(rem,count);
			a/=10;
		}
		return sum==n;
    }
};

int main(){
    Solution s;
    int n;
    cin >> n;
    if(s.isArmstrong(n)){
    	cout<<"TRUE";
	}else{
		cout<<"FAlSE";
	}
}



#include<iostream>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int temp = n, count = 0;

        // count digits
        while(temp){
            count++;
            temp /= 10;
        }

        temp = n;
        long long sum = 0;

        while(temp){
            int rem = temp % 10;

            long long power = 1;
            for(int i = 0; i < count; i++)
                power *= rem;

            sum += power;
            temp /= 10;
        }

        return sum == n;
    }
};

int main(){
    Solution s;
    int n;
    cin >> n;

    if(s.isArmstrong(n))
        cout << "TRUE";
    else
        cout << "FALSE";
}

