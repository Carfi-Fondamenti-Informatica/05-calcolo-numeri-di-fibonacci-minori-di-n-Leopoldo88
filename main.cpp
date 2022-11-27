#include <iostream>
using namespace std;

int main() {
int n=0;
int a=0;
int b=1;
int temp=0;
cin>>n;
while(n>=b)
{
cout<<b<<endl;
temp=b;
b=b+a;
a=temp;

}
   return 0;
}
