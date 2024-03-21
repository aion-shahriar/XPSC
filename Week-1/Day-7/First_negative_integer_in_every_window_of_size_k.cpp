vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {                                        
        vector<long long>ans;
        int i=0, j=0;
        queue<long long>q;
        while(j<N) {
            if(A[j]<0) q.push(A[j]);
            if(j<K-1) {
                //window hit kore nai
                j++;
            }
            else {
                //window hit korse
                if(q.empty()) ans.push_back(0);
                else ans.push_back(q.front());
                if(A[i]<0) q.pop(); 
                i++;
                j++;
            }
        }
        return ans;
                                                
 }
