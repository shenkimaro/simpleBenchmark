/* 
 * File:   main.cpp
 * Author: ibanez
 *
 * Created on 12 de abril de 2020, 11:52
 */

#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int pow(int number, int factor){
    int result = number;
    for (int i = 1; i < factor; i++)
    {
        result *= number;
    }
    return result;
}

int soma(int a, int b){
    return a + b;
}

/*
 * 
 */
int main(int argc, char** argv) {
    std::cout << "Usando C++: " << "\n";
    int max = pow(10,9);
    time_t inicio, fim;

    time(&inicio);
    int cont = 0;
    for (int i = 0; i < max; i++) {
        cont = cont +1;
    }
    time(&fim);    
    std::cout << "Laço direto: " << cont << " em " << fim - inicio << "\n";

    time(&inicio);
    cont = 0;
    for (int i = 0; i < max; i++) {
        cont = soma(cont, 1);
    }
    time(&fim);
    std::cout << "Chamando funcao: " << cont << " em " << fim - inicio << "\n";

    return 0;
}

