#include<iostream>
using namespace std;
int main()
{
	
	int sugarlevel;
	cout<<"please enter your sugar level";
	cin>>sugarlevel;
	if (sugarlevel>=80 && sugarlevel<=100)
{
	cout<<"your blood sugar level normal fasting";
	
	
}
else if (sugarlevel>=101&& sugarlevel <=125){
	cout<<"your blood sugar level pre-dibetic ";
	
}
else if(sugarlevel>=126)
{
	cout<<"your blood sugar level Dibetic";
}
}
