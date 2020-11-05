#include <iostream>

using namespace std;

template<class ejem>
void mostrarAbs(ejem n);

template <class tipod>
void mostrardato(tipod dato);

int main()
{
    int num1 = 4;
    float num2 = 56.67;
    double num3 = 859.659887;
    char dato1 = 'a';
    int * point;
    point = &num1;

    //mostrarAbs(dato1); --- prueba extra
    mostrardato(num1);
    mostrardato(num2);
    mostrardato(num3);
    mostrardato(dato1);
    mostrardato(*point);
    return 0;
}

template<class ejem>
void mostrarAbs(ejem n){
    if(n < 0){
        n *= -1;
    }
    cout << "El valor absoluto es: "<<n<<endl;
}


template <class tipod>
void mostrardato(tipod dato){
    cout << "El dato es: " << dato << endl;
}












