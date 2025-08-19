// T?NG H?P L?P TR?NH C++ t? Cõ B?n ð?n Nâng Cao
// 1. Cõ B?n
/* #include <iostream>          // Thý vi?n nh?p xu?t
using namespace std;

int main() {
    int x = 5;
    cout << "I am currently a junior at Drew uni starting to learn C++ Programming" + x;    // Xu?t d? li?u
    cin >> x ;
    return 0;
}  */
/*  Ð? Ch?y L?nh C++ Theo 2 bý?c sau: 
- Bý?c 1: g? l?nh g++ tên_file.cpp -o tên_file.exe
- Bý?c 2: ./tên_file.exe
    Ð? c?p nh?t l?i ch?y l?i code c?ng týõng t?:
- Bý?c 1: g? l?nh g++ tên_file.cpp -o tên_file.exe
- Bý?c 2: ./tên_file.exe
==> K?t qu? 
LÝU ?: .cpp là m? ngu?n (code C++).
       .exe là chýõng tr?nh th?c thi (sau khi biên d?ch).
==> Không bao gi? ð?t output -o trùng v?i input .cpp   */ 

// 2. Khai Báo Bi?n và Ki?u D? Li?u
/* #include <iostream>      // Thý vi?n nh?p/xu?t
using namespace std;     // Không c?n ghi std:: trý?c cout, cin
int main() {
    // Khai báo bi?n
    int a = 10;                     // S? nguyên
    float b = 3.5;                  // S? th?c, 4 bytes, ð? chính xác ~7 ch? s?
    double c = 2.71828;             // S? th?c chính xác kép, 8 bytes, ~15 ch? s?
    char d = 'T';                   // K? t?
    string str = "Xin chào bé Tin Tin nhé!";    // Chu?i k? t?
    bool isTinTin = true;           // Giá tr? boolean (true/false)
    const double PI = 3.14159;      // H?ng s? s? th?c, không th? thay ð?i
    // Xu?t giá tr? ra màn h?nh
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "d = " << d << ", str = " << str << ", isTinTin = " << isTinTin << endl;
    cout << "PI = " << PI << endl;
    return 0;  // K?t thúc chýõng tr?nh
}
// Chú thích: endl dùng ð? xu?ng d?ng(newline) týõng tý nhý \n  */

// 3. Toán T?
/* #include <iostream>  // Thý vi?n chu?n cho input/output
using namespace std;

int main() {
    // ===============================
    // 1?? S? H?C (Arithmetic Operators)
    // ===============================
    // Toán t?: +, -, *, /, %, ++, --
    int x = 5, y = 2;

    cout << "x + y = " << (x + y) << endl;   // C?ng: 5 + 2 = 7
    cout << "x - y = " << (x - y) << endl;   // Tr?: 5 - 2 = 3
    cout << "x * y = " << (x * y) << endl;   // Nhân: 5 * 2 = 10
    cout << "x / y = " << (x / y) << endl;   // Chia nguyên: 5 / 2 = 2
    cout << "x % y = " << (x % y) << endl;   // Chia l?y dý: 5 % 2 = 1

    cout << "x++ = " << x++ << endl; // H?u t? ++: in x r?i m?i tãng (5), x bây gi? = 6
    cout << "++y = " << ++y << endl; // Ti?n t? ++: tãng y trý?c r?i in (3)
    cout << "x-- = " << x-- << endl; // H?u t? ++: in x r?i m?i gi?m (5), x bây gi? = 6
    cout << "--y = " << --y << endl; // Ti?n t? ++: gi?m y trý?c r?i in (3)

    // ===============================
    // 2?? SO SÁNH (Comparison Operators)
    // ===============================
    // Toán t?: ==, !=, <, >, <=, >=
    if (x == y) {
        cout << "x b?ng y" << endl;  // Ki?m tra x có b?ng y không
    }
    if (x != y) {
        cout << "x khác y" << endl;  // Ki?m tra x có khác y không
    }
    if (x > y) {
        cout << "x l?n hõn y" << endl;
    }
    if (x < y) {
        cout << "x nh? hõn y" << endl;
    }
    if (x >= y) {
        cout << "x l?n hõn ho?c b?ng y" << endl;
    }
    if (x <= y) {
        cout << "x nh? hõn ho?c b?ng y" << endl;
    }

    // ===============================
    // 3?? LOGIC (Logical Operators)
    // ===============================
    // Toán t?: && (AND), || (OR), ! (NOT)
    if (x > 0 && y > 0) {   // AND: ðúng n?u x>0 **và** y>0
        cout << "C? x và y ð?u dýõng" << endl;
    }

    if (x > 0 || y < 0) {   // OR: ðúng n?u x>0 **ho?c** y<0
        cout << "Ít nh?t m?t ði?u ki?n ðúng" << endl;
    }

    if (!(x < 0)) {         // NOT: ð?o giá tr? ði?u ki?n, x<0 là false ? !false = true
        cout << "x không âm" << endl;
    }

    return 0;
}  */

