class Solution {
public:
    int tointeger(char c){
        switch(c){
            case '1' : return 1;
                break;
            case '2' : return 2;
                break;
            case '3' : return 3;
                break;
            case '4' : return 4;
                break;
            case '5' : return 5;
                break;
            case '6' : return 6;
                break;
            case '7' : return 7;
                break;
            case '8' : return 8;
                break;
            case '9' : return 9;
                break;
            }
        return 0;
    }
    string largestOddNumber(string num) {
        /*int n = num.size();
        string s = num[n-1];
        stringstream st(s);
        int x=0;
        st>>x;
        if(x%2==1) return num;
        else{
            int l=0, r=0;*/
            string s = num;
            //stringstream ss(num);
            int n = num.size();
            //ss >> nums;
            string count="",r;
        int i=n-1;
            while(i>=0){
                //stringstream ss(s[i]);
                int nums = tointeger(s[i]);
                //  ss >> nums;
                if(nums%2==1){
                    count = num.substr(0,i+1);
                    break;
                }
                i--;
            }
        
        
        return count;
    }
};
