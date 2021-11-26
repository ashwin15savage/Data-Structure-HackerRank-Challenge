int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
stack<int> s1,s2,s3;
int s1h=0;
int s2h=0;
int s3h=0;
for(int i=h1.size()-1;i>=0;i--){
    s1h+=h1[i];
    s1.push(s1h);
}
for(int i=h2.size()-1;i>=0;i--){
        s2h+=h2[i];
            s2.push(s2h);
            }
for(int i=h3.size()-1;i>=0;i--){
s3h+=h3[i];
s3.push(s3h);
            }
            
    while(1){
        if(s1.empty()||s2.empty()||s3.empty()) return 0;
        
        s1h=s1.top();
        s2h=s2.top();
        s3h=s3.top();
        if(s1h==s2h && s2h==s3h)
        return s1h;
        
        if(s1h>=s2h && s1h>=s3h) s1.pop();
        
        else if(s2h>=s1h && s2h>=s3h) s2.pop();
        
        else s3.pop();
    }
    
                        
            


}
