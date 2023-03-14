
#include <iostream>
using namespace std;

int main() {
int i, n, k, w;
long long sum=0;

cin>> k>>n>>w;
for(i=1; i<=w; i++){
sum = sum+(i*k);
}
if(sum<= n){
cout <<0;
}
else
   cout << sum - n;

return 0;
}



