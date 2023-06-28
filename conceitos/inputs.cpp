#include <iostream>

using namespace std;

int main(){
    
int idade;
cout << "Qual a sua idade?";
cin >> idade;

if (idade >= 18)
{
    cout << "Maior idade: " << idade  << " anos" << endl;
}
else {
    cout << "Menor idade: " << idade << " anos" << endl;
}

return 0;
}