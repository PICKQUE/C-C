#include<iostream>
using namespace std;
int main()
{
	char *c=new char(1);
	//输出 被分配的c的地址下的内容
	//cout<<c; 
	//退格符 
	*c='\b'; 
	cout<<"avs"<<*c<<"d";//output: avd 
	//换行符 
	cout<<endl;
	*c='\r';
	cout<<"asdf"<<*c<<"we"; // output: wedf
	return 0;
 } 
