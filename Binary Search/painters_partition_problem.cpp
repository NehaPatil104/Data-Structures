bool isPossible(vector<int> &boards, int k, int mid){
    int sum = 0;
    int painterCount = 1;
    
    for(int i = 0; i < boards.size(); i++){
        if(sum + boards[i] <= mid){
            sum += boards[i];
        }
        else{
            painterCount++;
            if(painterCount > k || boards[i] > mid){
                return false;
            }
            sum = boards[i];
        }
        
        if(painterCount > k){
            return false;
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    for(int i = 0; i < boards.size(); i++)
        sum += boards[i];
    
    if(boards.size() < k){
        return -1;
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s)/2;
    
    while(s <= e){
        if(isPossible(boards, k, mid)){
            ans = mid;
            e = mid - 1;
        } 
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}