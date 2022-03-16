#include <iostream>

float hasil;

float jumlah(float a, float b);
float kali(float a, float b);
float kurang(float a, float b);
float bagi(float a, float b);

int main()
{
    float a, b;
    char op;
    std::cout << "masukkan angka pertama : ";
    std::cin >> a;
    std::cout << "masukkan angka kedua : ";
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