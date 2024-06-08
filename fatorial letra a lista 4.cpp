#include <iostream>
using namespace std;

int main(){
	int n, aux =1, prod= 1;
	
	cout << ("fatorial de ");
	cin >> n;
	
	while (aux<= n){ 
		prod *= aux;
		aux ++;
		
	}
	
	cout << "fatorial_eh_" << prod << endl;
	
	return 0;
	
}
