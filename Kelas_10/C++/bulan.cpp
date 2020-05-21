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
      cout<<"masukkan bulan:";
      cin>>a;
      switch(a){
      
               case 1:cout<<"bulan ke"<<a<<":Januari";
               break;
               case 2:cout<<"bulan ke"<<a<<":Februari";
               break;
               case 3:cout<<"bulan ke"<<a<<":Maret";
               break;
               case 4:cout<<"bulan ke"<<a<<":April";
               break;
               case 5:cout<<"bulan ke"<<a<<":Mei";
               break;
               case 6:cout<<"bulan ke"<<a<<":Juni";
               break;
               case 7:cout<<"bulan ke"<<a<<":Juli";
               break;
               case 8:cout<<"bulan ke"<<a<<":Agustus";
               break;
               case 9:cout<<"bulan ke"<<a<<":September";
               break;
               case 10:cout<<"bulan ke"<<a<<":Oktober";
               break;
               case 11:cout<<"bulan ke"<<a<<":November";
               break;
               case 12:cout<<"bulan ke"<<a<<":Desember";
               break;
               default:cout<<"tidak terdapat bulan ke"<<a;}
               getch();
               
}
