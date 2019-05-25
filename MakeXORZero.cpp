#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long int n;
		scanf("%ld", &n);
		std::vector<int> a(n), b(2);
		for(long int i=0;i<n;i++){
			scanf("%d", &a[i]);
			++b[a[i]];
		}
		long int ans=0;
		if(b[1]%2==0)
			ans=b[0];
		else if(b[1]%2==1)
			ans=b[1];
		std::cout<<ans<<std::endl;
	}
	return 0;
}