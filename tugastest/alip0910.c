#include<stdio.h>
#include<stdlib.h>//gae command terminal
int n,a,ratarata,nilai_awal,akumulasi,pilihan;
char *matkul[]={"Pemrograman Dasar","Kalkulus         ","PTI              ","Orkom            "},nama[64],nim[64];
int main(){
    system("clear");//khusus os linux
    //system("cls");//khusus os windows
    printf("PROGRAM MENGHITUNG RATA RATA\n\n");
    printf("Masukkan Nama Mahasiswa                 : ");
    fgets(nama,sizeof(nama),stdin);
    printf("Masukkan 3 Angka Terakhir NIM           : ");
    fgets(nim,sizeof(nim),stdin);
    printf("Masukkan Banyak Data Yang Akan Di Input : ");
    scanf("%d",&n);
    akumulasi=0;
    a=0;
    printf("\n");
    for(int i=1;i<=n;i++){
        printf("Masukkan Nilai Mata Kuliah %s : ",matkul[a]);
        scanf("%d",&nilai_awal);
        a++;
        akumulasi=akumulasi+nilai_awal;
    }
    ratarata=akumulasi/n;
    system("clear");//khusus os linux
    //system("cls");//khusus os windows
    printf("Nama                : %s",nama);
    printf("NIM                 : 202110370311%s",nim);
    printf("Nilai Rata - Rata   : %d\n",ratarata );
    if(ratarata>=75){
        printf("Status              : LULUS");
    }else{
        printf("Status              : TIDAK LULUS");
    }
    printf("\n\n1. Hitung Kembali\n2. Keluar");
    scanf("%d",&pilihan);
    if(pilihan==1){
        main();
    }else{
        system("clear");
    }
}