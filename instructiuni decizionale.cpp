#include <iostream>
#include<string>



int main()
{
/*1.Intrarea la piscina este libera la copii sub 7 ani.
Scrieri un program ce primeste intput vasta  si printeaza daca intrarea este gratis*/
int varsta;
const int max_varsta=7;
std::cin>>varsta;
if(varsta<=max_varsta)
{
    std::cout<<"Intrarea este gratis.\n";
}
else
{
    std::cout<<"Taxa este 50 lei.\n";
}
/*2.Pentru a studia la Univeristatea ITSchool trebuie sa treci de un examen de admitere.
Nota minima este 8
Task:
Creati un program ce sa primeasca ca input nota de la examen si sa printeze ADMINS pentru
note mai mari sau egale cu 8, iar in caz contrar sa printeze RESPINS*/
float nota_examen;
const float nota_min=8;
std::cin>>nota_examen;
if(nota_examen>=nota_min)
{
    std::cout<<"ADMIS\n";
}
else 
{
    std::cout<<"RESPINS\n";
}
/*Un aparat de cafea face 5 tipuri de cafea:
1-Late
2-Americano
3-Esspreso
4-Cappuciono
5-Machiato
Screti un program ce va lua ca input numarul pentru tipul de cafea si va printa cafeaua corespunzatoare*/
std::cout<<"Introduceti optiunea \n";
std::cout<<"1.Latte, 2.Americano, 3.Esspreso, 4.Cappucino, 5.Machiato\n";
int a;
std::cin>>a;
switch(a)
{
case 1:
    std::cout<<"Late\n";
    break;
case 2:
    std::cout<<"Americano\n";
    break;
case 3:
    std::cout<<"Esspreso\n";
    break;
case 4:
    std::cout<<"Cappucino\n";
    break;
case 5:
    std::cout<<"Machiato\n";
default:
    std::cout<<"Nu exista optiunea,\n";
    break;
}



return 0;

}