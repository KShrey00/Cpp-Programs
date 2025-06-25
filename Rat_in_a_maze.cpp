#include<iostream>
using namespace std;
#include<string>
#include<vector>

void helper(vector<vector<int>> &mat, int r, int c, vector<string> &ans, string path, vector<vector<bool>> &vis){
    int n = mat.size();
    if (r<0 || c<0 || r>=n || c>=n || mat[r][c] == 0 || vis[r][c] == true){
        return;
    }
    if( r==n-1 && c==n-1){
        ans.push_back(path);
        return;
    }

    vis[r][c] = true;

    helper(mat, r-1, c, ans, path+"U", vis );//up
    helper(mat, r+1, c, ans,path+"D", vis );//down
    helper(mat, r, c-1, ans, path+"L",vis);//left
    helper(mat, r, c+1, ans, path+"R",vis);//right

    vis[r][c] = false;

}

vector<string> findPath(vector<vector<int>> &mat){
    int n = mat.size();
    vector<string> ans;
    string path = "";
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    helper(mat, 0, 0, ans, path, vis);
}

int main(){
    vector<vector<int>> mat = {{1,0,0,0}, {1,1,0,1}, {1,1,0,0}, {0,1,1,1}};
    vector<string> ans = findPath(mat);
    for (string path : ans){
        cout<<path<<endl;
    }
    return 0;
}