#include <iostream>
#include <map> //Para usar a função Maps
using namespace std;
int main(){
	
	map<string, string> contato; //Declarando um mapa
	string nome, telefone;
	
	cin>>nome>>telefone; //Colocando valores nas variaveis
	
	contato[nome]= telefone; //Colocando valores no mapa
	cout<<contato[nome];//Escrevendo o valor do mapa
	
	
	return 0;
}
