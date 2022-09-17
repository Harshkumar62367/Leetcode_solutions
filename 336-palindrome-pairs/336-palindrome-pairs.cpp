class Solution {
public:
    bool pal(string &s,int i,int j){
    while(i<j){
        if(s[i++]!=s[j--]) return 0;
    }
    return 1;
}
vector<vector<int>> palindromePairs(vector<string>& a) {
    vector<vector<int>> ans;
    unordered_map<string,int> mp,m;
    int n=a.size();
    for(int i=0;i<a.size();i++){
        reverse(a[i].begin(),a[i].end());
        m[a[i]]=i;
        reverse(a[i].begin(),a[i].end());
        mp[a[i]]=i;
    }
    if(mp.find("")!=mp.end()){
        int bi=mp[""];
        for(int i=0;i<n;i++){
            if(i!=bi && pal(a[i],0,a[i].size()-1)){
                ans.push_back({i,bi});
                ans.push_back({bi,i});
            }
        }
    }
    for(int i=0;i<n;i++){
        string t=a[i];
        reverse(t.begin(),t.end());
        if(mp.find(t)!=mp.end() && mp[t]!=i){
            ans.push_back({i,mp[t]});
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]=="") continue;
        string t="";
        for(int j=0;j<a[i].size()-1;j++){
            t+=a[i][j];
            if(m.find(t) != m.end() && m[t] != i && pal(a[i], j + 1 , a[i].size() - 1)){
                ans.push_back({i,m[t]});
            }
        }
        t="";
        for(int j=a[i].size()-1;j>0;j--){
            t+=a[i][j];
            if(mp.find(t)!=mp.end() && mp[t] != i && pal(a[i],0,j-1)){
                ans.push_back({mp[t],i});
            }
        }
    }
    return ans;
}

};