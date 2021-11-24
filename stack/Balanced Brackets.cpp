string isBalanced(string s) {
stack<char> brackets;
for(char &c: s){
    if(c=='{' || c=='[' || c=='(') brackets.push(c);
    else{
        if(brackets.empty() || abs(brackets.top()-c)>2) return "NO";
        
        else brackets.pop();
    }
    
}
  if(brackets.empty()) return "YES";
else return "NO";
}
