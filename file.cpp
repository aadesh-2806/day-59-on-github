#include<iostream>
#include<fstream>

using namespace std;

int main()
{//print in file
	ofstream file;//file("hello.txt",ios::app);//for retaining previous data;
	file.open("helldo.txt",ios::app);
	//file.is_open  if file is open or running
	file<<"heyyysfsf"<<endl;
	file<<"heyyysfsf"<<endl;
	file<<"heyyysfsf"<<endl;
	//.c_string optional like cin<<fi  ofstream file(fi.c_string())
	file.close();
	return 0;
}
