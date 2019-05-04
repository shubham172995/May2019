#include<bits/stdc++.h>
int main(){
	long int n;
	scanf("%ld", &n);
	std::vector<long int> a(n);
	for(long int i=0;i<n;i++)
		std::cin>>a[i];
	std::vector<std::vector<long int> >b(100005);
	std::vector<std::pair<long int, long int> > d;
	std::vector<int> c(100005, -1);
	for(int i=0;i<n;i++)
		b[a[i]].push_back(i);
	for(int i=0;i<n;i++){
		bool flag=false;
		if(b[a[i]].size()==0)
			continue;
		else if(c[a[i]]==1)
			continue;
		else if(b[a[i]].size()==1){
			std::pair<long int, long int> temp;
			temp.first=a[i];
			temp.second=0;
			//std::cout<<a[i]<<" 0\n";
			c[a[i]]=1;
			d.push_back(temp);
		}
		else{
			c[a[i]]=1;
			int diff=b[a[i]][1]-b[a[i]][0];
			for(std::vector<long int>::iterator it=b[a[i]].begin()+1; it!=b[a[i]].end(); it++)
				if(*it-*(it-1)!=diff)
					flag=true;
			if(flag==true)
				continue;
			std::pair<long int, long int> temp;
			temp.first=a[i];
			temp.second=diff;
			d.push_back(temp);
			//else std::cout<<a[i]<<" "<<d<<std::endl;
		}
	}
	std::sort(d.begin(), d.end());
	std::cout<<d.size()<<std::endl;
	for(int i=0;i<d.size();i++)
		std::cout<<d[i].first<<" "<<d[i].second<<std::endl;
	return 0;
}