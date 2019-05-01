#include<bits/stdc++.h>
class A0Paper{
    public: 
    std::string canBuild(std::vector<int>);
};
std::string A0Paper::canBuild(std::vector<int> A){
    if(A[0]>=1)
        return "Possible";
    else{
        for(int i=A.size()-1; i>0; i--){
            int temp=A[i]/2;
            A[i-1]+=temp;
        }
        if(A[0]>=1)
            return "Possible";
        else return "Impossible";
    }
}