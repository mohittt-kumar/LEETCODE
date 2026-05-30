
#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
		bool circularpatternmatching(string &s1,string &s2){
			string rev=s1;
			s1+=rev;
			vector<int>lps(s2.size(),0);
			int pre=0,suf=1;
			while(suf<s2.size()){
				if(s2[pre]==s2[suf]){
					lps[suf]=pre+1;
					suf++,pre++;
				}else{
					if(pre==0)suf++;
					else pre=lps[pre-1];
				}
			}
			int first=0,second=0;
			while(second<s2.size()&& first<s1.size()){
				if(s2[second]==s1[first]){
					second++;
					first++;
				}else{
					if(second==0){
						first++;
					}else{
						second=lps[second-1];
					}
				}
			}if(second==s2.size()){
				return true;
			}return false;
		}
};
int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	Solution s;
	bool res=s.circularpatternmatching(s1,s2);
	if(res){
		cout<<"s2 is matching in s1";
	}else{
		cout<<"s2 is not matching in s1";
	}
}
