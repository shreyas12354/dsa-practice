class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        map<int,int>nge;
        stack<int>st;
        for(int i=m-1;i>=0;i--){
            if(st.empty()){
                nge[nums2[i]] = -1;
            }
            else{
                while(!st.empty()){
                    if(st.top() > nums2[i]){
                        nge[nums2[i]] = st.top();
                        break;
                    }
                    st.pop();
                }
                if(st.empty()) nge[nums2[i]] = -1;
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<n;i++){
            nums1[i] = nge[nums1[i]];
        }
        return nums1;
    }
};