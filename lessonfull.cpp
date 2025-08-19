// T?NG H?P L?P TR?NH C++ t? C� B?n �?n N�ng Cao
// 1. C� B?n
/* #include <iostream>          // Th� vi?n nh?p xu?t
using namespace std;

int main() {
    int x = 5;
    cout << "I am currently a junior at Drew uni starting to learn C++ Programming" + x;    // Xu?t d? li?u
    cin >> x ;
    return 0;
}  */
/*  �? Ch?y L?nh C++ Theo 2 b�?c sau: 
- B�?c 1: g? l?nh g++ t�n_file.cpp -o t�n_file.exe
- B�?c 2: ./t�n_file.exe
    �? c?p nh?t l?i ch?y l?i code c?ng t��ng t?:
- B�?c 1: g? l?nh g++ t�n_file.cpp -o t�n_file.exe
- B�?c 2: ./t�n_file.exe
==> K?t qu? 
L�U ?: .cpp l� m? ngu?n (code C++).
       .exe l� ch��ng tr?nh th?c thi (sau khi bi�n d?ch).
==> Kh�ng bao gi? �?t output -o tr�ng v?i input .cpp   */ 

// 2. Khai B�o Bi?n v� Ki?u D? Li?u
/* #include <iostream>      // Th� vi?n nh?p/xu?t
using namespace std;     // Kh�ng c?n ghi std:: tr�?c cout, cin
int main() {
    // Khai b�o bi?n
    int a = 10;                     // S? nguy�n
    float b = 3.5;                  // S? th?c, 4 bytes, �? ch�nh x�c ~7 ch? s?
    double c = 2.71828;             // S? th?c ch�nh x�c k�p, 8 bytes, ~15 ch? s?
    char d = 'T';                   // K? t?
    string str = "Xin ch�o b� Tin Tin nh�!";    // Chu?i k? t?
    bool isTinTin = true;           // Gi� tr? boolean (true/false)
    const double PI = 3.14159;      // H?ng s? s? th?c, kh�ng th? thay �?i
    // Xu?t gi� tr? ra m�n h?nh
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "d = " << d << ", str = " << str << ", isTinTin = " << isTinTin << endl;
    cout << "PI = " << PI << endl;
    return 0;  // K?t th�c ch��ng tr?nh
}
// Ch� th�ch: endl d�ng �? xu?ng d?ng(newline) t��ng t� nh� \n  */

// 3. To�n T?
/* #include <iostream>  // Th� vi?n chu?n cho input/output
using namespace std;

int main() {
    // ===============================
    // 1?? S? H?C (Arithmetic Operators)
    // ===============================
    // To�n t?: +, -, *, /, %, ++, --
    int x = 5, y = 2;

    cout << "x + y = " << (x + y) << endl;   // C?ng: 5 + 2 = 7
    cout << "x - y = " << (x - y) << endl;   // Tr?: 5 - 2 = 3
    cout << "x * y = " << (x * y) << endl;   // Nh�n: 5 * 2 = 10
    cout << "x / y = " << (x / y) << endl;   // Chia nguy�n: 5 / 2 = 2
    cout << "x % y = " << (x % y) << endl;   // Chia l?y d�: 5 % 2 = 1

    cout << "x++ = " << x++ << endl; // H?u t? ++: in x r?i m?i t�ng (5), x b�y gi? = 6
    cout << "++y = " << ++y << endl; // Ti?n t? ++: t�ng y tr�?c r?i in (3)
    cout << "x-- = " << x-- << endl; // H?u t? ++: in x r?i m?i gi?m (5), x b�y gi? = 6
    cout << "--y = " << --y << endl; // Ti?n t? ++: gi?m y tr�?c r?i in (3)

    // ===============================
    // 2?? SO S�NH (Comparison Operators)
    // ===============================
    // To�n t?: ==, !=, <, >, <=, >=
    if (x == y) {
        cout << "x b?ng y" << endl;  // Ki?m tra x c� b?ng y kh�ng
    }
    if (x != y) {
        cout << "x kh�c y" << endl;  // Ki?m tra x c� kh�c y kh�ng
    }
    if (x > y) {
        cout << "x l?n h�n y" << endl;
    }
    if (x < y) {
        cout << "x nh? h�n y" << endl;
    }
    if (x >= y) {
        cout << "x l?n h�n ho?c b?ng y" << endl;
    }
    if (x <= y) {
        cout << "x nh? h�n ho?c b?ng y" << endl;
    }

    // ===============================
    // 3?? LOGIC (Logical Operators)
    // ===============================
    // To�n t?: && (AND), || (OR), ! (NOT)
    if (x > 0 && y > 0) {   // AND: ��ng n?u x>0 **v�** y>0
        cout << "C? x v� y �?u d��ng" << endl;
    }

    if (x > 0 || y < 0) {   // OR: ��ng n?u x>0 **ho?c** y<0
        cout << "�t nh?t m?t �i?u ki?n ��ng" << endl;
    }

    if (!(x < 0)) {         // NOT: �?o gi� tr? �i?u ki?n, x<0 l� false ? !false = true
        cout << "x kh�ng �m" << endl;
    }

    return 0;
}  */

