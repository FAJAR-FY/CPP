#include<iostream.h>
#include<conio.h>
main()
{
      int a;
          int pilih;
    cout << "Nama   : FAJAR FEBRIYADI\n";
    cout << "Nisn   : ===============\n";
    cout << "SMKN 1 MANDAU\n";
    cout << "=======================================================================\n";
      cout<<"masukkan hari:";
      cin>>a;
      switch(a){

    case 1:cout<<"hari ke"<<a<<":Minggu";
    break;
    case 2:cout<<"hari ke"<<a<<":senin";
    break;
    case 3:cout<<"hari ke"<<a<<":selasa";
    break;
    case 4:cout<<"hari ke"<<a<<":rabu";
    break;
    case 5:cout<<"hari ke"<<a<<":kamis";
    break;
    case 6:cout<<"hari ke"<<a<<":jum'at";
    break;
    case 7:cout<<"hari ke"<<a<<":sabtu";
    break;
    default:cout<<"tidak terdapat bulan ke"<<a;}
    getch();
               
}
