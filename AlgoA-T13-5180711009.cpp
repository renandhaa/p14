#include<iostream>
#include<string>
using namespace ::std;
main (){
int kd,pri,jml,tot,byr,kbl;
string kode,memb,nama;

cout<<"Jika Member mendapat diskon apakah anda member atau tidak : ";cin>>memb;
if(memb=="y")
{cout<<"input kode :";cin>>kode;
if(kode=="A001"){cout<<"Nama   :Bayu";}
else

if(kode=="A002"){cout<<"Nama   :Irvan";}
else

if(kode=="A003"){cout<<"Nama   :Susiati";}
else

if(kode=="A007"){cout<<"Nama   :Diana";}
else

if(kode=="A008"){cout<<"Nama   :Roni";}
else

cout<<"Menu Makanan        Harga"<<endl;
cout<<"1. AYAM GORENG        Rp. 10.000"<<endl;
cout<<"2. NASI GORENG        Rp.  8.000"<<endl;
cout<<"3. MIE PANGSIT        Rp. 10.000"<<endl;
cout<<'\n'<<"MASUKKAN PILIHAN ANDA :";
cin>>kd;
    switch (kd){
    case 1:
        cout<<'\n'<<"AYAM GORENG"<<endl;
        pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";

        break;
    case 2:
        cout<<'\n'<<"NASI GORENG"<<endl;
            pri=8000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";

        break;
    case 3:
        cout<<'\n'<<"MIE PANGSIT"<<endl;
            pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";

        break;

    default:
    cout<<"Kode yang anda masukkan tidak ada";
    }
    }
    return 0;
}
