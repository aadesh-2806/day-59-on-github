#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream file("helldo.txt");//scan from  file //each word unique
	string input;
	while(getline(file,input))
	{
		cout<<input<<endl;
	}
	
	/*
	string input;
	while(file >>input)		//place vector
	{
		cout<<input<<endl;
	}
	*/
	
	/*
	char a[100];
	file.getline(a,100);
	cout<<a<<endl;
	*/
	
	/*
	char t;
	t=file.get();
	cout<<t<<endl;
	*/

//file("hello.txt",ios::app);//for retaining previous data;
//file.is_open  if file is open or running	
//.c_string optional like cin<<fi  ofstream file(fi.c_string())
	
	file.close();
	return 0;
}	
