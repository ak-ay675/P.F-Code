		#include<iostream>
using namespace std;
int main(){
const int max=3;
	int A[max] , count=0;
	for(int i=0; i<max;i++){
		cout<<"A["<<i<<"]: ";
		cin>>A[i];
		cout<<endl;
	}
	
		for(int i=0; i<max;i++){
			for(int j=0; j<max;j++){
		if(A[i]>=A[j])
		count++;
	}
	if(count==max){
		cout<<"MAX Number"<<A[i];
		break;
	}
	count=0;
	}
  return 0;
}
