#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
struct perhitungan
{
    int bilangan1;
    int JmlBil;
    int bil[];
};

//Penjumlahan

int penjumlahan ( perhitungan K )
{
    cout<< "Ingin ditambah berapa angka? : ";
    cin>> K.JmlBil;
    cout<< "Masukkan Angka : "<<endl;
    for( int i = 0; i<K.JmlBil; i++)
    {
        cin>>K.bil[i];
    }
    cout<<K.bilangan1;
    for ( int j = 0; j<K.JmlBil; j++)
    {
        cout<< " + "<<K.bil[j];
        K.bilangan1 = K.bilangan1 + K.bil[j];
    }
    cout<< " = ";
    return K.bilangan1;
}

//Pengurangan

int pengurangan ( perhitungan K )
{
    cout<< "Ingin dikurang berapa angka? : ";
    cin>> K.JmlBil;
    cout<< "Masukkan Angka : "<<endl;
    for( int i = 0; i<K.JmlBil; i++)
    {
        cin>>K.bil[i];
    }
    cout<<K.bilangan1;
    for ( int j = 0; j<K.JmlBil; j++)
    {
        cout<< " - "<<K.bil[j];
        K.bilangan1 = K.bilangan1 - K.bil[j];
    }
    cout<< " = ";
    return K.bilangan1;
}

//Perkalian

int perkalian ( perhitungan K )
{
    cout<< "Ingin dikalikan berapa angka? : ";
    cin>> K.JmlBil;
    cout<< "Masukkan Angka : "<<endl;
    for( int i = 0; i<K.JmlBil; i++)
    {
        cin>>K.bil[i];
    }
    cout<<K.bilangan1;
    for ( int j = 0; j<K.JmlBil; j++)
    {
        cout<< " * "<<K.bil[j];
        K.bilangan1 = K.bilangan1 * K.bil[j];
    }
    cout<< " = ";
    return K.bilangan1;
}

//Pembagian

double pembagian ( perhitungan K )
{
    cout<< "Ingin dibagi berapa angka? : ";
    cin>> K.JmlBil;
    cout<< "Masukkan Angka : "<<endl;
    for( int i = 0; i<K.JmlBil; i++)
    {
        cin>>K.bil[i];
    }
    cout<<K.bilangan1;
    for ( int j = 0; j<K.JmlBil; j++)
    {
        cout<< " / "<<K.bil[j];
        K.bilangan1 = K.bilangan1 / K.bil[j];
    }
    cout<< " = ";
    return K.bilangan1;
}

//Faktorial

int faktorial( int K )
{
    if ( K <= 1)
    {
        cout<< K << " = ";
        return K;
    }
    else
    {
        cout<< K << " * ";
        return K * faktorial(K - 1);
    }
}

//Pangkat

int pangkat ( perhitungan K )
{
    cout<< K.bilangan1;
    for ( int i = 1; i<K.JmlBil; i++)
    {
        cout<< " * "<<K.bilangan1;
    }
    cout<< " = ";
    return pow(K.bilangan1, K.JmlBil);
}
//Akar Pangkat

double akarpangkat ( perhitungan K )
{
    int metode;
    cout<< "-----------------------------------------------"<<endl;
    cout<< "|             Metode Akar Pangkat             |"<<endl;
    cout<< "-----------------------------------------------"<<endl;
    cout<< "|  1. Akar Pangkat 2  |   2. Akar Pangkat 3   |"<<endl;
    cout<< "-----------------------------------------------"<<endl;
    cout<<endl;
    cout<< "Akar pangkat apa yang ingin anda hitung (1/2) : ";
    cin>> metode;
    cout<<endl;
    if ( metode == 1 )
    {
        cout<< "Akar Pangkat 2 ("<<K.bilangan1<< ") = ";
        return sqrt(K.bilangan1);
    }
    else if ( metode == 2 )
    {
        cout<< "Akar Pangkat 3 ("<<K.bilangan1<< ") = ";
        return cbrt(K.bilangan1);
    }
}

//Eksponen

double eksponen ( perhitungan K )
{
    int metode;
    cout<< "--------------------------------------------------------------"<<endl;
    cout<< "|                       Metode Eksponen                      |"<<endl;
    cout<< "--------------------------------------------------------------"<<endl;
    cout<< "| 1. Eksponen Umum | 2. Eksponen Biner | 3. Eksponen Minus 1 |"<<endl;
    cout<< "--------------------------------------------------------------"<<endl;
    cout<< endl;
    cout<< "Eksponen apa yang ingin anda hitung (1-3) : ";
    cin>> metode;
    cout<<endl;
    if ( metode == 1 )
    {
        cout<< "Eksponen ("<<K.bilangan1<< ") = ";
        return exp(K.bilangan1);
    }
    else if ( metode == 2 )
    {
        cout<< "Eksponen Biner ("<<K.bilangan1<< ") =";
        return exp2(K.bilangan1);
    }
    else if ( metode == 3)
    {
        cout<< "Eksponen Minus 1 ("<<K.bilangan1<< ") = ";
        return expm1(K.bilangan1);
    }
}
//Trigonometri

