//	test
#include<vector>
#include<iostream>
using namespace std;
//输出菱形
void a(int n) {
	for(int i=0; i<n; i++) {
		for(int j=n-i-1; j>0; j--)cout<<' ';
		for(int j=0; j<2*i+1; j++)cout<<'*';
		cout<<endl;
	}
	for(int i=n-2; i>=0; i--) {
		for(int j=n-i-1; j>0; j--)cout<<' ';
		for(int j=0; j<2*i+1; j++)cout<<'*';
		cout<<endl;
	}
}
//空心菱形
void b(int n) {
	for(int i=0; i<n; i++) {
		for(int j=n-i-1; j>0; j--)cout<<' ';
		for(int j=0; j<2*i+1; j++) {
			j==0?cout<<'*':cout<<' ';
			if(j==2*i-1)cout<<'*';
		}
		cout<<endl;
	}
	for(int i=n-2; i>=0; i--) {
		for(int j=n-i-1; j>0; j--)cout<<' ';
		for(int j=0; j<2*i+1; j++) {
			j==0?cout<<'*':cout<<' ';
			if(j==2*i-1)cout<<'*';
		}
		cout<<endl;
	}
}
int menu(){
	cout<<"1.空心菱形"<<endl;
	cout<<"2.实心菱形"<<endl;
} 
int main(int argc,char **argv) {
	menu();
	int n;
	cin>>n;
	int length;
	switch(n){
		case 1:
			cout<<"请输入菱形长度"<<endl;
			cin>>length;
			b(length);
			break;
		case 2:
			cout<<"请输入菱形长度"<<endl;
			cin>>length;
			a(length);
			break;
		default:
			cout<<"choose fault"<<endl;
			break;
	}
	return 0;
}