// 4. Ði?u Ki?n
/* #include <iostream>
using namespace std;

int main() {
    // ===============================
    // 1?? C?U TRÚC IF - ELSE
    // ===============================
    int x = -5; // Ví d? giá tr? x

    // Câu l?nh if ki?m tra ði?u ki?n
    if (x > 0) { 
        // N?u x l?n hõn 0 th? th?c hi?n kh?i l?nh này
        cout << "Duong" << endl;  // In ra "Duong" (dýõng)
    }
    else if (x == 0) {
        // N?u ði?u ki?n if trý?c sai và x b?ng 0
        cout << "Zero" << endl;   // In ra "Zero" (0)
    }
    else {
        // N?u t?t c? ði?u ki?n trên sai (x < 0)
        cout << "Am" << endl;     // In ra "Am" (âm)
    }

    // ===============================
    // 2?? C?U TRÚC SWITCH - CASE
    // ===============================
    int day = 2; // Ví d?: 1 = Monday, 2 = Tuesday, ...

    switch(day) {
        case 1: 
            // N?u day = 1, th?c hi?n kh?i l?nh này
            cout << "Mon" << endl;
            break;  // K?t thúc switch, không ch?y ti?p các case khác

        case 2: 
            // N?u day = 2
            cout << "Tue" << endl;
            break;  

        // B?n có th? thêm case 3, 4, ... 7 cho các ngày c?n l?i

        default: 
            // N?u day không kh?p v?i b?t k? case nào
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
    // Cú pháp: for(initialization; condition; update)
    // Thý?ng dùng khi bi?t trý?c s? l?n l?p
    cout << "Vong lap FOR: ";
    for (int i = 0; i < 10; i++) {
        // i = 0: kh?i t?o bi?n i
        // i < 10: ði?u ki?n l?p
        // i++: tãng i sau m?i v?ng l?p
        cout << i << " ";  // in ra giá tr? hi?n t?i c?a i
    }
    cout << endl;

    // ===============================
    // 2?? V?NG L?P WHILE
    // ===============================
    // Cú pháp: while(condition) { body }
    // L?p l?i **mi?n là ði?u ki?n ðúng**
    int n = 5;  // Ví d? giá tr? n ban ð?u
    cout << "Vong lap WHILE: ";
    while (n > 0) {
        cout << n << " ";  // in ra n hi?n t?i
        n--;               // gi?m n 1 ðõn v? sau m?i v?ng
    }
    cout << endl;

    // ===============================
    // 3?? V?NG L?P DO-WHILE
    // ===============================
    // Cú pháp: do { body } while(condition)
    // Khác while: **th?c hi?n ít nh?t 1 l?n** trý?c khi ki?m tra ði?u ki?n
    n = 3;  // reset n ð? th? do-while
    cout << "Vong lap DO-WHILE: ";
    do {
        cout << n << " ";  // in ra n
        n--;               // gi?m n
    } while (n > 0);       // ki?m tra ði?u ki?n sau m?i l?n l?p
    cout << endl;

    return 0;
}  */

