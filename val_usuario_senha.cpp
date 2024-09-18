#include <iostream>
#include <string>  // Biblioteca  da variável "string" (variável que adimite caracteres textuais)

using namespace std; // comando para usar a variável std::string 

int main()
{
    int senha;
    std::string usuario;
    
        do
        {
            cout << "Digite o nome do usuário: "; // Apenas adimite cout e cin para input e output de dados
            cin >> usuario; // input da variável "string"
               
             if (usuario != "Renata")    
                {
                    cout << "Usuário inválido. Tente novamente! \n" << endl;
                }
        } while (usuario != "Renata"); // Continua o loop até que o usuário seja "Renata"

        do 
        {
            printf("Digite a senha do usuário: ");
            scanf("%d", &senha);  

            if (senha != 123)
                {  
                    printf("Senha inválido! Tente novamente.\n");
                } 
        } while (senha != 123);  // Continua o loop até que a senha do usuário seja "123"
     

   return 0;
}