// 4. �i?u Ki?n
/* #include <iostream>
using namespace std;

int main() {
    // ===============================
    // 1?? C?U TR�C IF - ELSE
    // ===============================
    int x = -5; // V� d? gi� tr? x

    // C�u l?nh if ki?m tra �i?u ki?n
    if (x > 0) { 
        // N?u x l?n h�n 0 th? th?c hi?n kh?i l?nh n�y
        cout << "Duong" << endl;  // In ra "Duong" (d��ng)
    }
    else if (x == 0) {
        // N?u �i?u ki?n if tr�?c sai v� x b?ng 0
        cout << "Zero" << endl;   // In ra "Zero" (0)
    }
    else {
        // N?u t?t c? �i?u ki?n tr�n sai (x < 0)
        cout << "Am" << endl;     // In ra "Am" (�m)
    }

    // ===============================
    // 2?? C?U TR�C SWITCH - CASE
    // ===============================
    int day = 2; // V� d?: 1 = Monday, 2 = Tuesday, ...

    switch(day) {
        case 1: 
            // N?u day = 1, th?c hi?n kh?i l?nh n�y
            cout << "Mon" << endl;
            break;  // K?t th�c switch, kh�ng ch?y ti?p c�c case kh�c

        case 2: 
            // N?u day = 2
            cout << "Tue" << endl;
            break;  

        // B?n c� th? th�m case 3, 4, ... 7 cho c�c ng�y c?n l?i

        default: 
            // N?u day kh�ng kh?p v?i b?t k? case n�o
            cout << "Other" << endl;
    }

    return 0;
}   */

// 5. V?ng L?p
/* #include <iostream>
using namespace std;

int main() {
    // ===============================
    // 1?? V?NG L?P FOR
    // ===============================
    // C� ph�p: for(initialization; condition; update)
    // Th�?ng d�ng khi bi?t tr�?c s? l?n l?p
    cout << "Vong lap FOR: ";
    for (int i = 0; i < 10; i++) {
        // i = 0: kh?i t?o bi?n i
        // i < 10: �i?u ki?n l?p
        // i++: t�ng i sau m?i v?ng l?p
        cout << i << " ";  // in ra gi� tr? hi?n t?i c?a i
    }
    cout << endl;

    // ===============================
    // 2?? V?NG L?P WHILE
    // ===============================
    // C� ph�p: while(condition) { body }
    // L?p l?i **mi?n l� �i?u ki?n ��ng**
    int n = 5;  // V� d? gi� tr? n ban �?u
    cout << "Vong lap WHILE: ";
    while (n > 0) {
        cout << n << " ";  // in ra n hi?n t?i
        n--;               // gi?m n 1 ��n v? sau m?i v?ng
    }
    cout << endl;

    // ===============================
    // 3?? V?NG L?P DO-WHILE
    // ===============================
    // C� ph�p: do { body } while(condition)
    // Kh�c while: **th?c hi?n �t nh?t 1 l?n** tr�?c khi ki?m tra �i?u ki?n
    n = 3;  // reset n �? th? do-while
    cout << "Vong lap DO-WHILE: ";
    do {
        cout << n << " ";  // in ra n
        n--;               // gi?m n
    } while (n > 0);       // ki?m tra �i?u ki?n sau m?i l?n l?p
    cout << endl;

    return 0;
}  */

