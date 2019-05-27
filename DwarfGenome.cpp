#include<bits/stdc++.h>
int main(){
	std::string a, b;
	std::cin>>a>>b;
	if(a.length()!=b.length()){
		std::cout<<"NO\n";
		return 0;
	}
	long int temp=0, x=0, y=0;
	for(long int i=0;i<a.length();i++){
		if(a[i]!=b[i])
			++temp;
		x+=a[i]-'a';
		y+=b[i]-'a';
	}
	if(temp==2&&x==y)
		std::cout<<"YES\n";
	else std::cout<<"NO\n";
	return 0;
}