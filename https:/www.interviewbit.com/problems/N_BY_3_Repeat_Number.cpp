/******************PROBLEM STATEMENT********************
N/3 Repeat Number
Asked in:  
Google
You’re given a read only array of n integers. Find out if any integer occurs more than n/3 times in the array in linear time and constant additional space.

If so, return the integer. If not, return -1.
If there are multiple solutions, return any one.
Example :
Input : [1 2 3 1 1]
Output : 1 
1 occurs 3 times which is more than 5/3 times. 
*************************************************************************/

/*************************SOLUTION***************************************/
int Solution::repeatedNumber(const vector<int> &A) {
    
    if(A.size()==1){
        return A[0];
    }
    if(A.size()==2){
        return A[0];
    }
    vector<int>*temp=(vector<int>*)&A;
    sort(temp->begin(),temp->end());
    
    int i,j,count=1,k;
    k=floor(A.size()/3);
    for(i=0;i<A.size();i++){
       if(A[i]==A[i+1]){
           count++;
           if(count>k){
               return A[i];
           }
       }
       else{
           count=1;
       }
    }
    return -1;
    
    
}
