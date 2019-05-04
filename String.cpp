#include<bits/stdc++.h>
using namespace std;

int solve(string A) {
    int total=INT_MAX;
    for(int i=0;i<26;i++){
        char ch='a'+i;
        int t=0;
        for(int i=0;i<A.length();i++){
            if(A[i]<ch)
            t+=ch-A[i];
            else t+=A[i]-ch;
            //cout<<ch<<" "<<A[i]<<" "<<t<<endl;
        }
        total=total<t?total:t;
    }
    return total;
}
int main(){
    string s;
    cin>>s;
    int total=solve(s);
    cout<<total<<endl;
    return 0;
}