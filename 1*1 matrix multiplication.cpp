#include<iostream>
using namespace std;
int main(){
	const int max=3;
	int A[max], B[max], AB[max]={0};
	for(int i=0; i<max;i++){
		cout<<"A["<<i<<"]: ";
		cin>>A[i];
		cout<<endl;
	}
		for(int i=0; i<max;i++){
		cout<<"B["<<i<<"]: ";
		cin>>B[i];
		cout<<endl;
	}
	
	for(int i=0; i<max;i++){
		for(int j=0;j<max;j++){
			AB[i]+=A[i]*A[j];
		}
		cout<<"AB["<<i<<"]"<<AB[i]<<endl;
	}
	
	
  }
