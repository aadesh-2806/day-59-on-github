#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	time_t ct;
	time(&ct);
	cout<<"current_time "<<ctime(&ct)<<endl;
	return 0;	
}	 		
