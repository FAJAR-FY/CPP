#include<iostream.h>
#include<conio.h>

main()
{
    system("color A");
    int pilih;
    char boleh;
    do
{
    cout << "\nNama   : FAJAR FEBRIYADI\f\n\a";
    cout << "Nisn   : ===============\n";
    cout << "SMKN 1 MANDAU\n";
    cout << "===================================================\n";
    cout<<"Rumus bangun-bangun\n\n";
    cout<<"1."<<"\t"<<"Luas segitiga\n";
    cout<<"2."<<"\t"<<"Luas persegi panjang\n";
    cout<<"3."<<"\t"<<"Luas persegi\n";
    cout<<"4."<<"\t"<<"Luas lingkaran\n";
    cout<<"5."<<"\t"<<"Luas layang-layang atau belah ketupat\n";
    cout<<"6."<<"\t"<<"Luas trapesium\n";
    cout<<"7."<<"\t"<<"Luas jajar genjang\n";
    cout<<"8."<<"\t"<<"Volume balok\n";
    cout<<"9."<<"\t"<<"Volume kubus\n";
    cout<<"10."<<"\t"<<"Volume bola\n";
    cout<<"11."<<"\t"<<"Volume tabung\n";
    cout<<"12."<<"\t"<<"Volume kerucut\n";
    cout<<"13."<<"\t"<<"Volume limas persegi\n";
    cout<<"Pilih Rumus anda butuhkan:";
    cin>>pilih;
    cout<<endl;
    switch(pilih)
     {
     case 1:
     system("color B");
     float x,y,z;
     cout<<"masukan nilai alas\t\a:";cin>>x;
     cout<<"masukan nilai tinggi\t\a:";cin>>y;
     z=x*y/2;
     cout<<"luas segitiga\t\a:"<<z<<endl;
     break;
     case 2:
     system("color C");
     float a,b,hasil;
     cout<<"masukan nilai panjang\t\a:";cin>>a;
     cout<<"masukan nilai lebar\t\a:";cin>>b;
     hasil=a*b;
     cout<<"luas persegi panjang\t\a:"<<hasil<<endl;
     break;
     case 3:
     system("color D");
     float dsfc,brt;
     cout<<"masukan nilai sisi\t\a:";cin>>dsfc;
     brt=dsfc*dsfc;
     cout<<"luas persegi\t\a:"<<brt<<endl;
     break;
     case 4:
     system("color E");
     float npp,mkk,lpp;
     cout<<"masukan nilai jari-jari\t\a:";cin>>mkk;
     lpp=3.14*mkk*mkk;
     cout<<"luas lingkaran\t\a:"<<lpp<<endl;
     break;
     case 5:
     system("color F");
     float e,r,t;
     cout<<"masukan nilai diagonal 1\t\a:";cin>>e;
     cout<<"masukan nilai diagonal 2\t\a:";cin>>r;
     t=e*r/2;
     cout<<"luas layang-layang\t\a:"<<t<<endl;
     break;
     case 6:
     system("color 1");
     float lo,y7,op,ns;
     cout<<"masukan nilai alas\t\a:";cin>>lo;
     cout<<"masukan nilai atas\t\a:";cin>>y7;
     cout<<"masukan nilai tinggi\t\a:";cin>>op;
     ns=(lo+y7)*op/2;
     cout<<"luas trapesium\t\a:"<<ns<<endl;
     break;
     case 7:
     system("color 2");
     float as,df,gh;
     cout<<"masukan nilai alas\t\a:";cin>>as;
     cout<<"masukan nilai tinggi\t\a:";cin>>df;
     gh=as*df;
     cout<<"luas jajar genjang\t\a:"<<gh<<endl;
     break;
     case 8:
     system("color 3");
     float zx,cv,bn,m;
     cout<<"masukan nilai panjang\t\a:";cin>>zx;
     cout<<"masukan nilai lebar\t\a:";cin>>cv;
     cout<<"masukan nilai tinggi\t\a:";cin>>bn;
     m=zx*cv*bn;
     cout<<"volume balok\t\a:"<<m<<endl;
     break;
     case 9:
     system("color 4");
     float q,w;
     cout<<"masukan nilai rusuk\t\a:";cin>>q;
     w=q*q*q;
     cout<<"volume kubus\t\a:"<<w<<endl;
     break;
     case 10:
     system("color 5");
     float ure,jty;
     cout<<"masukan nilai jari-jari bola\t\a:";cin>>ure;
     jty=1.33*3.14*ure*ure*ure;
     cout<<"Volume bola\t\a"<<jty<<endl;
     break;
     case 11:
     system("color 6");
     float rret,ttyu,ttru;
     cout<<"masukan nilai jari-jari alas\t\a:";cin>>rret;
     cout<<"masukan nilai tinggi tabung\t\a:";cin>>ttyu;
     ttru=3.14*rret*rret*ttyu;
     cout<<"Volume tabung\t\a"<<ttru<<endl;
     break;
     case 12:
     system("color 7");
     float qwet,rsad,kdfl;
     cout<<"masukan nilai jari-jari alas\t\a:";cin>>qwet;
     cout<<"masukan nilai tinggi\t\a:";cin>>rsad;
     kdfl=3.14*qwet*qwet*rsad/3;
     cout<<"Volume kerucut\t\a:"<<kdfl<<endl;
     break;
     case 13:
     system("color 8");
     float nvdj,lsdp,kafn;
     cout<<"masukan nilai luas alas (sisi alas)\t\a:";cin>>nvdj;
     cout<<"masukan nilai tinggi\t\a:";cin>>lsdp;
     kafn=nvdj*nvdj*lsdp/3;
     cout<<"Volume limas segitiga\t:"<<kafn<<endl<<endl;
}
     system("color A");
     cout<<"\nApakah anda mau mengulang program ini ???\a:"<<endl;
     cout<<"Silahkan pilih pilihan anda(Y/T)";cin>>boleh;
     }
     while(boleh=='Y'|| boleh == 'y');
     cout<<"TERIMA KASIH TELAH MEMBUKA DAN MENJALANKAN PROGRAM :)\n\a"<<endl;
     getch();
     system("pause");
}
     
