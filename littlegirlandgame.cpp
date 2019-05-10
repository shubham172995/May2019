#include<bits/stdc++.h>
int main(){
	std::string s;
	std::cin>>s;
	std::vector<int> a(26), b(2);
	for(int i=0;i<s.length();i++){
		++a[s[i]-'a'];
	}
	for(int i=0;i<26;i++){
		if(a[i]%2==0)
			++b[0];
		else ++b[1];
	}
	if(b[1]==0||(b[1]-1)%2==0)
		printf("First\n");
	else printf("Second\n");
	return 0;
}