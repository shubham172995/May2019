#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n);
	int total=0;int x, y;x=y=0;
	for(int i=0;i<n;i++){
		std::cin>>a[i];
		total+=a[i];
		x=a[i]==100?x+1:x;
		y=a[i]==200?y+1:y;
	}
	if((total/2)%100==50||n==1||(x==0&&y%2!=0)){
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
	return 0;
}