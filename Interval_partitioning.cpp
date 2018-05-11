#include<bits/stdc++.h>

using namespace std;

int main(int argc, char ** argv){
    int numero_aulas;
    cout << "Digite o numero de aulas: " << endl;
    cin >> numero_aulas;

    vector <float> inicio;
    vector <float> fim;

    cout << "Insira o horario do inicio e o fim das aulas: " << endl;
    for (int i = 0; i < numero_aulas ; i++){
      float temp1, temp2;
      cin >> temp1 >> temp2;

      inicio.push_back(temp1);
      fim.push_back(temp2);
    }

    sort(inicio.begin(), inicio.end());
    sort(fim.begin(), fim.end());

    int num_salas = 0, total = 1;
    int i = 0, j = 0;

    while (i < numero_aulas && j < numero_aulas){
      if (inicio[i] < fim[j]){
        num_salas++;
        i++;
        if (num_salas > total) total = num_salas;
      }else{
        num_salas--;
        j++;
      }
    }
    cout << "Para as " << numero_aulas << " aulas";
    cout << " o Total de salas usadas foi de " << total << "." << endl;

  return 0;
}
