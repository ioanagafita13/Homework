#include <iostream>
using namespace std;


//1.Se dă un număr natural nenul n. Afișați toate perechile x y cu proprietatea că x + y = n și 0 < x ≤ y
void perechi (){
int n;
cout << "introduceti nr n\n";
cin >> n;
    for(int i = 1; i < n; i++)
        {
            int y = n - i;
            if(y >= i)
            cout << i <<" "<< y <<"\n";
        }
}

//2.Se citesc numere de la tastatură până la apariția lui zero. Să se determine câte dintre ele erau pare.







// 3.Se dă un număr natural n. Afișați în ordine crescătoare primele n numere naturale nenule.
void crescator (){
int n;
cout << "introduceti nr n\n";
cin >> n;
    for(int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
}



// 4.Se dă un număr natural n. Afișați în ordine descrescătoare primele n numere naturale nenule.
void descrescator (){
int n;
cout << "introduceti nr n\n";
cin >> n;
    for(int i = n; i >= 1; i--)
        {
            cout << i << " ";
        }
}




// 5.Se citesc două numere naturale a și b. Afișați în ordine crescătoare primii b multipli nenuli ai numărului a
void primii_multipli (){
    int a, b, multiplu;
    cout << "Introduceti numerele a si b\n";
    cin >> a >> b;
    if (a == 0)
        cout << " nu exista multipli de 0\n"; 
    else if (a != 0)
        {
            for (int i = 1; i <= b; i++)
            {
                multiplu = a*i;
                cout << multiplu << " ";
            }   
        }
     
}




// 6.Se citește n număr natural. Calculați suma numerelor naturale mai mici sau egale cu n.
void suma_naturale(){
    int n, sum = 0;
    cout << "introduceti numarul n\n";
    cin >> n;
    for (int i = 1; i <= n; i++) // se poate face cu while ????
        {
            sum +=i;
        }
    cout << sum;
}


// 7. Să se scrie un program care citește numărul natural n și determină suma 2+4+..+(2n).
void suma_pare(){
    int n, sum_even = 0;
    cout << "introduceti nr n\n";
    cin >> n;
    for (int i = 1; i <= n; i++) // se poate face cu while ????
        {
            sum_even +=(2*i);
        }
    cout << sum_even;
}


// 8. Se dau n numere naturale. Calculaţi suma dintre cel mai mare și cel mai mic număr dat.
 void suma_min_max(){
    int n, min = 100000, max = 0;
    cout << "introduceti n\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x ;
            if (x > max){
                max = x;
            }
            if (x < min){
                min = x;
            }
        }
   cout << max+min;
 }


// 9. Se citesc de la tastatură numere întregi până la apariția lui zero. Să se determine cea mai mică dintre valorile pozitive citite.






// 10. Se dă un număr natural nenul n. Calculați suma cifrelor lui n care sunt mai mari sau egale cu 3 și mai mici sau egale cu 7
void suma_cifre(){
    int n, suma_cifre = 0;
    cout << "introduceti n\n";
    cin >> n;
    while (n != 0)
    {
        if (3 <= n%10 && n%10 <= 7)
        suma_cifre += n%10;
        n /= 10;
    }
    cout << suma_cifre;
}





// 11. Să se scrie un program care să determine numărul de cifre ale unui număr natural citit de la tastatură.
void numar_cifre(){
    int n, nr_cifre;
    cout << " introduceti n\n";
    cin >> n;
    if(n == 0)
        nr_cifre++;
    else 
        while (n!=0)
        {
            nr_cifre++;
            n=n/10;
        }
    cout << nr_cifre;
}


int main() {

    
    //perechi();
    //crescator();
    //descrescator();
    //suma_naturale();
    //suma_pare();
    //suma_min_max();
    //numar_cifre();
    //primii_multipli();
    //suma_cifre();





















    return 0;
}