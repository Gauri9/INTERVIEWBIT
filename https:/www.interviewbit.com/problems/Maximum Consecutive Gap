/**********************************PROBLEM STATEMENT*********************************
Maximum Consecutive Gap
Asked in:  
Hunan Asset
Given an unsorted array, find the maximum difference between the successive elements in its sorted form.
Try to solve it in linear time/space.
Example :
Input : [1, 10, 5]
Output : 5 
Return 0 if the array contains less than 2 elements.
You may assume that all the elements in the array are non-negative integers and fit in the 32-bit signed integer range.
You may also assume that the difference will not overflow.
*************************************************************************/

/*********************************SOLUTION**********************************************/
int Solution::maximumGap(const vector<int> &A) {
    int diff=0,i=0;
    //sort(A.begin(),A.end());
    vector<int>*temp=(vector<int>*)&A;
    sort(temp->begin(),temp->end());

    
    for(i=0;i<A.size()-1;i++){
        if(A[i+1]-A[i]>diff){
            diff=A[i+1]-A[i];
        }
    }
    return diff;
}
