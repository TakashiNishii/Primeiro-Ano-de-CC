#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,cont =0;
	
	cin>>n;
	
	for (int i = 1;i<=n/2;i++){
		if(n%i==0)
			cont++;
	}
	if(cont==1){
		cout<<"� primo";
	}else{
		cout<<"N�o � primo";
	}
	
	
	return 0;
}
