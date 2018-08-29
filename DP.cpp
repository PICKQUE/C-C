//动规 获得Nth prime
#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;
int GetNthPrime(int n){
	list<int> primes(1,2);
	int number=3;
	while(primes.size()!=n){
		bool isPrime=true;
		for(auto it=primes.begin();it!=primes.end()&&(*it)*(*it)<=number;it++)
		{
			if(number%(*it)==0)
				isPrime=false;
		}
		if(isPrime){
			primes.push_back(number);
		}
		number+=2;
	}
	//rbegin() 反向迭代器 
	return *(primes.rbegin());
}
//unique path
//二维数组 
int uninquepath_double(int m,int n)
{
	vector<vector<int>>table(n,vector<int>(m,1));
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++){
			table[i][j]=table[i-1][j]+table[i][j-1];
		}
	}
	return table[m-1][n-1];
}
//一维数组 
int uninquepath_one(int m,int n){
	vector<int>table(n,1);
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++){
			table[j]+=table[j-1];
		}
	}
	return table[n-1];
}
//recursion
int uninquepath_recursion(int m,int n){
if(m==1||n==1)return 1;
return uninquepath_recursion(m-1,n)+uninquepath(m,n-1); 
} 
int main()
{
	cout<<uninquepath(4,5);
	return 0;
 } 
