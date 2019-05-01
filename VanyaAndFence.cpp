#include<bits/stdc++.h>
int main(){
	int n, h;
	scanf("%d %d", &n, &h);
	int a[n], ans=0;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]>h)
			ans+=2;
		else ++ans;
	}
	printf("%d\n", ans);
	return 0;
}