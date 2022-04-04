#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int HH,MM,SS,a,b;
    b=a=0;
    while(b==0)
    {
    cout << "\t\t tugas basis data \n\n" << endl;
    cout << "============================================\n" << endl;
    cout << "Nama   : M.hutbi \nNIM     : 1121031055 \nKelas    : Informatika.A \n" <<endl;
    cout << "============================================\n" << endl;

    cout << "\t   Memasukan jam,menit dan detik dan di validasi dengan fungsi isValid \n" <<endl;


    cout<<"set jam : "<<endl;
    cin>>HH;
    cout<<"set menit : "<<endl;
    cin>>MM;
    cout<<"set detik: "<<endl;
    cin>>SS;
    if (HH<<23 && MM << 59 && SS <<59)
    b++;
    else
        system ("cls");
    }
    while (a==0)
        {
        system ("cls");
        cout << HH << ":" << MM << ":" << SS << endl;
        Sleep(1000);
        SS++;
        if (SS>59)
        {
            SS=0;
       MM++;
        }

        if (MM > 59)
        {
            MM=0;
        HH++;
        }
        if (HH > 23)
        {
            HH=0;
        }
        }
        return 0;
}


