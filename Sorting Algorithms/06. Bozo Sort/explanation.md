# **Bozo Sort Algoritmi**

## **1. Algoritmin İşləmə Qaydası**
Bozo Sort, Bogo Sort-a bənzəyən, lakin təsadüfi dəyişmələr (swap) üzərində qurulan qeyri-effektiv sıralama alqoritmidir. O, düzgün sıralama əldə olunana qədər təsadüfi elementləri dəyişdirərək işləyir. Addım-addım işləmə prinsipi:

1. **Massivin sıralanmış olub-olmadığı yoxlanılır.**
2. **Əgər sıralanmayıbsa, iki təsadüfi elementi dəyişdirilir.**
3. **Bu proses massiv tam sıralanana qədər davam edir.**

## **2. Komplekslik Təhlili**
Bozo Sort-un mürəkkəblik səviyyəsi aşağıdakı kimidir:

### **Time Complexity (Vaxt Mürəkkəbliyi):**
- **Ən yaxşı hal (`Ω(n)`)** – İlk yoxlamada massiv düzülmüş ola bilər.
- **Orta hal (`Θ(n!)`)** – Təsadüfi dəyişdirmələrlə orta hesabla `n!` addım tələb olunur.
- **Ən pis hal (`O(∞)`)** – Teorik olaraq, sıralama heç vaxt tamamlanmaya bilər.

### **Space Complexity (Yaddaş Mürəkkəbliyi):**
- **Əlavə yaddaş tələbi:** `O(1)` – Yalnız bir neçə əlavə dəyişən istifadə edir və yerində (in-place) sıralama aparır.

## **3. Üstünlükləri və Çatışmazlıqları**
✅ **Üstünlüklər:**
- **Sadə və asan başa düşüləndir.**
- **Bəzi hallarda Bogo Sort-dan bir qədər sürətli ola bilər.**

❌ **Çatışmazlıqlar:**
- **Son dərəcə qeyri-effektivdir (`O(n!)`).**
- **Böyük verilənlər üçün praktik deyil.**
- **Əksər hallarda heç vaxt sıralama bitməyə bilər.**

## **4. Real Dünyada İstifadə Sahələri**
Bozo Sort praktik olaraq heç bir real dünyada istifadə olunmur. Lakin aşağıdakı məqsədlər üçün nəzərdə tutulmuşdur:
- **Alqoritmlərin müqayisəsi və səmərəsiz metodların nümayişi üçün.**
- **Tədris məqsədilə "sıralama necə olmamalıdır" nümunəsi kimi.**
- **Təsadüfi alqoritmlər və simulyasiya sistemlərində eksperimental məqsədlərlə.**

