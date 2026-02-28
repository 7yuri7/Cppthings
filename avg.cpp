#include <iostream>
#include <string>

using namespace std;

string AddAluno(){

  string nomeAluno;
  string codigoAluno;
  int idadeAluno;
  cout << "Digite o nome do aluno: ";
  cin >> nomeAluno;
  cout << "Digite o código do aluno: ";
  cin >> codigoAluno;
  cout << "Digite a idade do aluno: ";
  cin >> idadeAluno;
  cout << "Aluno adicionado: " << nomeAluno << ", Código: " << codigoAluno << ", Idade: " << idadeAluno << endl;

  string alunoInfo = nomeAluno + "," + codigoAluno + "," + to_string(idadeAluno);
  return alunoInfo;
}


void media(){
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
  nota3 *=2;
  media = (nota1 + nota2 + nota3) / 3;

  cout << "___RESULTADO___" << endl;
  cout << "Aluno: " << nomeAluno << endl;
  cout << "Media Final: " << media << endl;

  bool aprovado = media >= 6.0;
  cout << "Aprovado? (1 para sim, 0 para não): " << aprovado << endl;
  cout << "Nota 3: " << nota3 << endl;// feito para testar a saida do valor 2
}

void menu(){
  int opcao;
  cout << "__MENU__" << endl;
  cout << "1. Calcular média" << endl;
  cout << "2. Adicionar aluno" << endl;
  cout << "3. Sair" << endl;
  cout << "Escolha uma opção: ";
  cin >> opcao;
  switch(opcao){
    case 1:
      media();
      break;
    case 2:
      AddAluno();
      break;
    case 3:
      exit(0);
    default:
      cout << "Opção inválida. Tente novamente." << endl;
  }
}




int main(){
  do{
    menu();
  }while(true);
 
  return 0;
}
