/****************PROBLEM STATEMENT******************************
Noble Integer
Given an integer array, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p
If such an integer is found return 1 else return -1.
**************************************************************/

/*****************************SOLUTION*********************************/
int Solution::solve(vector<int> &A) {
    int i=0;
    sort(A.begin(),A.end());
    
    for(i=0;i<A.size();i++){
        if(A[i]==A[i+1])continue;
        if(A.size()-1-i==A[i]){
            return 1;
        }
    }
    if(A[A.size()-1]==0)return 1;
    return -1;
}
