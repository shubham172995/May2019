#include<bits/stdc++.h>
int main(){
	long long int t, sx, sy, ex, ey;
	std::cin>>t>>sx>>sy>>ex>>ey;
	std::string s;;int i=0, x=0, y=0;
	std::cin>>s;
	if(sx==ex&&sy==ey){
		printf("0\n");
		return 0;
	}
	if(sx<=ex){
		x=ex-sx;
		if(sy<=ey){
			y=ey-sy;
			for(i=0;i<t;i++){
				//std::cout<<"Hello "<<y<<" "<<i<<std::endl;
				if(y==0&&x==0)
					break;
				else if(s[i]=='E'&&x!=0){
					x--;
				}
				else if(s[i]=='N'&&y!=0){
					y--;

				}
			}
		}
		else if(sy>ey){
			y=sy-ey;
			for(i=0;i<t;i++){
				if(y==0&&x==0)
					break;
				else if(s[i]=='E'&&x!=0)
					x--;
				else if(s[i]=='S'&&y!=0)
					y--;
			}
		}
	}
	else if(sx>ex){
		x=sx-ex;
		if(sy<=ey){
			y=ey-sy;
			for(i=0;i<t;i++){
				if(y==0&&x==0)
					break;
				else if(s[i]=='W'&&x!=0)
					x--;
				else if(s[i]=='N'&&y!=0)
					y--;
			}
		}
		else if(sy>ey){
			y=sy-ey;
			for(i=0;i<t;i++){
				if(y==0&&x==0)
					break;
				else if(s[i]=='W'&&x!=0)
					x--;
				else if(s[i]=='S'&&y!=0)
					y--;
			}
		}
	}
	if(x==0&&y==0)
		std::cout<<i<<std::endl;
	else std::cout<<-1<<std::endl;
	return 0;
}