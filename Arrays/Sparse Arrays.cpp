vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
vector<int> final;
 int i,j;
int count;
for(i=0;i<queries.size();i++){
    count=0;
    for( j=0;j<strings.size();j++){
        if(queries[i]==strings[j]){
            count++;
        
            
        }
    }
        final.push_back(count);
        
    
}
return final;
}
