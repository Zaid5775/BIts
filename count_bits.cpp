vector<int> count(int N)
{
    vector<int> ans;
	for(int i=0; i<=N; i++){
        int current_no  = i;
        int cnt = 0;
        while(current_no != 0){
            if(current_no&1 == 1){
                cnt++;
            }
            
            current_no = current_no >> 1;
        }
        ans.push_back(cnt);
        
    }
    
    return ans;
}