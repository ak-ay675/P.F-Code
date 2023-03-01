#include<iostream>
using namespace std;
int main(){

			const int max=3;
	int A[max] , count=0;
	for(int i=0; i<max;i++){
		cout<<"A["<<i<<"]: ";
		cin>>A[i];
		cout<<endl;
		count+=A[i];
	}
	cout<<count/max;
	
	
	
  }
