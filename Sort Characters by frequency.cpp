class Solution {
public:
    static bool comp(pair<char,int>&a,pair<char,int> &b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
            int i;
        for(i=0;i<s.size();i++){
            mp[s[i]]++;
            
        }
       priority_queue<pair<int,int>>pq;
        for(auto k:mp){
            pq.push({k.second,k.first});
        }
        string s2="";
        while(!pq.empty()){
            int x=pq.top().first;
            char y=pq.top().second;
            while(x--)
             s2+=y;
            pq.pop();
        }
    return s2;
    }
};