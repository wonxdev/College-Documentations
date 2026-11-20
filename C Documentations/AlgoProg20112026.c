/* 
Dosen: Dr. Rhio Sutoyo S.Kom M.Sc 
Cornell Note-Taking System - Jadi ada struktur
Nggak perlu perfect

Bikin workflow

Thought process
Untuk setiap topik harus ada 5W+1H
ada Data, ada Hipotesa, ada Paper yang membentuk Thought Process


*/

/* 
Structure and Union 
Data type buat nyimpen bbrp macam jenis data (angka, kata, karakter)

* Identifier = Nama Variabel

Struct
* Kenapa? Memudahkan menyimpan data + lebih clean (organization, readability, easier passing, mixed data types)
        - Organized = Keeps related data together
        - Readability = Student.gpa > gpa1, gpa2 dst
        - Easier Passing = Bisa dipake di dalam function
            Pas manggil fungsi lebih simpel daripada call semua variabel
        - Mixed Data Type = Bisa macem2 data drpd pake array
    * Logically - Related

Grouping Variables 
Nested Struct - Nentuin mana yang struct mana yang nested?
    * Yang similiar / hubungannya dekat bisa digrouping

* Object Oriented Programming

* Struktur struct Gabisa di modify di runtime

Dev - Test - Deploy
    * Dev - Tugas Programmer
    * Test - Beta Testing, Bug Hunting, Solving
    * Deploy - Production, Sudah dipake user

*/

#include <stdio.h>
#include <string.h>

void swapFunction(char name[][200], int NIM[], double GPA[], int x, int y) {
    char nameTemp[200];
    int NIMTemp;
    double GPATemp;

    // Swap Name
    strcpy(nameTemp, name[x]);
    strcpy(name[x], name[y]);
    strcpy(name[y], nameTemp);

    // Swap NIM
    NIMTemp = NIM[x];
    NIM[x] = NIM[y];
    NIM[y] = NIMTemp;

    // Swap GPA
    GPATemp = GPA[x];
    GPA[x] = GPA[y];
    GPA[y] = GPATemp;
}

int main() {
    char name[3][200] = {"Fathan", "Regina", "Michael"};
    int NIM[3] = {101, 102, 103};
    double GPA[3] = {3.99, 3.98, 4.00};

    printf("%s %d %.2lf\n", name[0], NIM[0], GPA[0]);
    printf("%s %d %.2lf\n", name[1], NIM[1], GPA[1]);
    printf("%s %d %.2lf\n", name[2], NIM[2], GPA[2]);

    puts("");
    swapFunction(name, NIM, GPA, 0, 2);

    printf("%s %d %.2lf\n", name[0], NIM[0], GPA[0]);
    printf("%s %d %.2lf\n", name[1], NIM[1], GPA[1]);
    printf("%s %d %.2lf\n", name[2], NIM[2], GPA[2]);

    return 0;
}