#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

int main() {
    int N;
    cin>>N;
    stack<string> st;
    string s;
    while(N--){
        int n;
        cin>>n;
        if(n==1){
            string str;
            cin>>str;
            st.push(s);
            s+=str;
        }
        else if(n==2){
            int k;
            cin>>k;
            st.push(s);
            s.erase(s.size()-k);
        }
        else if(n==3){
            int k;
            cin>>k;
            cout<<s[k-1]<<endl;
        }
        else{
            s=st.top();
            st.pop();
        }
    }
    
    return 0;
}

