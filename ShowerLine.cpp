#include<bits/stdc++.h>
int main(){
	std::vector<std::vector<long int> > g(6);
	for(int i=1;i<=5;i++){
		g[i].resize(6);
		for(int j=1;j<=5;j++)
			scanf("%ld", &g[i][j]);
	}
	long long int res=0;
	for(int i=1;i<=5;i++){
		long long int temp=0;
		for(int j=1;j<=5;j++){
			if(j==i)continue;
			//std::cout<<i<<" "<<j<<" "<<temp<<std::endl;
			for(int k=1;k<=5;k++){
				if(k==i||k==j)continue;
				for(int l=1;l<=5;l++){
					if(l==i||l==j||l==k)
						continue;
					for(int m=1;m<=5;m++){
						if(m==i||m==j||m==k||m==l)continue;
						temp+=g[i][j]+g[j][i]+g[k][l]+g[l][k];
						temp+=g[j][k]+g[k][j]+g[l][m]+g[m][l];
						temp+=g[k][l]+g[l][k];
						temp+=g[l][m]+g[m][l];
						res=res>temp?res:temp;
						//std::cout<<temp<<" "<<i<<" "<<j<<" "<<" "<<k<<" "<<l<<" "<<" "<<m<<" "<<std::endl;
						temp=0;
					}
				}
			}
		}
	}
	std::cout<<res<<std::endl;
	return 0;
}