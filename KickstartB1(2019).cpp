#include<bits/stdc++.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int j=1;j<=t;j++){
		long int n, q;
		std::cin>>n>>q;
		std::string s;
		std::cin>>s;
		long int ans=0;
		std::vector<std::vector<int> > a(n);
		for(int i=0;i<n;i++){
			a[i].resize(26);
			for(int j=0;j<26;j++){
				if(i==0)
					a[i][j]=(j==(s[i]-'A'))?1:0;
				else a[i][j]=a[i-1][j]+(j==(s[i]-'A')?1:0);
			}
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<26;j++)
				std::cout<<a[i][j]<<" ";
			std::cout<<std::endl;
		}*/
		for(long int i=0;i<q;i++){
			long int l, r;
			std::cin>>l>>r;
			long int odd;
			odd=0;
			for(int i=0;i<26;i++)
				if(l>=2&&(a[r-1][i]-a[l-2][i])%2!=0){
					++odd;
				}
				else if(l<2&&(a[r-1][i]-0)%2!=0){
					++odd;
				}
			if(odd>1&&l!=r)continue;
			else{
				++ans;
			}
		}
		std::cout<<"Case #"<<j<<": "<<ans<<std::endl;
	}
	return 0;
}