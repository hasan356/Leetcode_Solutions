class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > v(n,vector<int>(n,0));
        int c = 0,r= 0,num=1,m=n;
        while(c<m && r<n){
            for(int i = c;i<m;i++){
                v[r][i] = num;
                num++;
            }
            r++;
            for(int i = r;i<n;i++){
                v[i][m-1] = num;
                num++;
            }
            m--;
            if(c<m){
                for(int i=m-1;i>=c;i--){
                    v[n-1][i] = num;
                    num++;
                }
                n--;
            }
            if(r<n){
                for(int i = n-1;i>=r;i--){
                    v[i][c] = num;
                    num++;
                }
                c++;
            }
        }
        return v;
    }
};
