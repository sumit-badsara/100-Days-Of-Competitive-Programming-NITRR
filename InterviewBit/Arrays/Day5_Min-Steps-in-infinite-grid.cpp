/*
Question Link : https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
*/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {

    int change, nx, ny, x=0, y=0, steps=0;
    
    for(int i=1;i<A.size();i++)
    {
        nx = A.at(i)-A.at(i-1);
        ny = B.at(i)-B.at(i-1);
        
        change = (abs(nx)>=abs(ny))?abs(ny):abs(nx);
        steps += abs(change);
        
        if(nx>0)
            nx -= change;
        else
            nx += change;
        
        if(ny>0)
            ny -= change;
        else
            ny += change;
        
        steps += abs(nx);
        steps += abs(ny);
    }
    
    return steps;
}