// 6. Nh?p xu?t D? Li?u
/* #include <iostream>   // Th� vi?n chu?n cho input/output
using namespace std;

int main() {
    // ===============================
    // 1?? KHAI B�O BI?N
    // ===============================
    int age;  // Khai b�o bi?n ki?u s? nguy�n �? l�u tu?i ng�?i d�ng

    // ===============================
    // 2?? NH?P D? LI?U (Input)
    // ===============================
    cout << "Nhap tuoi: "; // In ra th�ng b�o y�u c?u ng�?i d�ng nh?p tu?i
    cin >> age;             // Nh?n d? li?u t? b�n ph�m v� g�n v�o bi?n 'age'
    // L�u ?: n?u ng�?i d�ng nh?p gi� tr? kh�ng ph?i s? nguy�n ? x?y ra l?i input

    // ===============================
    // 3?? XU?T D? LI?U (Output)
    // ===============================
    cout << "Ban " << age << " tuoi." << endl;
    // Gi?i th�ch:
    // "Ban "           -> chu?i c? �?nh in ra
    // << age <<         -> gi� tr? bi?n age ��?c n?i v�o chu?i
    // " tuoi."         -> chu?i c? �?nh ti?p theo
    // << endl           -> xu?ng d?ng v� flush buffer

    return 0;  // K?t th�c ch��ng tr?nh
} */

// 7. H�m
/* #include <iostream>   // Th� vi?n chu?n cho input/output
using namespace std;
// ===============================
// 1?? �?NH NGH?A H�M (Function Definition)
// ===============================
// C� ph�p: <ki?u tr? v?> <t�n h�m>(<tham s?>) { body }
// H�m 'cong' nh?n 2 s? nguy�n v� tr? v? t?ng c?a ch�ng
int cong(int a, int b) {
    // a, b l� c�c tham s? �?u v�o c?a h�m
    return a + b;  // Tr? v? k?t qu? l� t?ng c?a a v� b
}

// ===============================
// 2?? H�M MAIN
// ===============================
int main() {
    // G?i h�m cong v?i tham s? 3 v� 4
    // H�m s? tr? v? 3 + 4 = 7
    cout << cong(3, 4) << endl;  // In k?t qu? ra m�n h?nh
    return 0;  // K?t th�c ch��ng tr?nh, ch��ng tr?nh ch?y th�nh c�ng
}  */

// 8. M?ng & Chu?i
/* #include <iostream>   // Th� vi?n chu?n cho input/output
#include <string>     // Th� vi?n cho ki?u d? li?u string
using namespace std;

int main() {
    // ===============================
    // 1?? M?NG (Array)
    // ===============================
    // Khai b�o m?t m?ng s? nguy�n g?m 5 ph?n t?
    int arr[5] = {1, 2, 3, 4, 5};

    // Truy c?p ph?n t? �?u ti�n c?a m?ng
    cout << "Phan tu dau tien cua arr: " << arr[0] << endl;  
    // arr[0] = 1
    // L�u ?: ch? s? m?ng trong C++ b?t �?u t? 0
    // arr[1] = 2, arr[2] = 3, ...

    // ===============================
    // 2?? CHU?I (String)
    // ===============================
    // Khai b�o chu?i k? t?
    string name = "Tin";

    // L?y �? d�i chu?i
    cout << "Do dai chuoi name: " << name.size() << endl;  
    // name.size() = 3 (v? "Tin" c� 3 k? t?)

    // Truy c?p k? t? �?u ti�n trong chu?i
    cout << "Ky tu dau tien cua name: " << name[0] << endl;  
    // name[0] = 'T'

    return 0;  // K?t th�c ch��ng tr?nh
}  */