// 6. Nh?p xu?t D? Li?u
/* #include <iostream>   // Thý vi?n chu?n cho input/output
using namespace std;

int main() {
    // ===============================
    // 1?? KHAI BÁO BI?N
    // ===============================
    int age;  // Khai báo bi?n ki?u s? nguyên ð? lýu tu?i ngý?i dùng

    // ===============================
    // 2?? NH?P D? LI?U (Input)
    // ===============================
    cout << "Nhap tuoi: "; // In ra thông báo yêu c?u ngý?i dùng nh?p tu?i
    cin >> age;             // Nh?n d? li?u t? bàn phím và gán vào bi?n 'age'
    // Lýu ?: n?u ngý?i dùng nh?p giá tr? không ph?i s? nguyên ? x?y ra l?i input

    // ===============================
    // 3?? XU?T D? LI?U (Output)
    // ===============================
    cout << "Ban " << age << " tuoi." << endl;
    // Gi?i thích:
    // "Ban "           -> chu?i c? ð?nh in ra
    // << age <<         -> giá tr? bi?n age ðý?c n?i vào chu?i
    // " tuoi."         -> chu?i c? ð?nh ti?p theo
    // << endl           -> xu?ng d?ng và flush buffer

    return 0;  // K?t thúc chýõng tr?nh
} */

// 7. Hàm
/* #include <iostream>   // Thý vi?n chu?n cho input/output
using namespace std;
// ===============================
// 1?? Ð?NH NGH?A HÀM (Function Definition)
// ===============================
// Cú pháp: <ki?u tr? v?> <tên hàm>(<tham s?>) { body }
// Hàm 'cong' nh?n 2 s? nguyên và tr? v? t?ng c?a chúng
int cong(int a, int b) {
    // a, b là các tham s? ð?u vào c?a hàm
    return a + b;  // Tr? v? k?t qu? là t?ng c?a a và b
}

// ===============================
// 2?? HÀM MAIN
// ===============================
int main() {
    // G?i hàm cong v?i tham s? 3 và 4
    // Hàm s? tr? v? 3 + 4 = 7
    cout << cong(3, 4) << endl;  // In k?t qu? ra màn h?nh
    return 0;  // K?t thúc chýõng tr?nh, chýõng tr?nh ch?y thành công
}  */

// 8. M?ng & Chu?i
/* #include <iostream>   // Thý vi?n chu?n cho input/output
#include <string>     // Thý vi?n cho ki?u d? li?u string
using namespace std;

int main() {
    // ===============================
    // 1?? M?NG (Array)
    // ===============================
    // Khai báo m?t m?ng s? nguyên g?m 5 ph?n t?
    int arr[5] = {1, 2, 3, 4, 5};

    // Truy c?p ph?n t? ð?u tiên c?a m?ng
    cout << "Phan tu dau tien cua arr: " << arr[0] << endl;  
    // arr[0] = 1
    // Lýu ?: ch? s? m?ng trong C++ b?t ð?u t? 0
    // arr[1] = 2, arr[2] = 3, ...

    // ===============================
    // 2?? CHU?I (String)
    // ===============================
    // Khai báo chu?i k? t?
    string name = "Tin";

    // L?y ð? dài chu?i
    cout << "Do dai chuoi name: " << name.size() << endl;  
    // name.size() = 3 (v? "Tin" có 3 k? t?)

    // Truy c?p k? t? ð?u tiên trong chu?i
    cout << "Ky tu dau tien cua name: " << name[0] << endl;  
    // name[0] = 'T'

    return 0;  // K?t thúc chýõng tr?nh
}  */

