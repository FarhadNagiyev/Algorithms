# **Bubble Sort Algoritmi**

## **1. Algoritmin İşləmə Qaydası**
Bubble Sort (Baloncuk Çeşidləmə) sadə, lakin qeyri-effektiv sıralama alqoritmidir. Bu alqoritm qonşu elementləri müqayisə edərək daha böyük olanı sağa ötürməklə işləyir. Addım-addım işləmə prinsipi:

1. **Massivin ilk iki elementi müqayisə edilir və lazım gələrsə yer dəyişdirilir.**
2. **Bu proses massiv sonuna qədər təkrarlanır və ən böyük element sona yerləşdirilir.**
3. **Massivin qalan hissəsi üçün eyni proses təkrarlanır.**
4. **Bütün elementlər sıralanana qədər bu addımlar davam edir.**

## **2. Komplekslik Təhlili**
Bubble Sort-un mürəkkəblik səviyyəsi aşağıdakı kimidir:

### **Time Complexity (Vaxt Mürəkkəbliyi):**
- **Ən yaxşı hal (`Ω(n)`)** – Əgər massiv artıq sıralanıbsa, yalnız bir keçid (`O(n)`) kifayət edir.
- **Orta hal (`Θ(n^2)`)** – Massivin elementləri təsadüfi düzülmüşdür və hər elementin yerini tapması üçün çoxlu müqayisələr tələb olunur.
- **Ən pis hal (`O(n^2)`)** – Elementlər tam tərs sıradadır və hər keçiddə maksimum sayda müqayisə və dəyişdirmə aparılır.

### **Space Complexity (Yaddaş Mürəkkəbliyi):**
- **Əlavə yaddaş tələbi:** `O(1)` – Yalnız bir neçə əlavə dəyişən istifadə edir və yerində (in-place) sıralama aparır.

## **3. Üstünlükləri və Çatışmazlıqları**
✅ **Üstünlüklər:**
- **Sadə və asan başa düşüləndir.**
- **Yerdə (in-place) işləyir, əlavə yaddaş tələb etmir (`O(1)`).**
- **Stabil sıralama alqoritmidir** – Eyni dəyərə malik elementlərin sırası qorunur.

❌ **Çatışmazlıqlar:**
- **Qeyri-effektivdir (`O(n^2)`)** – Böyük verilənlər üçün yavaş işləyir.
- **Digər sıralama alqoritmlərinə nisbətən daha çox müqayisə və dəyişdirmə aparır.**
- **Bütün hallarda (orta və ən pis halda) `O(n^2)` kompleksliyinə malikdir.**

## **4. Real Dünyada İstifadə Sahələri**
Bubble Sort aşağıdakı sahələrdə istifadə olunur:
- **Sadəliyinə görə tədris məqsədləri üçün istifadə edilir.**
- **Kiçik verilənlər üçün sıralama tələb edən sistemlərdə işlədilə bilər.**
- **Əlavə yaddaş məhdudiyyəti olan sistemlərdə (`O(1)` yaddaş istifadəsi sayəsində) istifadə oluna bilər.**

Bu alqoritm öyrənmək üçün yaxşı olsa da, praktik istifadədə daha effektiv alqoritmlər (məsələn, Quick Sort və Merge Sort) üstünlük təşkil edir.

