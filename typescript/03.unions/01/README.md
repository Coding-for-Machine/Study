**Uyushmalar**
Go-ni ko'p yozadigan odam sifatida men TypeScript-da birlashma turlariga hasad qiladigan narsadir . Ularni sevaman .

Birlashma turlari quvur belgisidan ( |) foydalanadi va qiymat bir nechta turlardan biri bo'lishi mumkinligini belgilashga imkon beradi .

```javascript
// userId is a string OR a number
let userId: string | number;
userId = "user_42";
userId = 42;

```

$$258+8$$
Birlashmalar qiymat bir nechta turlardan biri bo'lishi mumkin bo'lgan holatlar uchun juda mos keladi. TypeScript-ning chindan ham ajoyib tomoni shundaki, shartli tekshiruvlar aslida o'zgaruvchining turini o'zgartiradi. Bu "turni toraytirish" deb ataladi. Ko'rib chiqing:

```javascript
function safeSquare(val: string | number): number {
  if (typeof val === "string") {
    val = parseInt(val, 10);
  }
  // now val is only a number
  return val * val;
}

let result = safeSquare("5");
console.log(result);
// 25

result = safeSquare(5);
console.log(result);
// 25

```

**Topshiriq**
*Support.ai saytida biz chiptalarni qayta ishlash tizimimizni har xil turdagi chipta identifikatorlari bilan ishlash uchun yangilamoqdamiz. Bizning mijozlarimiz raqamli identifikatorlardan (masalan 42, ) va loyiha kodlaridan (masalan "SUPPORT-123", ) foydalanadilar va tizimimiz ikkala formatni ham bir xilda qayta ishlashi kerak.*

*Funktsiyani faqat a yoki a ni qabul qilish getTicketInfouchun yangilang .idstringnumber
Agar bu idsatr bo'lsa, undan raqam qismini ajratib oling.*
*Identifikator raqami yoki loyiha kodidan ajratilgan raqam bo'lgan Processing ticket: IDqatorni qaytaring .ID*

