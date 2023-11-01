#include <bits/stdc++.h>

using namespace std;

int main(){

    // Insere uma chave e um valor no map
    // insert({key, element})

    // Remove uma key ou um iterator
    // erase()

    // Retorna um iterator da posição do elemento
    // find(element)

    // Retorna a quantidade de elementos de uma chave específica
    // count

    // Retorna o tamanho do map
    // size

    // Limpa todo o conteúdo do Map
    // clear

    // Retorna um iterator para o início do map
    // begin

    // Retorna um iterator para o final do map
    // end

    map<string, int> meu_mapa;

    meu_mapa["Deivis"] = 2;
    cout << meu_mapa["Deivis"] << endl;

    int x = meu_mapa["Deivis"];
    int size = meu_mapa.size();

    meu_mapa["ca"] = 3;

    if(meu_mapa.count("ca")){
		puts("Meu mapa contem a string fornecida");
    }
    else{
        puts("Meu mapa nao contem a string fornecida");
    }

    meu_mapa.erase("ca");

    if(meu_mapa.count("ca")){
		puts("Meu mapa contem a string fornecida");
    }
    else{
        puts("Meu mapa nao contem a string fornecida");
    }

	map<char,int> mp;

	for(char i = 'd'; i < 'j'; i++){
		mp[i]++;
	}

	for(char i = 'a'; i < 'l'; i++){
		if(mp.count(i)){
            printf("%c pertence\n",i);
        }
		else{ 
            printf("%c NAO pertence\n",i);
        }
	}

	puts("");
	mp.clear();
	
	for(char i = 'a'; i < 'l'; i++){
		if(mp.count(i)){
            printf("%c pertence\n",i);
        }
		else{
            printf("%c NAO pertence\n",i);
        }
	}

    map<string,int> mapping = {{"alpha", 0}, {"beta", 0}, {"gamma", 0}};

    mapping.at("alpha") = 10;
    mapping.at("beta") = 20;
    mapping.at("gamma") = 30;

    for(auto& p : mapping){
        printf("%d : %d", p.first, p.second);
    }

}