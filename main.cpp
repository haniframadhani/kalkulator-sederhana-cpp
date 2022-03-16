#include <iostream>

float hasil;
float a, b;
char op;
bool lanjut = true;

float jumlah(float a, float b);
float kali(float a, float b);
float kurang(float a, float b);
float bagi(float a, float b);
int lanjutkan();
int pesan();

int main()
{
    while (lanjut == true)
    {
        pesan();
        switch (op)
        {
        case '+':
            jumlah(a, b);
            std::cout << "hasil = " << hasil << std::endl;
            break;
        case '-':
            kurang(a, b);
            std::cout << "hasil = " << hasil << std::endl;
            break;
        case '*':
            kali(a, b);
            std::cout << "hasil = " << hasil << std::endl;
            break;
        case '/':
            bagi(a, b);
            std::cout << "hasil = " << hasil << std::endl;
            break;
        default:
            std::cout << "operator yang anda masukkan salah";
            break;
        }
        lanjutkan();
    }

    return 0;
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

int lanjutkan()
{
    char teruskan;
    std::cout << "lanjut? (y/n)";
    std::cin >> teruskan;
    if (teruskan == 'y' || teruskan == 'Y')
    {
        lanjut = true;
        return lanjut;
    }
    else if (teruskan == 'n' || teruskan == 'N')
    {
        lanjut = false;
        return lanjut;
    }
    else
    {
        std::cout << "yang anda masukkan salah" << std::endl;
    }
}

int pesan()
{
    std::cout << "masukkan angka pertama : ";
    std::cin >> a;
    std::cout << "masukkan angka kedua   : ";
    std::cin >> b;
    std::cout << "masukkan operator (+, -, *, /) : ";
    std::cin >> op;
}