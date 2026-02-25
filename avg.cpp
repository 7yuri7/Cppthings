#include <iostream>
#include <string>

using namespace std;

int main(){
  string nomeAluno;
  double nota1, nota2, nota3, media;

  cout << "Digite nome do aluno: ";
  cin >> nomeAluno;

  cout << "Digite a primeira nota: ";
  cin >> nota1;

  cout << "Digite a segunda nota: ";
  cin >> nota2;

  cout << "Digite a terceira nota: ";
  cin >> nota3;

  media = (nota1 + nota2 + nota3) / 3;

  cout << "___RESULTADO___" << endl;
  cout << "Aluno: " << nomeAluno << endl;
  cout << "Media Final: " << media << endl;

  bool aprovado = media >= 6.0;
  cout << "Aprovado? (1 para sim, 0 para não): " << aprovado << endl;

  return 0;



}
