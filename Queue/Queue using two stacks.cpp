#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

void shiftelements(stack<int> &st1,stack<int> &st2){
    while(!st1.empty()){
    st2.push(st1.top());
    st1.pop();
}
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int query,choice,element;
      stack<int> st1,st2;
      cin>>query;
      while(query--){
          cin>>choice;
          if(choice==1) {
              cin>>element;
              st1.push(element);
          }
          
          if(choice==2){
              if(st2.empty()){
              shiftelements(st1,st2);
             
          }
          st2.pop();
          }
          
          if(choice==3){
              if(st2.empty()){
              shiftelements(st1,st2);
              }
              cout<<st2.top()<<endl;
          
      }
      }
    return 0;
}
