/* Ques: Emma is playing a new mobile game that starts with
 consecutively numbered clouds. Some of the clouds are thunderheads
 and others are cumulus. She can jump on any cumulus cloud having a
 number that is equal to the number of the current cloud plus 1 or
 2. She must avoid the thunderheads. Determine the minimum number of
 jumps it will take Emma to jump from her starting postion to the
 last cloud. It is always possible to win the game. */

/* logic: 1. check if the cloud at i+2 is 0. 
        2. if yes, take her there.
        3. else take her to the i+1 cloud.
        Note: one of the i+1 or i+2 cloud will always be safe as per ques.
    */

// author: @akshatgarg12


// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c){
    int i=0;
    int ctr=0;
    if(c.size()>3){
        while(i!=(int)c.size()-1){
            if(c[i+2]==0){ctr++; i=i+2;}
            else {
                ctr++; 
                i++;
            }
        }
        return ctr;
    }
    else return 1;
}
