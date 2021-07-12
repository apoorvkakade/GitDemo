#include<iostream>
using namespace std;
template <class T>
T sub(T a, T b)
{
return a-b;
}
T add(T a, T b)
{
return a+b;
}
int main()
{
cout<<"Hello world";
cout<<"change made in remote server";
int a=4,b=6;
cout<<"\n"<<add(a,b);
return 0;
}