// 9. Con tr?
/* #include <iostream>
using namespace std;

int main() {
    // ===============================
    // 1?? KHAI B�O BI?N TH�NG TH�?NG
    // ===============================
    int a = 10;  // Bi?n s? nguy�n a, l�u gi� tr? 10

    // ===============================
    // 2?? KHAI B�O CON TR? (Pointer)
    // ===============================
    int *p = &a;  // p l� con tr? ki?u int, tr? �?n �?a ch? c?a a
                   // &a ? �?a ch? c?a bi?n a
                   // int *p ? khai b�o p l� con tr? �?n int

    // ===============================
    // 3?? TRUY C?P GI� TR? QUA CON TR?
    // ===============================
    cout << "Gia tri cua a = " << *p << endl;
    // *p ? dereference (truy c?p gi� tr? m� con tr? p �ang tr? t?i), N?u a = 10, *p = 10
    // K?t qu?: 10

    // ===============================
    // 4?? IN �?A CH? C?A BI?N
    // ===============================
    cout << "Dia chi cua a = " << p << endl;
    // p l�u �?a ch? c?a a

    return 0;  // K?t th�c ch��ng tr?nh
} */

// 10. Struct & Class
/* #include <iostream>
#include <string>   // Th� vi?n cho ki?u string
using namespace std;
// ===============================
// 1?? C?U TR�C (Struct)
// ===============================
// Struct d�ng �? nh�m c�c bi?n li�n quan th�nh m?t ki?u d? li?u
struct SinhVien {
    string ten;   // T�n sinh vi�n
    int tuoi;     // Tu?i sinh vi�n
};

// ===============================
// 2?? L?P (Class)
// ===============================
// Class d�ng �? t?o �?i t�?ng v?i bi?n (thu?c t�nh) v� h�m (ph��ng th?c)
class Animal {
public:  // Ph?n public c� th? truy c?p t? b�n ngo�i
    string name;   // Thu?c t�nh: t�n con v?t

    // Ph��ng th?c (method)
    void speak() {    //void tr�?c t�n h�m - H�m ko tr? v? gi� tr? ; void* - con tr? �?n v�ng nh? b?t k? d? li?u n�o ; void trong tham s? - h�m ko nh?n tham s?
        cout << "Hello, I am " << name << endl;  
        // Khi g?i, in ra c�u ch�o k�m t�n con v?t
    }
};

int main() {
    // ===============================
    // S? D?NG STRUCT
    // ===============================
    SinhVien sv;           // T?o bi?n sv ki?u SinhVien
    sv.ten = "Tin";        // G�n t�n
    sv.tuoi = 20;          // G�n tu?i
    cout << sv.ten << " " << sv.tuoi << endl;

    // ===============================
    // S? D?NG CLASS
    // ===============================
    Animal dog;            // T?o �?i t�?ng dog ki?u Animal
    dog.name = "Buddy";    // G�n t�n
    dog.speak();           // G?i ph��ng th?c speak() ? in ra: Hello, I am Buddy

    return 0;
}  */

// 11. T�nh th?a k? v� �a h?nh
/* #include <iostream>
using namespace std;

// ===============================
// 1?? L?P C� S? (Base Class)
// ===============================
class Animal {
public:
    // H�m ?o (virtual function)
    // Gi�p cho c�c l?p k? th?a c� th? **ghi ��** (override) h�nh vi
    virtual void sound() {  
        cout << "Animal sound" << endl;  
    }
};

// ===============================
// 2?? L?P K? TH?A (Derived Class)
// ===============================
class Dog : public Animal {  // Dog k? th?a t? Animal
public:
    // Ghi �� h�m sound() c?a l?p c� s?
    void sound() override {  
        // t? kh�a 'override' gi�p compiler ki?m tra ��ng ghi ��
        cout << "Woof" << endl;  
    }
};

int main() {
    // ===============================
    // 3?? T?O �?I T�?NG
    // ===============================
    Animal a;   // �?i t�?ng l?p c� s?
    Dog d;      // �?i t�?ng l?p k? th?a

    // G?i h�m sound()
    a.sound();  // In ra: Animal sound
    d.sound();  // In ra: Woof

    // ===============================
    // 4?? S? D?NG POLYMORPHISM (�A H?NH)
    // ===============================
    Animal* ptr = &d;   // con tr? l?p c� s? tr? �?n �?i t�?ng l?p k? th?a
    ptr->sound();       // In ra: Woof (nh? virtual function)

    return 0;
}  */

