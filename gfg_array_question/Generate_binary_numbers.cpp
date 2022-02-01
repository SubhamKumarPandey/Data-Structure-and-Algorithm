vector<string> generate(int N)
{
    vector<string>v;
	queue<string>s;
	s.push("1");
	for(int i=1;i<=N;i++){
	    string s1=s.front();
	    v.push_back(s.front());
	    s.pop();
	    string s2=s1;
	 s.push(s1.append("0")); 
		s.push(s2.append("1"));
	}
	return v;
	
}
