#include <iostream>
using namespace std;
int main ()
{
  int program;
    cout<<"MENAMPILKAN PROGRAM\n";
    cout<<"1. Program Bilangan Ganjil, Genap, dan Prima\n";
    cout<<"2. Program Fibonacci\n";
    cout<<"3. Program Gambar Segitiga\n";
    cout<<"PILIH PROGRAM YANG INGIN DITAMPILKAN : ";
    cin>>program;
    cout<<endl;

    //PROGRAM NO.1
    if (program == 1)
    { int batas, jumlahganjil = 0, jumlahgenap = 0, jumlahprima = 0;
   cout << " Masukkan batas bilangan: ";
    cin >> batas;

   // Menampilkan bilangan ganjil
    cout << "Bilangan Ganjil:\n";
    for (int i=1; i<=batas; i++)
    {
        if (i % 2 != 0)
        {   jumlahganjil++;
            cout <<"    "<< i << " (Faktor: ";
            for (int a=1; a<=i; a++)
            {
                if (i % a == 0)
                {
                    cout << a;
                    if (a != i)
                    {
                        cout << ", ";
                    }
                }
            }
            cout << ")\n";
        }
    }

    // Menampilkan bilangan genap
    cout << "Bilangan Genap:\n";
    for (int i=1; i<=batas; i++)
    {
        if (i % 2 == 0)
        {
            jumlahgenap++;
            cout <<"    "<< i << " (Faktor: ";
            for (int a=1; a<=i; a++)
            {
                if (i % a == 0)
                {
                    cout << a;
                    if (a != i)
                    {
                        cout << ", ";
                    }
                }
            }
            cout << ")\n";
        }
    }

    // Menampilkan bilangan prima
    cout << "Bilangan Prima:\n";
    for (int i=2; i<=batas; i++)
    {
        int bilanganprima = 1;
        for (int a=2; a*a<=i; a++)
        {
            if (i % a == 0)
            {
                bilanganprima = 0;
                break;
            }
        }
        if (bilanganprima == 1)
        {
            jumlahprima++;
            cout <<"    "<< i << " (Faktor: 1, " << i << ")\n";
        }
    }

    cout << "\n Jumlah bilangan ganjil: " << jumlahganjil << endl;
    cout << " Jumlah bilangan genap : " << jumlahgenap << endl;
    cout << " Jumlah bilangan prima : " << jumlahprima << endl << endl;
}
    //PROGRAM NO.2
    else if (program == 2)
    {
        int n, a = 0, b = 1, c;

    cout << " Masukkan jumlah banyak deret bilangan Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    cout << "   Deret Fibonacci: ";

    for (int i=1; i<=n; i++)
    {
        if (i == 1)
        {
            cout << a << " ";
        }
        else if (i == 2)
        {
            cout << b << " ";
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    } cout << endl << endl;

    }

    //Menampilkan Gambar Segitiga
    else if (program == 3)
    {
        int tinggi;


    cout << "Masukkan tinggi piramida: ";
    cin >> tinggi;


    for (int i = 1; i <= tinggi; i++) {

        for (int spasi = 1; spasi <= tinggi - i; spasi++) {
            cout << " ";
        }
        for (int bintang = 1; bintang <= (2 * i - 1); bintang++) {
            cout << "*";
        }
        cout << endl;
    }
    }

    else {
        cout<<"Tidak ada dalam pilihan";
    }

    return 0;
}
