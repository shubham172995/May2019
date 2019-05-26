#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		long int n, r, c, x, y;
		std::cin>>n>>r>>c>>x>>y;
		std::vector<std::vector<int> > table(r+1);
		for(int j=1;j<=r;j++)
			table[j].resize(c+1);
		table[x][y]=1;
		std::string s;
		std::cin>>s;
		long int a, b;a=x;b=y;
		for(long int j=0;j<n;j++){
			if(s[j]=='W'&&table[a][b-1]==0){
				table[a][b-1]=1;
				b=b-1;
			}
			else if(s[j]=='W'&&table[a][b-1]==1){
				while(table[a][b-1]==1)
					--b;
				table[a][b-1]=1;
				--b;
			}
			else if(s[j]=='S'&&table[a+1][b]==0){
				table[a+1][b]=1;
				++a;
			}
			else if(s[j]=='S'&&table[a+1][b]==1){
				while(table[a+1][b]==1)
					++a;
				table[a+1][b]=1;
				++a;
			}
			else if(s[j]=='N'&&table[a-1][b]==0){
				table[a-1][b]=1;
				a=a-1;
			}
			else if(s[j]=='N'&&table[a-1][b]==1){
				while(table[a-1][b]==1)
					--a;
				table[a-1][b]=1;
				--a;
			}
			else if(s[j]=='E'&&table[a][b+1]==0){
				table[a][b+1]=1;
				b=b+1;
			}
			else if(s[j]=='E'&&table[a][b+1]==1){
				while(table[a][b+1]==1)
					++b;
				table[a][b+1]=1;
				++b;
			}
		}
		std::cout<<"Case #"<<i<<": "<<a<<" "<<b<<std::endl;
	}
	return 0;
}