/*
Nama: Muhammad Daffa Alfarizqi
Kelas: A
NPM: 140810180039
Deskripsi:pretest-03
*/

#include<iostream>
#include<string>
using namespace std;

//sorting struct

struct r_mhs
{
    char npm[14];
    char nama[40];
    float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n);
{
    cout<<"input jumlah data: ";
    cin>>n;
}
void inputMhs(larikMhs& mhs, int n);
{
    for(int i=0; i<n; i++)
    {
        cout<<"Masukkan nama:";
        cin.ignore();
        getline(cin,mhs[i].nama;);
        cout<<"Masukkan NPM:";
        cin>>mhs[i].npm;
        cout<<"masukkan ipk:";
        cin>>mhs[i].ipk;

    }
}
void cetakMhs(larikMhs mhs, int n);
{
    cout<<"Data Mahasiswa"<<endl;

    for(int=o;i<n;i++)
    {
         cout<<i<<mhs[i].npm<<"\t"<<mhs[i].ipk<<"\n";
    }
}
void sortNPM(larikMhs& mhs, int n);
{

}


main()
{
    r_mhs larikMhs;
    int n;
     banyakDAta(n);
     inputMhs(larikMhs,n);
     cetahMhs(larikMhs,n);

}
