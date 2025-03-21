# **Merge Sort Algoritmi**

## **1. Algoritmin İşləmə Qaydası**
Merge Sort (Birləşdirmə Çeşidləmə) böl və fəth et (divide and conquer) prinsipinə əsaslanan səmərəli sıralama alqoritmidir. O, massivi kiçik hissələrə bölərək və sonra onları birləşdirərək sıralayır. Addım-addım işləmə prinsipi:

1. **Massiv iki bərabər hissəyə bölünür.**
2. **Hər bir hissə rekursiv olaraq yenidən iki hissəyə bölünür, bu proses massiv bir element qalana qədər davam edir.**
3. **Bölünmüş massivlər tədricən birləşdirilir, birləşdirmə zamanı elementlər kiçikdən böyüyə doğru sıralanır.**
4. **Bütün massiv tam sıralanana qədər bu proses davam edir.**

## **2. Komplekslik Təhlili**
Merge Sort-un mürəkkəblik səviyyəsi aşağıdakı kimidir:

### **Time Complexity (Vaxt Mürəkkəbliyi):**
- **Ən yaxşı hal (`Ω(n log n)`)** – Massiv artıq sıralanmış olsa belə, hər dəfə bölünmə və birləşdirmə əməliyyatları aparılır.
- **Orta hal (`Θ(n log n)`)** – Massivin elementləri təsadüfi düzülmüşdür və hər bölünmə və birləşdirmə əməliyyatı `n log n` mürəkkəbliyində baş verir.
- **Ən pis hal (`O(n log n)`)** – Elementlər tam tərs sıradadır və yenə də `n log n` qədər əməliyyat aparılmalıdır.

### **Space Complexity (Yaddaş Mürəkkəbliyi):**
- **Əlavə yaddaş tələbi:** `O(n)` – Yardımçı massivlər istifadə olunur, bu səbəbdən əlavə yaddaş tələb edir.

## **3. Üstünlükləri və Çatışmazlıqları**
✅ **Üstünlüklər:**
- **Hər zaman `O(n log n)` sürətində işləyir, yəni sabit vaxt mürəkkəbliyinə malikdir.**
- **Stabil sıralama alqoritmidir** – Eyni dəyərə malik elementlərin nisbəti qorunur.
- **Böyük verilənlər üçün effektivdir.**
- **Linked list-lər üçün yaxşı seçimdir, çünki əlaqəli siyahılarda əlavə yaddaş tələbi az olur.**

❌ **Çatışmazlıqlar:**
- **Əlavə yaddaş istifadə edir (`O(n)`).**
- **Yerdə (in-place) işləmədiyi üçün bəzi hallarda qeyri-effektiv ola bilər.**
- **Kiçik verilənlər üçün digər sadə alqoritmlər (məsələn, Insertion Sort) daha sürətli işləyə bilər.**

## **4. Real Dünyada İstifadə Sahələri**
Merge Sort aşağıdakı sahələrdə istifadə olunur:
- **Böyük verilənlər bazalarının sıralanması.**
- **Linked list-lərdə sıralama aparmaq üçün idealdır.**
- **Disk əsaslı və paralel işləyən sistemlərdə.**
- **Stabil sıralama tələb edən sistemlərdə (məsələn, maliyyə və səhmlərin sıralanması).**

Merge Sort böyük verilənlər üçün ideal olsa da, əlavə yaddaş istifadəsinə görə bəzi hallarda Quick Sort daha üstün ola bilər.

