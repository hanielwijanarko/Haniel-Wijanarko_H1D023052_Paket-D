#include <stdio.h>

//Deklarasi struktur KHS
typedef struct KHS *alamat{
    alamat char[5] NIM;
    alamat float IP;
};

//Buat fungsi update IP Mahasiswa
void updateIP(){
    printf("masukan NIM: \n");
    printf("float");
}

//Buat fungsi cetak KHS
void printKHS(){
    printf("NIM");
    printf("IP");
}

//Buat main program
int main(){
    //Cetak KHS sebelum perubahan
    printf("Sebelum IP diperbarui: \n")
    printKHS();
    printf("\n");

//Ubah IP Mahasiswa
updateIP();

//Cetak KHS sesudah perubahan
printf("Setelah IP diperbarui: \n");
printKHS();

return 0;
}