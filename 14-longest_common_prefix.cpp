class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref = "";
        if (strs.size() == 0) return "";
        string ans="";
        //sort string in the vector
        sort(strs.begin(), strs.end());

        int n=strs.size();
        string awal=strs[0], akhir=strs[n-1];

        for (int i =0; i < min(awal.size(), akhir.size()); i++){
            if(awal[i] != akhir[i]){
                return ans;
            }
            ans=ans+awal[i];
        }
        return ans;
    }
};