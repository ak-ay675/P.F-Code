#include <iostream>
using namespace std;
int main(){

		const int max=10;
	int A[max] , B[max]={0} ,n=max;
	for(int i=0; i<max;i++){
		cout<<"A["<<i<<"]: ";
		cin>>A[i];
		cout<<endl;
	}
	
		for(int i=0; i<max;i++){
			for(int j=0; j<max;j++){
		if(A[i]>=A[j]){
		B[i]+=1;	
	}
	}
	}
			for(int i=0;i<max;i++){
				for(int j=0;j<max;j++){
				if(B[j]==n)
				cout<<A[j]<<" ";
			}
			n--;
			}
	return 0;
}
