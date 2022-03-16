#include <iostream>

float hasil;

int jumlah(float a, float b);
int kali(float a, float b);
int kurang(float a, float b);
int bagi(float a, float b);

int main()
{
    float a, b;
    char op;
    std::cout << "masukkan angka ke 1 : ";
    std::cin >> a;
    std::cout << "masukkan angka ke 2 : ";
    std::cin >> b;
    std::cout << "masukkan operator (+, -, *, /) : ";
    std::cin >> op;
    switch (op)
    {
    case '+':
        jumlah(a, b);
        std::cout << "hasil = " << hasil;
        break;
    case '-':
        kurang(a, b);
        std::cout << "hasil = " << hasil;
        break;
    case '*':
        kali(a, b);
        std::cout << "hasil = " << hasil;
        break;
    case '/':
        bagi(a, b);
        std::cout << "hasil = " << hasil;
        break;
    default:
        std::cout << "operator yang anda masukkan salah";
        break;
    }
}

float jumlah(float a, float b)
{
    hasil = a + b;
    return hasil;
}

float kali(float a, float b)
{
    hasil = a * b;
    return hasil;
}

float kurang(float a, float b)
{
    hasil = a - b;
    return hasil;
}

float bagi(float a, float b)
{
    hasil = a / b;
    return hasil;
}
