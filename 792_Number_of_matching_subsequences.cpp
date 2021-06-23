class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<int> v[26];
        for(int i=0;i<s.size();i++){
            v[s[i]-'a'].push_back(i);
        }
        int ans=0;
        for(auto str : words){
            int prev_index=-1, flag=0;
            for(int j=0;j<str.size();j++){
                auto itr = upper_bound(v[str[j]-'a'].begin(), v[str[j]-'a'].end(), prev_index);
                if(itr == v[str[j]-'a'].end()){
                    flag=1;
                    break;
                }else{
                    prev_index=*itr;
                }
            }
            if(flag==0) ans++;
        }
    
        return ans;
    }
};
