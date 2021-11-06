vector<int> reverseArray(vector<int> a) {
  int n=a.size();
  vector<int> rev;
  for(int i=n-1;i>=0;i--){
      rev.push_back(a[i]);
  }
  return rev;
}