// 12. Th� vi?n chu?n(STL)
/* #include <iostream>
#include <vector>    // Th� vi?n cho vector
#include <map>       // Th� vi?n cho map
#include <algorithm> // Th� vi?n cho c�c thu?t to�n STL (sort, find, ...) 
using namespace std;

int main() {
    // ===============================
    // 1?? VECTOR (M?ng �?ng)
    // ===============================
    // Khai b�o vector s? nguy�n v� kh?i t?o gi� tr?
    vector<int> v = {1, 2, 3};  

    // Th�m ph?n t? v�o cu?i vector
    v.push_back(4);  
    // v b�y gi? l�: {1, 2, 3, 4}

    // Duy?t vector v� in ra c�c ph?n t?
    cout << "Vector v: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // ===============================
    // 2?? MAP (B?n �?, key-value)
    // ===============================
    // Khai b�o map v?i key ki?u string, value ki?u int
    map<string, int> m;

    // G�n gi� tr? cho key "Tin"
    m["Tin"] = 20;

    // Truy xu?t gi� tr? theo key
    cout << "Gia tri cua m[\"Tin\"]: " << m["Tin"] << endl;

    // Duy?t map
    cout << "Cac phan tu trong map:" << endl;
    for(auto it = m.begin(); it != m.end(); ++it) {     
        cout << it->first << " : " << it->second << endl; //it->first -->key(Duy?t map iterator), it->second-->value
    }

    return 0;
}   */

// 13. X? L? File
/* #include <iostream>   // Th� vi?n chu?n cho input/output
#include <fstream>    // Th� vi?n cho �?c/ghi file
#include <string>     // Th� vi?n cho ki?u string
using namespace std;
int main() {
    // ===============================
    // 1?? GHI FILE (ofstream)
    // ===============================
    // T?o �?i t�?ng ofstream �? ghi v�o file "data.txt"
    ofstream out("data.txt");  

    if (!out) {  // Ki?m tra xem file c� m? th�nh c�ng kh�ng
        cerr << "Khong the mo file de ghi!" << endl;
        return 1;
    }

    // Ghi d? li?u v�o file
    out << "Hello file\n";  // Th�m d?ng "Hello file" v�o file
    out << "Day la dong thu 2\n"; // Ghi th�m d?ng th? 2

    // ��ng file sau khi ghi xong
    out.close();

    // ===============================
    // 2?? �?C FILE (ifstream)
    // ===============================
    // T?o �?i t�?ng ifstream �? �?c file "data.txt"
    ifstream in("data.txt");  

    if (!in) {  // Ki?m tra xem file c� m? th�nh c�ng kh�ng
        cerr << "Khong the mo file de doc!" << endl;
        return 1;
    }

    string line;  // Bi?n l�u t?ng d?ng �?c ��?c
    cout << "Noi dung file data.txt:\n";
    // �?c t?ng d?ng trong file cho �?n khi h?t
    while (getline(in, line)) {
        cout << line << endl;  // In t?ng d?ng ra m�n h?nh
    }

    // ��ng file sau khi �?c xong
    in.close();

    return 0;  // K?t th�c ch��ng tr?nh
}  */

// 14. Ngo?i L?
/* #include <iostream>
using namespace std;

int main() {
    // ===============================
    // 1?? TRY BLOCK
    // ===============================
    // Kh?i try d�ng �? "th?" ch?y c�c c�u l?nh c� th? g�y l?i
    try {
        // N�m (throw) m?t ngo?i l?
        throw 123;  
        // Khi throw ��?c g?i, ch��ng tr?nh s? nh?y ngay sang catch t��ng ?ng
        // 123 l� gi� tr? c?a ngo?i l?, ki?u int
    }

    // ===============================
    // 2?? CATCH BLOCK
    // ===============================
    // Kh?i catch d�ng �? "b?t" ngo?i l?
    catch (int e) {
        // int e ? bi?n l�u gi� tr? ngo?i l? ��?c n�m ra
        cout << "Loi: " << e << endl;  // In ra l?i: 123
    }

    // ===============================
    // 3?? K?T TH�C
    // ===============================
    cout << "Chuong trinh tiep tuc chay binh thuong." << endl;

    return 0;
}  */

// ---------------------------------------------------------End--------------------------------------------------------------






