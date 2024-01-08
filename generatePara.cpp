class Solution {
public:
    void helper(vector<string>& v, int n, int opc, int cc, string s) {
        //base case
        if (opc == n && cc == n) {
            v.push_back(s);
            return;
        }
        if(opc<n){
           helper(v,n,opc+1,cc,s+"(");
        }
        if(opc>cc){
            helper(v,n,opc,cc+1,s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int opc = 0;
        int cc = 0;
        helper(v, n, opc, cc, "");
        return v;
    }
};