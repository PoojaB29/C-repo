class Solution {
public:
    static bool cmp(vector <int>& a, vector <int>& b){
        return a[1] < b[1];
    } 
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), cmp);
        int n = points.size();
        if(!n) return 0;
        int currEnd = points[0][1];
        int cnt = 1;
        for (int i=0; i < n; i++){
            if (currEnd < points[i][0]){
                cnt++;
                currEnd = points[i][1];
            }
        }
        return cnt;
    }
};
 
int main(){
    vector<vector<int>> v ={{10,16},{2,8},{1,6},{7,12}};
    Solution ob;
    cout << (ob.findMinArrowShots(v));
    return 0;
}