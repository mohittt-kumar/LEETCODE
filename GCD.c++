////FIND THE GREATEST COMMAN DIVISIOR///// 
///BRUTE FORCE APPROACH/////
//#include<iostream>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//    int GCD(int n1,int n2) {
//        if(n1<0  || n2<0)return 0;
//        int gcd=1;
//        for(int i=1;i<min(n1,n2);i++){
//        	if(n1%i==0 && n2%i==0){
//        		gcd=i;
//			}
//		}return gcd;
//    }
//};
//int main(){
//	Solution s;
//	int n1,n2;
//	cin>>n1>>n2;
//	int res=s.GCD(n1,n2);
//	cout<<res;
//}]]

///////Better approach///
//#include<iostream>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//    int GCD(int n1,int n2) {
//        if(n1<0  || n2<0)return 0;
//        int gcd=1;
//        for(int i=min(n1,n2);i>0;i--){
//        	if(n1%i==0 && n2%i==0){
//        		return i;
//			}
//		}return 1;
//    }
//};
//int main(){
//	Solution s;
//	int n1,n2;
//	cin>>n1>>n2;
//	int res=s.GCD(n1,n2);
//	cout<<res;
//}



/////optimal appraoch////
//#include<iostream>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//    int GCD(int a,int b) {
//        while(a>0 && b>0){
//        	if(a>b){
//        		a=a%b;
//			}else{
//				b=b%a;
//			}
//		}if(a==0)return b;
//		
//		return a;
//    }
//};
//int main(){
//	Solution s;
//	int n1,n2;
//	cin>>n1>>n2;
//	int res=s.GCD(n1,n2);
//	cout<<res;
//}




#include<iostream>
using namespace std;

class Solution{
public:
    int gcd(int n1, int n2){
        while(n2 != 0){
            int rem = n1 % n2;
            n1 = n2;
            n2 = rem;
        }
        return n1;
    }
};

int main(){
    Solution s;
    int n1, n2;
    cin >> n1 >> n2;
    cout << s.gcd(n1, n2);
}
