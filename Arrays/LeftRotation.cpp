vector<int> rotLeft(vector<int> a, int d) {
int n=a.size();
d=d%n;
vector<int> newarr;
for(int i=d;i<n;i++){
    newarr.push_back(a[i]);
}
for(int i=0;i<d;i++){
    newarr.push_back(a[i]);
}
return newarr;

}
