vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
                                                queue<int> check;
                                                 vector<long long> ans;
                                                 for(int i=0;i<K;i++){
                                                     if(A[i]<0){
                                                         check.push(A[i]);
                                                     }
                                                 }
                                                 for(int i=0;i+K<=N;i++){
                                                     if(check.empty()){
                                                         ans.push_back(0);
                                                     }
                                                     else{
                                                         ans.push_back(check.front());
                                                     }
                                                     if(A[i]==check.front()){
                                                         check.pop();
                                                     }
                                                     if(i+K<N && A[i+K]<0){
                                                         check.push(A[i+K]);
                                                     }
                                                 }
                                                 return ans;
                                                
                                                 
 }
