vector<int> Solution::solve(vector<int> &A, int B) {
    vector<long int> c(100005), d(100005);int max=0;long int total=0;
    vector<int> ans;
    for(int i=0;i<A.size();i++){
        if(c[A[i]]==0)
            c[A[i]]=i;
        ++d[A[i]];
        total+=A[i];
        max=max>A[i]?max:A[i];
    }
    for(int i=0;i<B;i++){
        if(total==0)
            break;
        ans.push_back(c[max]);
        d[max]--;
        d[max-1]++;
        --total;
        if(d[max]==0){
            if(A[max]<A[max-1])
                A[max-1]=A[max];
            max=max-1;
        }
        else{
            for(int i=A[max]; i<A.size(); i++){
                if(A[i]==max){
                    A[max]=i;
                    break;
                }
            }
        }
    }
    return ans;
}
