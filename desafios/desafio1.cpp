#include <iostream> 

using namespace std; 

int main(){
    float nota1;
    float nota2;
    float nota3;
    float media_turma;
    float media_aluno;
     
    cout << "Digite a primeira nota:";
    cin >> nota1;
    cout << "Digite a segunda nota:";
    cin >> nota2;
    cout << "Digite a terceira nota:";
    cin >> nota3;
    cout << "Qual a media da turma? ";
    cin >> media_turma;
    media_aluno = (nota1 + nota2 + nota3) / 3;

    cout << "Media da turma: " << media_turma << endl;
    if (media_aluno > media_turma){
        cout << "Parabens voce esta acima da media da turma, sua media e de nota " << media_aluno << endl;
    }
    else if (media_aluno == media_turma){
        cout << "A sua media e igual a da turma" << endl;
    }
    else{
        cout << "A sua media e inferior a da turma... sua media e de nota " << media_aluno << endl;
    }
    


    return 0;
}