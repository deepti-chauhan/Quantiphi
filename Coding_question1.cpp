vector<vector<int>> func(int n,vector<int> left,vector<int> right)
{
    vector<vector<int>> intervals(n);
    for(int i=0;i<n;i++)
    {
        intervals[i]={left[i],right[i]};
    }
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> output;
    output.push_back(intervals[0]);
    for(int i=1; i<n; i++) {
        
        if(output.back()[1] >= intervals[i][0])
            output.back()[1] = max(output.back()[1] , intervals[i][1]);
        else
            output.push_back(intervals[i]); 
        }
        
    vector<vector<int>> result;
    int prev=0;
    for(int i=0;i<n;i++)
    {
        if(prev!=output[i][0])
        {
            result.push_back({prev,output[i][0]});
        }
        prev=output[i][1];
    }
    if(prev!=1000000000)
        result.push_back({prev,1000000000});
    
    return result;
}


//it is the partially accepted solution, will update soon with complete answer.
