#include<iostream>
#include<string>

/*1.O functie ce verifica daca o parola respecta cerintele:
Sa aibe cel putin un numar, sa aibe cel putin un caracter special, sa aibe o litera mare si sa fie de cel putin dimensiune 12*/


bool checkPassword(std::string parola)
{
    bool litera_mare, caracter, cifra;
    litera_mare=false;
    caracter=false;
    cifra=false;
    if(parola.size()>=12)
    {
        for(int i=0; i<parola.size(); i++)
        {
            if('A'<=parola[i] && parola[i]<='Z')
            {
               litera_mare=true;
            }
             if('0'<=parola[i] && parola[i]<='9')
            {
                cifra=true;
            }
            if(':'<=parola[i] && parola[i]<='@')
            {
                caracter=true;  
            }
        } 
    if((litera_mare && cifra && caracter)==0)
    {
        std::cout<<"Exista macar o conditie neindeplinita\n";
    }   
    return litera_mare && cifra && caracter;  
    }
   
    else 
    {
    std::cout<<"introduceti o parola cu minim 12 caractere.\n";
    return false;
    }
}



int main(){
    //2.calculati suma elem din diagonala secundara
    int m_array[3][3]=
{
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

int diag2_sum=0;
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        if(i+j==2)
        {
            diag2_sum+=m_array[i][j];
        }
    }
}
std::cout<<"suma diagonalei principale este "<<diag2_sum<<std::endl;



//chemam functia CheckPassword

std::string parola;
std::cin>>parola;
std::cout<<checkPassword(parola)<<std::endl;
return 0;
}