//Muhammad Iqbal Anandra
//2217051091

#include <iostream>
#include <stdio.h>	//karena getchar masuk ke library itu
using namespace std;
int main(){

string nama, npm, kelas, jurusan;

cout<<"Masukkan Nama		:";
getline (cin, nama);

cout<<"Masukkan NPM		:";
cin>>npm;

cout<<"Masukkan Kelas		:";
cin>>kelas;
cout<<"Masukkan Jurusan	:";

getchar();
getline (cin, jurusan);		//getline kedua kalinya tidak bisa(?)


cout<<"\n"<<"Outputnya Adalah..."<<"\n"<<"Nama		:"<<nama<<"\n"<<"NPM		:"<<npm<<"\n"<<"Kelas		:"<<kelas<<"\n"<<"Jurusan		:"<<jurusan;

}
