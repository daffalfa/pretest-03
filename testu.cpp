#include <iostream>
using namespace std;
/*
int main() {
   int num = 10;
   cout << "Nilai num: " << num << endl;
   cout << "Alamat num: " << &num << endl;

   int* ptrToNum = &num;
   cout << "\nNilai ptrToNum: " << ptrToNum << endl;
   cout << "Alamat ptrToNum: " << &ptrToNum << endl;
   cout << "Nilai dari alamat di ptrToNum: " << *ptrToNum << endl;
}
4
*/
typedef struct {
 float panjang;
 float lebar;
} segiempat;

void input(segiempat *s) { }
float keliling(segiempat s) { }
float luas(segiempat s) { }
// panjang diagonal segiempat
float diagonal(segiempat s) { }
void print(segiempat s) { }

int main() {
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(*sg);
}