// 9. Con tr?
/* #include <iostream>
using namespace std;

int main() {
    // ===============================
    // 1?? KHAI BÁO BI?N THÔNG THÝ?NG
    // ===============================
    int a = 10;  // Bi?n s? nguyên a, lýu giá tr? 10

    // ===============================
    // 2?? KHAI BÁO CON TR? (Pointer)
    // ===============================
    int *p = &a;  // p là con tr? ki?u int, tr? ð?n ð?a ch? c?a a
                   // &a ? ð?a ch? c?a bi?n a
                   // int *p ? khai báo p là con tr? ð?n int

    // ===============================
    // 3?? TRUY C?P GIÁ TR? QUA CON TR?
    // ===============================
    cout << "Gia tri cua a = " << *p << endl;
    // *p ? dereference (truy c?p giá tr? mà con tr? p ðang tr? t?i), N?u a = 10, *p = 10
    // K?t qu?: 10

    // ===============================
    // 4?? IN Ð?A CH? C?A BI?N
    // ===============================
    cout << "Dia chi cua a = " << p << endl;
    // p lýu ð?a ch? c?a a

    return 0;  // K?t thúc chýõng tr?nh
} */

// 10. Struct & Class
/* #include <iostream>
#include <string>   // Thý vi?n cho ki?u string
using namespace std;
// ===============================
// 1?? C?U TRÚC (Struct)
// ===============================
// Struct dùng ð? nhóm các bi?n liên quan thành m?t ki?u d? li?u
struct SinhVien {
    string ten;   // Tên sinh viên
    int tuoi;     // Tu?i sinh viên
};

// ===============================
// 2?? L?P (Class)
// ===============================
// Class dùng ð? t?o ð?i tý?ng v?i bi?n (thu?c tính) và hàm (phýõng th?c)
class Animal {
public:  // Ph?n public có th? truy c?p t? bên ngoài
    string name;   // Thu?c tính: tên con v?t

    // Phýõng th?c (method)
    void speak() {    //void trý?c tên hàm - Hàm ko tr? v? giá tr? ; void* - con tr? ð?n vùng nh? b?t k? d? li?u nào ; void trong tham s? - hàm ko nh?n tham s?
        cout << "Hello, I am " << name << endl;  
        // Khi g?i, in ra câu chào kèm tên con v?t
    }
};

int main() {
    // ===============================
    // S? D?NG STRUCT
    // ===============================
    SinhVien sv;           // T?o bi?n sv ki?u SinhVien
    sv.ten = "Tin";        // Gán tên
    sv.tuoi = 20;          // Gán tu?i
    cout << sv.ten << " " << sv.tuoi << endl;

    // ===============================
    // S? D?NG CLASS
    // ===============================
    Animal dog;            // T?o ð?i tý?ng dog ki?u Animal
    dog.name = "Buddy";    // Gán tên
    dog.speak();           // G?i phýõng th?c speak() ? in ra: Hello, I am Buddy

    return 0;
}  */

// 11. Tính th?a k? và ða h?nh
/* #include <iostream>
using namespace std;

// ===============================
// 1?? L?P CÕ S? (Base Class)
// ===============================
class Animal {
public:
    // Hàm ?o (virtual function)
    // Giúp cho các l?p k? th?a có th? **ghi ðè** (override) hành vi
    virtual void sound() {  
        cout << "Animal sound" << endl;  
    }
};

// ===============================
// 2?? L?P K? TH?A (Derived Class)
// ===============================
class Dog : public Animal {  // Dog k? th?a t? Animal
public:
    // Ghi ðè hàm sound() c?a l?p cõ s?
    void sound() override {  
        // t? khóa 'override' giúp compiler ki?m tra ðúng ghi ðè
        cout << "Woof" << endl;  
    }
};

int main() {
    // ===============================
    // 3?? T?O Ð?I TÝ?NG
    // ===============================
    Animal a;   // ð?i tý?ng l?p cõ s?
    Dog d;      // ð?i tý?ng l?p k? th?a

    // G?i hàm sound()
    a.sound();  // In ra: Animal sound
    d.sound();  // In ra: Woof

    // ===============================
    // 4?? S? D?NG POLYMORPHISM (ÐA H?NH)
    // ===============================
    Animal* ptr = &d;   // con tr? l?p cõ s? tr? ð?n ð?i tý?ng l?p k? th?a
    ptr->sound();       // In ra: Woof (nh? virtual function)

    return 0;
}  */

