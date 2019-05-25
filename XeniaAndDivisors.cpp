#include<bits/stdc++.h>
int main(){
	long int n;
	scanf("%ld", &n);
	std::vector<int> a(n), b(8), c(8);
	for(long int i=0;i<n;i++){
		scanf("%d", &a[i]);
		++b[a[i]];
	}
	c=b;
	if(b[5]!=0||b[7]!=0){
		printf("-1\n");
		return 0;
	}
	while(b[1]){
		if(b[2]&&b[4]){
			//printf("1 2 4\n");
			--b[1];--b[2];--b[4];
		}
		else if(b[2]&&b[6]){
			//printf("1 2 6\n");
			--b[1];--b[2];--b[6];
		}
		else if(b[3]&&b[6]){
			//printf("1 3 6\n");
			--b[1];--b[3];--b[6];
		}
		else break;
	}
	if(b[1]||b[2]||b[4]||b[3]||b[6]){
		printf("-1\n");
		return 0;
	}
	b=c;
	while(b[1]){
		if(b[2]&&b[4]){
			printf("1 2 4\n");
			--b[1];--b[2];--b[4];
			continue;
		}
		if(b[2]&&b[6]){
			printf("1 2 6\n");
			--b[1];--b[2];--b[6];
			continue;
		}
		if(b[3]&&b[6]){
			printf("1 3 6\n");
			--b[1];--b[3];--b[6];
			continue;
		}
	}
	return 0;
}