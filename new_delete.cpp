#include<iostream>
using namespace std;
int main()
{
	char *c=new char(1);
	//��� �������c�ĵ�ַ�µ�����
	//cout<<c; 
	//�˸�� 
	*c='\b'; 
	cout<<"avs"<<*c<<"d";//output: avd 
	//���з� 
	cout<<endl;
	*c='\r';
	cout<<"asdf"<<*c<<"we"; // output: wedf
	return 0;
 } 