// 12. Thý vi?n chu?n(STL)
/* #include <iostream>
#include <vector>    // Thý vi?n cho vector
#include <map>       // Thý vi?n cho map
#include <algorithm> // Thý vi?n cho các thu?t toán STL (sort, find, ...) 
using namespace std;

int main() {
    // ===============================
    // 1?? VECTOR (M?ng ð?ng)
    // ===============================
    // Khai báo vector s? nguyên và kh?i t?o giá tr?
    vector<int> v = {1, 2, 3};  

    // Thêm ph?n t? vào cu?i vector
    v.push_back(4);  
    // v bây gi? là: {1, 2, 3, 4}

    // Duy?t vector và in ra các ph?n t?
    cout << "Vector v: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // ===============================
    // 2?? MAP (B?n ð?, key-value)
    // ===============================
    // Khai báo map v?i key ki?u string, value ki?u int
    map<string, int> m;

    // Gán giá tr? cho key "Tin"
    m["Tin"] = 20;

    // Truy xu?t giá tr? theo key
    cout << "Gia tri cua m[\"Tin\"]: " << m["Tin"] << endl;

    // Duy?t map
    cout << "Cac phan tu trong map:" << endl;
    for(auto it = m.begin(); it != m.end(); ++it) {     
        cout << it->first << " : " << it->second << endl; //it->first -->key(Duy?t map iterator), it->second-->value
    }

    return 0;
}   */

// 13. X? L? File
/* #include <iostream>   // Thý vi?n chu?n cho input/output
#include <fstream>    // Thý vi?n cho ð?c/ghi file
#include <string>     // Thý vi?n cho ki?u string
using namespace std;
int main() {
    // ===============================
    // 1?? GHI FILE (ofstream)
    // ===============================
    // T?o ð?i tý?ng ofstream ð? ghi vào file "data.txt"
    ofstream out("data.txt");  

    if (!out) {  // Ki?m tra xem file có m? thành công không
        cerr << "Khong the mo file de ghi!" << endl;
        return 1;
    }

    // Ghi d? li?u vào file
    out << "Hello file\n";  // Thêm d?ng "Hello file" vào file
    out << "Day la dong thu 2\n"; // Ghi thêm d?ng th? 2

    // Ðóng file sau khi ghi xong
    out.close();

    // ===============================
    // 2?? Ð?C FILE (ifstream)
    // ===============================
    // T?o ð?i tý?ng ifstream ð? ð?c file "data.txt"
    ifstream in("data.txt");  

    if (!in) {  // Ki?m tra xem file có m? thành công không
        cerr << "Khong the mo file de doc!" << endl;
        return 1;
    }

    string line;  // Bi?n lýu t?ng d?ng ð?c ðý?c
    cout << "Noi dung file data.txt:\n";
    // Ð?c t?ng d?ng trong file cho ð?n khi h?t
    while (getline(in, line)) {
        cout << line << endl;  // In t?ng d?ng ra màn h?nh
    }

    // Ðóng file sau khi ð?c xong
    in.close();

    return 0;  // K?t thúc chýõng tr?nh
}  */

// 14. Ngo?i L?
/* #include <iostream>
using namespace std;

int main() {
    // ===============================
    // 1?? TRY BLOCK
    // ===============================
    // Kh?i try dùng ð? "th?" ch?y các câu l?nh có th? gây l?i
    try {
        // Ném (throw) m?t ngo?i l?
        throw 123;  
        // Khi throw ðý?c g?i, chýõng tr?nh s? nh?y ngay sang catch týõng ?ng
        // 123 là giá tr? c?a ngo?i l?, ki?u int
    }

    // ===============================
    // 2?? CATCH BLOCK
    // ===============================
    // Kh?i catch dùng ð? "b?t" ngo?i l?
    catch (int e) {
        // int e ? bi?n lýu giá tr? ngo?i l? ðý?c ném ra
        cout << "Loi: " << e << endl;  // In ra l?i: 123
    }

    // ===============================
    // 3?? K?T THÚC
    // ===============================
    cout << "Chuong trinh tiep tuc chay binh thuong." << endl;

    return 0;
}  */

// ---------------------------------------------------------End--------------------------------------------------------------






