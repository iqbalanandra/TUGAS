#include <iostream>
#include <float>
using namespace std;

int main(){
	float A;
	cout<<"Tulis Angka Pertama	:";
	cin>>A;
	
	float B;
	cout<<"Tulis Angka Kedua	:";
	cin>>B;
	
	
	float sum1=A+B;
	float sum2=A-B;
	float sum3=A*B;
	float sum4=A/B;
	int sum5=A%B;
	
	cout<<sum1<<endl<<sum2<<endl<<sum3<<endl<<sum4<<endl<<sum5;
	
	
	return 0;
	
}
