
/*
                         Butun sonlar(intager) turlari va 2-darajasi orqali oraliqlari
+--------------------------------------------------------------------------------------------------------------------+
|     Type                  |   Bayt   |   Bit   |          Qiymatlar oraliqi (2 darajasi bilan)        | Formatlash |
|--------------------------------------------------------------------------------------------------------------------|
|     short int             |   2      |   16    |  -(2^15) ... (2^15 - 1)       = -32,768 ... 32,767   |   %d       |
|     unsigned short int    |   2      |   16    |  0 ... (2^16 - 1)             = 0 ... 65,535         |   %u       | m: 0. 1. 2. 3 ....2^16-1
|--------------------------------------------------------------------------------------------------------------------|
|     int                   |   4      |   32    |  -(2^31) ... (2^31 - 1)       = -2,147,483,648 ...   |   %d       |
|                           |          |         |                               2,147,483,647          |            |
|     unsigned int          |   4      |   32    |  0 ... (2^32 - 1)             = 0 ... 4,294,967,295  |   %u       | m: 0. 1. 2. 3 .... 2^32-1
|--------------------------------------------------------------------------------------------------------------------|
|     long int              |  4/8     | 32/64   |  -(2^(n-1)) ... (2^(n-1)-1)   platformaga bog‘liq     |   %ld     |
|     unsigned long int     |  4/8     | 32/64   |  0 ... (2^n - 1)              platformaga bog‘liq     |   %lu     |
|--------------------------------------------------------------------------------------------------------------------|
|     long long int         |   8      |   64    |  -(2^63) ... (2^63 - 1)       = -9,223,372,036,854... |   %lld    |
|     unsigned long long int|   8      |   64    |  0 ... (2^64 - 1)             = 18,446,744,073,709... |   %llu    |
+--------------------------------------------------------------------------------------------------------------------+

Izohlar:
_______________________________________ Manfiy bo'lmagan sonlar (unsigned)_____________________________________________________________________

+---+---+---+---+---+---+---+---+                +---+---+---+---+---+---+---+---+
|   |   |   |   |   |   |   |   |                | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 |  0 dan  bu 255 ga teng
+---+---+---+---+---+---+---+---+         agar   +---+---+---+---+---+---+---+---+                     manfiy sonlar va 0 ni qushganimizda esa:
  1   2   3   4   5   6   7   8
  |   |   |   |   |   |   |   |
  2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 = 2^8 = 1 va 256 

_______________________________________ Butun sonlar (intger)__________________________________________________________________________________
               8-bit:

               - Eng katta musbat son:
               +---+---+---+---+---+---+---+---+
               | 0 | 1 | 1 | 1 | 1 | 1 | 1 | 1 |
               +---+---+---+---+---+---+---+---+
               = 127 ^ 1 = -128

               - Eng kichik manfiy son:
               +---+---+---+---+---+---+---+---+
               | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
               +---+---+---+---+---+---+---+---+
               = -128 - 128-1 ~2 -- > ^1

               - Masalan: -5 ni qanday yozamiz?
                    1) +5 ni olamiz: 
                    00000101
                    2) Barchasini 1 ga xor qilamiz (invert qilamiz):
                    11111010
                    3) 1 qo‘shamiz:
                    11111011  → bu -5 ni ifodalaydi.

               Tekshirish uchun:
               11111011 (ikkilik) 
               = -128 + 64 + 32 + 16 + 8 + 2 + 1 = -5
__________________________________________________________________________________________________

*/

/*
                     Suzuvchi nuqtali sonlar (floating point) va oraliqlari
+-----------------------------------------------------------------------------------------------------------------+
|     Type         |   Bayt   |   Bit   |         Qiymatlar oraliqi (≈ 2 darajasi orqali)            | Formatlash |
|----------------------------------------------------------------------------------------------------|------------|
|     float        |   4      |   32    |  ≈ 1.2E-38  ...  3.4E+38   (7 xonali aniqlik)              |   %f, %e   |
|     double       |   8      |   64    |  ≈ 2.3E-308 ...  1.7E+308  (15-16 xonali aniqlik)          |   %lf, %e  |
|     long double  |  10/12/16| 80/96/128| Platformaga bog‘liq, ammo ≈ 3.4E-4932 ... 1.1E+4932       |   %Lf      |
+-----------------------------------------------------------------------------------------------------------------+

Izohlar:
- `float` → 32-bit (1 bit sign, 8 bit exponent, 23 bit mantissa).
- `double` → 64-bit (1 bit sign, 11 bit exponent, 52 bit mantissa).
- `long double` → kompyuter arxitekturasiga bog‘liq (80-bit, 96-bit yoki 128-bit).
- `float` ~ 7 xonagacha aniq, `double` ~ 15-16 xonagacha, `long double` undan ham yuqori aniqlik beradi.
- `Formatlash`:
     - `%f` → oddiy kasr ko‘rinishida (masalan: 3.141593)
     - `%e` → ilmiy (eksponent) ko‘rinishda (masalan: 3.141593e+00)
     - `%Lf` → long double uchun.
*/

/*
                     Qo‘shimcha turlar: char, char*, bool
+----------------------------------------------------------------------------------------------------------------+
|     Type          |   Bayt   |   Bit   |        Qiymatlar oraliqi / Ma’nosi                       | Formatlash |
|----------------------------------------------------------------------------------------------------------------|
|     char          |   1      |   8     |  signed char:  -128 ... 127                              |   %c, %d   |
|                   |          |         |  unsigned char: 0 ... 255                                |   %c, %u   |
|---------------------------------------------------------------------------------------------------|------------|
|     char*         |   4/8    | 32/64   |  Pointer (xotira manzili)                                |   %s, %p   |
|                   |          |         |  32-bit sistemada: 0 ... 2^32-1                          |            |
|                   |          |         |  64-bit sistemada: 0 ... 2^64-1                          |            |
|---------------------------------------------------------------------------------------------------|------------|
|     _Bool / bool  |   1      |   8     |  0 (false) yoki 1 (true)                                 |   %d       |
+----------------------------------------------------------------------------------------------------------------+

Izohlar:
- `char` → oddiy belgilarni (ASCII, UTF-8) saqlaydi, lekin aslida bu **butun son** (1 bayt). m: - 2^7 dan 0 va 2^7-1 
- `char *` → bu **pointer**, ya’ni belgilar ketma-ketligining (string) manzilini ko‘rsatadi.
- `bool` (`_Bool`) → faqat ikkita qiymatga ega: `0` yoki `1`.
- Formatlash:
     - `char` uchun: `%c` → belgini chiqaradi (`'A'`), `%d` → kodini chiqaradi (masalan `65`).
     - `char *` uchun: `%s` → string sifatida chiqaradi, `%p` → pointer (manzil).
     - `bool` uchun: `%d` → `0` yoki `1` ni chiqaradi.
*/