double trigonometri ( double K )
{
    string metode, cara;
    cout<< "-----------------------------------------------------"<<endl;
    cout<< "|                Metode Trigonometri                |"<<endl;
    cout<< "-----------------------------------------------------"<<endl;
    cout<< "| 1. Trigonometri Umum | 2. Trigonometri Hiperbolik |"<<endl;
    cout<< "-----------------------------------------------------"<<endl;
    cout<<endl;
    cout<< "Trigonometri Apa yang ingin anda hitung ?(1/2) : ";
    cin>> metode;
    cout<<endl;
    if ( metode == "1" )
    {
        cout<< "----------------------------"<<endl;
        cout<< "| Metode Trigonometri Umum |"<<endl;
        cout<< "----------------------------"<<endl;
        cout<< "| 1. Cos | 2. Sin | 3. Tan |"<<endl;
        cout<< "----------------------------"<<endl;
        cout<<endl;
        cout<< "Ingin menghitung apa?(1-3) : ";
        cin>>cara;
        cout<<endl;
        if ( cara == "1" )
        {
            cout<< "Cos ("<<K<< ") = ";
            return cos(K);
        }
        else if ( cara == "2" )
        {
            cout<< "Sin ("<<K<< ") = ";
            return sin(K);
        }
        else if ( cara == "3" )
        {
            cout<< "Tan ("<<K<< ") = ";
            return tan(K);
        }
    }
    else if ( metode == "2" )
    {
        cout<< "-------------------------------------"<<endl;
        cout<< "|   Metode Trigonometri Hiperbolik  |"<<endl;
        cout<< "-------------------------------------"<<endl;
        cout<< "|  1. Cosh  |  2. Sinh  |  3. Tanh  |"<<endl;
        cout<< "-------------------------------------"<<endl;
        cout<<endl;
        cout<< "Ingin menghitung apa?(1-3) : ";
        cin>>cara;
        cout<<endl;
        if ( cara == "1" )
        {
            cout<< "Cos Hiperbolik ("<<K<< ") = ";
            return cosh(K);
        }
        else if ( cara == "2")
        {
            cout<< "Sin Hiperbolik ("<<K<< ") = ";
            return sinh(K);
        }
        else if ( cara == "3")
        {
            cout<< "Tan Hiperbolik ("<<K<< ") = ";
            return tanh(K);
        }
    }
}

//Logaritma

double logaritma ( perhitungan K )
{
    int metode;
    cout<< "--------------------------------------------"<<endl;
    cout<< "|             Metode Logaritma             |"<<endl;
    cout<< "--------------------------------------------"<<endl;
    cout<< "| 1. Logaritma Natural | 2. Logaritma Umum |"<<endl;
    cout<< "--------------------------------------------"<<endl;
    cout<<endl;
    cout<< "Logaritma apa yang ingin anda hitung ?(1/2) : ";
    cin>> metode;
    cout<<endl;
    cout<< "Log"<<K.bilangan1<< " = ";
    if ( metode == 1 )
    {
        return log(K.bilangan1);
    }
    else if ( metode == 2 )
    {
        return log10(K.bilangan1);
    }
}

//Tampilan

