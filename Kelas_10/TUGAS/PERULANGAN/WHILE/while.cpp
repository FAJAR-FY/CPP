#include <iostream.h>
#include <conio.h>

/**
*gatewan.com
*Wawan Beneran
*Mencetak bilangan genap perulangan do...while
*/

int main()
{
int batas_akhir;
int i = 1;
cout<<"Jumlah perulangan : ";
cin>>batas_akhir;
do
{
if ( i % 2 == 0)
cout<<i<<" ";
i++;
}while (i<=batas_akhir);
getch();
}
