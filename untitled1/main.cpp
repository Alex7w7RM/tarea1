#include <iostream>
using namespace std;

int main() {
    int num1, num2, a = 1, b = 1;

    // ejercicio 1
    cout << "tabla de multiplicar 4" << endl;

    do {
        num1 = 4 * a;
        cout << 4 << "*" << a << "=" << num1 << endl;
        a++;
    } while (a <= 10);

    // ejercicio 2
    cout << "tabla de multiplicar 6" << endl;

    do {
        num2 = 6 * b;
        cout << 6 << "*" << b << "=" << num2 << endl;
        b++;
    } while (b <= 10);


    //ejercicio 3
    cout << "ingrese un numero que desee calcular el factorial" << endl;

    int num3, num4;
    double resultado2 = 1;

    cin >> num3;

    for (num4 = 1; num4 <= num3; num4++)
        resultado2 = resultado2 * num4;
    cout << resultado2 << endl;



    // ejercicio 4
    int e, s, c, num;

    e = 0;
    s = 1;
    c = 0;

    cout << " Escriba el numero de elementos deseados de fibonacci" << endl;


    cin >> num;
    for (int i = 1; i < num; i++) {
        c = e + s;
        cout << c << " ";
        e = s;
        s = c;


    }

    cout << endl;




    // ejercicio 4
    int num5;

    bool primo = true;

    cout << "ingrese un numero para verificar si es primo" << endl;

    cin >> num5;

    for (int i = 2; i < num5; i++) {

        if (num5 % i == 0) primo = false;

    }
    if (primo == true) cout << " EL numro es primo" << endl;
    else cout << " el numero no es primo" << endl;



    //ejercicio 5

    int n1;
    cout << "ingrese un numero si quiere saber si es PAR o IMPAR " << endl;

    cin >> n1;

    if (n1 % 2 == 0) {
        cout << " el numero es par" << endl;

    } else {
        cout << " el numero es impar" << endl;
    }



    // ejercicio 6
    int m, num7;


    printf(" \ningrese el numero que desee multiplicar en la tabla:\n ");
    scanf("%d", &num7);

    printf("\n   La tabla de multiplicar del %d es:\n", num7);

    for (m = 1; m <= 10; m++)
        printf("\n   %d * %d = %d", num7, m,  m  * num7 );

    return 0;
}


