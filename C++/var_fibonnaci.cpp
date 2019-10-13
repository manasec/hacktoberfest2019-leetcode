#include <iostream>
#include <string>
#include <cmath>
#include <cstdint>

using namespace std;

void logica_fibonacci(int variavel_fib[], int tamanho_fibonnaci)
{
    variavel_fib[0] = 1;
    //posiÁ„o do variavel "variavel_fib" na posiÁ„o 0
    variavel_fib[1] = 1;
    //posiÁ„o do variavel "variavel_fib" na posiÁ„o 1
    
    int i = 2;
    // quando for iniciar j· comeÁar com o valor de "i"
    while (i < tamanho_fibonnaci)
    {
        variavel_fib[i] = variavel_fib[i-1] + variavel_fib[i-2];
        //formula de fibonnaci
        i++;
    }    
}
int funcao_leitura(int variavel_fib[], int indice)
{
    if (indice>30)
    {
        return 0;
    }        
        return variavel_fib[indice];      
}

int main()
{
    int fibonnaci[30] = {0};
    logica_fibonacci(fibonnaci,30);
 
 while(true)
    {
     int i;
  
        cout << "informe o valor de fibonnaci"<< endl;
        cin >> i;
        cout << funcao_leitura(fibonnaci,i) << endl;
    } 
}