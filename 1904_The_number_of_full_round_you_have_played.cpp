class Solution {
public:
    
    int numberOfRounds(string startTime, string finishTime) {
        int a = stoi(startTime.substr(0,2));
        int b = stoi(startTime.substr(3,2));
        int c = stoi(finishTime.substr(0,2));
        int d = stoi(finishTime.substr(3,2));
        
        if(b%15!=0){
            b+=(15-b%15);
        }
        
        if(d%15!=0){
            d-=d%15;
        }
        
        if(c<a) c+=24;
        
        int val=0;
        val = (c-a)*4 + (d-b)/15;
        
        if(val<0) val+=96;
        
        return val;
    }
};
