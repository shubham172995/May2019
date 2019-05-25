#include<bits/stdc++.h>
int main(){
	std::string s, t;
	std::getline(std::cin >> std::ws, s);
	//std::cin.ignore(256, '\n');
	std::getline(std::cin >> std::ws, t);
	//std::cin.ignore(256, '\n');
	std::vector<int> b(26), c(26);
	for(int i=0;i<s.length();i++){
		if(s[i]>='A'&&s[i]<='Z')
			++b[s[i]-'A'];
		else if(s[i]>='a'&&s[i]<='z') ++c[s[i]-'a'];
	}
	/*for(int i=0;i<26;i++)
		std::cout<<i<<" "<<b[i]<<" "<<c[i]<<std::endl;*/
	bool flag=false;
	//std::cout<<t.length()<<" length\n";
	for(int i=0;i<t.length();i++){
		if(t[i]==' ')continue;
		else if(t[i]>='A'&&t[i]<='Z'){
			if(b[t[i]-'A']<=0){
				flag=true;
				break;
			}
			else --b[t[i]-'A'];
		}
		else if(t[i]>='a'&&t[i]<='z'){
			if(c[t[i]-'a']<=0){
				flag=true;
				break;
			}
			else --c[t[i]-'a'];
		}
	}
	if(!flag)
		std::cout<<"YES\n";
	else std::cout<<"NO\n";
	return 0;
}