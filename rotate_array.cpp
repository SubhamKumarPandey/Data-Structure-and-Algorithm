using namespace std;
int gcd(int a,int b){
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,d;
	    cin>>n>>d;
	    int A[n];
	    for(int i=0;i<n;i++)
	    cin>>A[i];
	     d=d%n;
	    int g=gcd(n,d);
	    for(int i=0;i<g;i++){
	        int temp=A[i];
	        int j=i;
	        while(1){
	            int k=j+d;
	            if(k>=n)
	            k=k-n;
	            if(k==i)
	            break;
	            A[j]=A[k];
	            j=k;
	        }
	        A[j]=temp;
	    }
	    for(int i=0;i<n;i++){
	        cout<<A[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;}
	 
