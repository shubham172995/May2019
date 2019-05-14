#include<bits/stdc++.h>
int main(){
	long int n, k;
	std::cin>>n>>k;
	std::vector<long int> a(n);
	for(int i=0;i<n;i++)
		std::cin>>a[i];
	bool flag=false;
	for(int i=k;i<n;i++)
		if(a[i]!=a[k-1]){
			flag=true;
			break;
		}
	if(flag){
		std::cout<<"-1\n";
		return 0;
	}
	long int ans=0;
	for(int i=0;i<k;i++)
		if(a[i]!=a[k-1])
			ans=i+1;
	if(ans>k){
		std::cout<<"-1\n";
		return 0;
	}
	std::cout<<ans<<std::endl;
	return 0;
}