int main()
{
    perhitungan *Kalkulator, Penyimpanan;
    Kalkulator = &Penyimpanan;
    int metode;

    beginning:

    cout<< "|-----------------------|-----------------------------------|-----------------------|"<<endl;
    cout<< "|=======================|Calculator Scientific By Kelompok 8|=======================|"<<endl;
    cout<< "|-----------------------|-----------------------------------|-----------------------|"<<endl;
    cout<<endl;
    cout<< "---------------------------------------"<<endl;
    cout<< "|          Anggota Kelompok 8         |"<<endl;
    cout<< "-----------======================------"<<endl;
    cout<< "| No |          Nama Anggota          |"<<endl;
    cout<< "---------------------------------------"<<endl;
    cout<< "| 1  |  Aditya Rizky Darmawan         |"<<endl;
    cout<< "| 2  |  Allya Putri Nadila Gustin     |"<<endl;
    cout<< "| 3  |  Muhammad Rafi Catur Wijayanto |"<<endl;
    cout<< "---------------------------------------"<<endl;
    cout<<endl;
    cout<< "---------------------------------------------"<<endl;
    cout<< "|             Metode perhitungan            |"<<endl;
    cout<< "---------------------------------------------"<<endl;
    cout<< "| No  |         Metode        |    Simbol   |"<<endl;
    cout<< "---------------------------------------------"<<endl;
    cout<< "|  1  |       Penjumlahan     |     (+)     |"<<endl;
    cout<< "|  2  |       Pengurangan     |     (-)     |"<<endl;
    cout<< "|  3  |       Perkalian       |     (*)     |"<<endl;
    cout<< "|  4  |       Pembagian       |     (/)     |"<<endl;
    cout<< "|  5  |       Faktorial       |     (!)     |"<<endl;
    cout<< "|  6  |       Berpangkat      |     (^)     |"<<endl;
    cout<< "|  7  |       Akar Pangkat    |    (sqrt)   |"<<endl;
    cout<< "|  8  |       Eksponen        |    (e^x)    |"<<endl;
    cout<< "|  9  |       Trigonomteri    |(Sin/Cos/Tan)|"<<endl;
    cout<< "| 10  |       Logaritma       |    (Log)    |"<<endl;
    cout<< "---------------------------------------------"<<endl;
    cout<<endl;
    cout<< "Masukkan Metode apa yang ingin anda pakai (1-10) : ";
    cin>>metode;
    cout<<endl;

    switch (metode)
    {
        case 1:
            cout<< "Masukkan Bilangan pertama yang ingin anda hitung : ";
            cin>> (*Kalkulator).bilangan1;
            cout<<penjumlahan(*Kalkulator)<<endl;
            break;
        case 2:
            cout<< "Masukkan Bilangan pertama yang ingin anda hitung : ";
            cin>> (*Kalkulator).bilangan1;
            cout<<pengurangan(*Kalkulator)<<endl;
            break;
        case 3:
            cout<< "Masukkan Bilangan pertama yang ingin anda hitung : ";
            cin>> (*Kalkulator).bilangan1;
            cout<<perkalian(*Kalkulator)<<endl;
            break;
        case 4:
            cout<< "Masukkan Bilangan pertama yang ingin anda hitung : ";
            cin>> (*Kalkulator).bilangan1;
            cout<<pembagian(*Kalkulator)<<endl;
            break;
        case 5:
            cout<< "Masukkan Bilangan yang ingin anda faktorialkan : ";
            cin>> (*Kalkulator).bilangan1;
            cout<< (*Kalkulator).bilangan1 << "! = "<<faktorial((*Kalkulator).bilangan1)<<endl;
            break;
        case 6:
            cout<< "Masukkan Bilangan yang ingin anda hitung pangkat : ";
            cin>> (*Kalkulator).bilangan1;
            cout<< "Masukkan Pangkat berapa yang ingin anda hitung : ";
            cin>> (*Kalkulator).JmlBil;
            cout<< (*Kalkulator).bilangan1<< "^"<<(*Kalkulator).JmlBil<< " = "<<pangkat(*Kalkulator)<<endl;
            break;
        case 7:
            cout<< "Masukkan Bilangan yang ingin anda akar pangkatkan : ";
            cin>> (*Kalkulator).bilangan1;
            cout<<akarpangkat(*Kalkulator)<<endl;
            break;
        case 8:
            cout<< "Masukkan Bilangan yang ingin anda hitung eksponennya : ";
            cin>> (*Kalkulator).bilangan1;
            cout<<eksponen(*Kalkulator)<<endl;;
            break;
        case 9:
            cout<< "Masukkan Bilangan yang ingin anda hitung Trigonometrinya : ";
            cin>> (*Kalkulator).bilangan1;
            cout<< trigonometri((*Kalkulator).bilangan1)<<endl;
            break;
        case 10:
            cout<< "Masukkan angka yang ingin anda hitung logaritmanya : ";
            cin>> (*Kalkulator).bilangan1;
            cout<<logaritma(*Kalkulator)<<endl;
            break;
        default:
            cout<< "Metode yang anda inputkan tidak tersedia";
            break;
    }

    char yn;
    cout<< "Apakah anda ingin melanjutkan menghitung angka lain ?(Y/N) = ";
    cin>>yn;
    if ( yn == 'y' || yn == 'Y' )
    {
        goto beginning;
    }
    else
    {
        cout<< "Proses Perhitungan diselesaikan"<<endl;
    }

    return 0;
}
