/* Ques: Karl has an array of integers. He wants to reduce the array until
 all remaining elements are equal. Determine the minimum number of
 elements to delete to reach his goal. */

/* logic: find the frequency of the element occuring the most in the array
 and delete all the other elements except that element. */

// author: @akshatgarg12

// Complete the equalizeArray function below.
int equalizeArray(vector<int> arr) {
    int i;
    // frequency array initialised.(given : A[i] <= 100)
    int A[101]={0};
    // populating the array 
    for(i=0;i<(int)arr.size();i++){
        A[arr[i]]++;
    }
    int max=0;
    // find the max_occurence of any element.
    for(i=0;i<101;i++){
        if(A[i]>=max) max= A[i];
    }
    // except the element occuring the most, delete all to get the answer.
    int ans = (int)arr.size()-max;

    return ans;

}