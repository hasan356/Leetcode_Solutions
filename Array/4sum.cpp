class Solution {
public:
bool common(int a,int b,int c,int d){
    if(a==c || a==d || b==c || b==d)
        return false;
    return true;
}
    vector<vector<int>> fourSum(vector<int>& A, int B) {
        int l=A.size();
        vector<vector<int> >v;
        unordered_map<int,vector<pair<int,int>>>m;
         set<vector<int>> my;
        sort(A.begin(),A.end());
        for(int i=0;i<l-1;i++){
            for(int j=i+1;j<l;j++){
                int s=A[i]+A[j];
                m[s].push_back({i,j});
            }
        }
        for(auto it = m.begin();it!=m.end();it++){
        int x=it->first;
        if(m.find(B-x)!=m.end()){
            for(int i=0;i<m[x].size();i++){
                for(int j=0;j<m[B-x].size();j++){
                    if(common(m[x][i].first,m[x][i].second,m[B-x][j].first,m[B-x][j].second)){
                        vector<int> v1;
                        v1.push_back(A[m[x][i].first]);
                        v1.push_back(A[m[x][i].second]);
                        v1.push_back(A[m[B-x][j].first]);
                        v1.push_back(A[m[B-x][j].second]);
                        sort(v1.begin(),v1.end());
                        my.insert(v1);
                    }
                }
            }
        }
    }
    for(auto it=my.begin();it!=my.end();it++){
        v.push_back(*it);
    }
    return v;
}
};
