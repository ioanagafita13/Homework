/*ex.1 Ai 2 prieteni ce vorbesc orca intre ei.Limba orca sunt aceleasi cuvinte 
ca in limba romana doar ca se ia prima litera a fiecarui cuvant si se pune la sfarsitul cuvantului 
in urma caruia se adauga un ay
drum= rumday
Input:
Un string ce reprezinta o propozite in limba romana
Output:
Un string ce reprezinta traducerea in limba orca*/


#include<iostream>
#include<string>
#include<vector>


std::string changeWord(std::string cuvant)
{
    cuvant.push_back(cuvant[0]);
    const std::string ay="ay";
    for(int i=0; i<cuvant.size(); i++)
    {
        cuvant[i]=cuvant[i+1];
    }
    cuvant+=ay;
    return cuvant;
}

std::string propozitie(std::string propozitie)
{
    std::string propozitie_orca="";
    std::string cuvant_ro="";
    for(int i=0; i<propozitie.size(); i++)
    {
        if(propozitie[i]!=' '&& propozitie[i]!='.' && propozitie[i]!=',')
        cuvant_ro+=propozitie[i];
        else
        {
        if(cuvant_ro!="")
        {
        propozitie_orca+=changeWord(cuvant_ro)+' ';
        cuvant_ro="";
        }
        }
    }
    propozitie_orca.pop_back();
    propozitie_orca.push_back('.');
    return propozitie_orca;
}
// ex.2 duplicatele dintr-un vector
void duplicate(int *vector_initial, int dim)
{   
    bool gasit=false;
    std::vector<int> vector_rezultat;
    for(int i=0; i<dim; i++)
    {
        for(int j=0; j<i; j++)
        { 
            if(vector_initial[i]==vector_initial[j] && i!=j)
            gasit=true;
        }
        if(gasit==false)
            {
                vector_rezultat.push_back(vector_initial[i]);
            }
        gasit=false;
    }
    for(int i=0; i<vector_rezultat.size(); i++)
    {
        std::cout<<vector_rezultat[i]<<" ";
    }
    std::cout<<std::endl;
}


//ex.3 o functie care sa returneze inversul unui string//
std::string cuvant_oglinda(std::string cuvant_oglinda)
{
    for(int i=0; 2*i<=cuvant_oglinda.size()-1; i++)
    {
        char aux=cuvant_oglinda[i];
        cuvant_oglinda[i]=cuvant_oglinda[cuvant_oglinda.size()-i-1];
        cuvant_oglinda[cuvant_oglinda.size()-i-1]=aux;
    }
    return cuvant_oglinda;
}


int main()
{
//std::string prop;
//std::getline(std::cin, prop);
//std::cout<<"propozitia in limba orca este "<<propozitie(prop)<<std::endl; //ex.1


//std::vector<int> vector1={2,4,1,2,4,7,7,2,0,7,-1,235,45,2,0,0,0,0,0};
//std::vector<int> vector1;

int *vector1;
int dim;
std::cin>>dim;
for(int i=0; i<dim; i++)
{
    std::cin>>vector1[i];
}
duplicate(vector1, dim); //ex.2

//std::string cuv3;
//std::getline(std::cin, cuv3);
//std::cout<<"cuvantul in oglinda este "<<cuvant_oglinda(cuv3)<<std::endl;//ex.3

    return 0;
}