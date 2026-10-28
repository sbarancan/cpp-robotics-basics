I know ( means not included, ] means included.
2. 3.5 radians would be a 1.5 equivalent. I go tit as a 3.5 radians not 3.5 directly. isn't 2pi 360? 
3. 340 degree left.
4. average of that should be a zero.  why 350 +10  gives wrong, I would say because those are angles, not scalars, so simple division is not defined for angles. 


CPP Arrays
double a[3] = {1.0, 2.0, 3.0}    //3 doubles 8 bytes each, 24 bytes

- dizi'yi fonksiyona direk verince, fonksiyon ilk elemanın adresini pointer alır, ama size bilgisi almaz bu yüzden size ile beraber verilir foo(double a[], int size)

std::vector fixes this, it's an array carrying its own size. v.size()


double a[3]   ---    almost never in new code, old C way
std::vector <double>   can change at runtime, default, size can vary
std::array <double, 3>    when you know the size will always be same



Öğrenilen konu: passing by const reference
&  reference -> no copy, use caller's vector directly, speed
const  the function promises not to change it, safety.

Neden wrap(double angle) için yapmıyoruz?   çünkü boyutu belli ve az?


Referans nedir? 
Referans var olan nesnenin yerince geçen ikinci bir isim'dir.
Reference is a second name for an existing object.

int x = 10;
int& r = x;    //r ile x aynı nesne.

referansa ilk değer vermek zorunludur.
double mean(const std::vector<double>& angles);
