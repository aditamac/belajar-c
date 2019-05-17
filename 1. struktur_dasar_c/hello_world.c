#include <stdio.h> // Mengakses fitur tambahan pada bahasa C (Standard Input/Output)
int main(void) /* - Kode int sebelum main() menandakan nilai kembalian atau hasil akhir dari function main()
                  - int singkatan dari integer
                  - Struktur main() sendiri pada dasarnya merupakan sebuah fungsi (function)
                  - Isi dari function ini diawali dan diakhiri dengan tanda kurung kurawal ” { ” dan ” } “ 
                */
{ // Di dalam tanda kurung inilah “isi” dari kode program penyusun fungsi main() ditulis
    printf("Hello, World!\n"); // Digunakan untuk menampilkan sesuatu ke layar, merupakan bagian dari stdio.h 
    return 0; /* - Return 0 artinya kembalikan nilai 0 (nol) ke sistem operasi yang menjalankan kode program ini
                 - Nilai 0 menandakan kode program berjalan normal dan tidak ada masalah (EXIT_SUCCESS)
              */
} // Kurung kurawal tutup