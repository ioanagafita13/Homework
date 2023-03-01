#include<iostream>
#include<string>

//1.O Functie ce sa verifice daca un string este un palindrom sau nu.
bool check_palindrome(std::string word)
{
    bool palindrome=false;
    for(int i=0; i<=word.size()/2; i++)//parcurgem sirul de caractere pana la jumatate
    {
        if(word[i]==word[word.size()-1-i])//cond ca pt fiecare lit(pana la jum), corespondentul a fie egal
        palindrome=true;
        else
       {
        palindrome=false;//in caz contrar, se returneaza false
        break;
       }
    }
    return palindrome;
}
/* 2.Pentru un șir de caractere, să se tipărească pe ecran cuvântul DA sau NU dacă acest șir poate 
fi rearanjat astfel încât să fie un palindrom.
Constrangeri:
Pot fi folosite doar caractere din alfabetul latin cu litere mici
Date de intrare:
    Șirul de caractere.
Exemplu:
INPUT:
aaabbbb
OUTPUT:
DA*/

std::string check_characters(std::string input_string)
{
    std::string result="NU";
    int char_counter=0;//nr de caractere multiple
    int odd_char_counter=0;//nr de car cu aparitii impare

    for(int i=0; i<input_string.size(); i++)//parcurgem sirful de caractere
    {
        char_counter=0;//initializam nr de caractere gasite de mai multe ori cu 0
        for(int j=0; j<input_string.size(); j++)//parcurgem sirul din nou pt a compara fiecare car cu fiecare car
        {
            if(input_string[i]==input_string[j])//cond ca un car sa fie de mai multe ori
            char_counter++;//rezulta nr de gasiri ale unui caracter
        }

        if((char_counter%2)!=0)//daca nr de gasiri e impar
        {
            odd_char_counter++;//incrementam
            //std::cout<<odd_char_counter<<std::endl;
            if(odd_char_counter>1)//daca sunt mai multe car cu aparitii impare, cuvantul nu poate fi palindorm
            {
                result="NU";
                break;
            }
            else
            result="DA";
        }
        else
        result="DA";
    }
    return result;
}

int main()
{   
    //pb 1.
    std::string word_test;
    std::cout<<"introduceti un cuvant "<<std::endl;
    std::getline(std::cin,word_test);
    std::cout<<check_palindrome(word_test)<<std::endl;

    //pb.2
    //std::string input_string_test;
    //std::cout<<"introduceti sirul de caractere "<<std::endl;
    //std::getline(std::cin, input_string_test);
    //std::cout<<check_characters(input_string_test)<<std::endl;

}