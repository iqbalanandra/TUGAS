#include <iostream>
using namespace std;
int main(){
	int n, array[10], sum=0, mean, i, k, j, tmp, count=0;

	cin>>n;
	if (n<0 || n>10){
		return 0;
	}
	for(i = 0; i != n ; i++){
		cin>>array[i];
	}
	for (k = 0; k != n; k++){
		sum += array[k];
				
	}mean=sum/n;
	cout<< mean << endl;
	
	
	for (j = 0; j!=n ; j++){
		if(array[j]>=mean){
			count++;
		}
		
		
	}cout<<count<<endl;
	


	
	
	

	
}
