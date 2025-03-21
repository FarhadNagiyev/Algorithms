# **Bogo Sort Algoritmi**

## **1. Algoritmin İşləmə Qaydası**
Bogo Sort (və ya Stupid Sort) ən səmərəsiz sıralama alqoritmlərindən biridir. O, təsadüfi sıralamalar yaradaraq düzgün sıralamanı tapana qədər yoxlama aparır. Addım-addım işləmə prinsipi:

1. **Massivin elementləri təsadüfi qaydada qarışdırılır.**
2. **Massivin sıralanmış olub-olmadığı yoxlanılır.**
3. **Əgər sıralanmayıbsa, 1-ci addıma qayıdılır.**
4. **Massiv tam sıralanana qədər bu proses davam edir.**

## **2. Komplekslik Təhlili**
Bogo Sort-un mürəkkəblik səviyyəsi aşağıdakı kimidir:

### **Time Complexity (Vaxt Mürəkkəbliyi):**
- **Ən yaxşı hal (`Ω(n)`)** – İlk təsadüfi sıralamada massiv düzülmüş ola bilər.
- **Orta hal (`Θ(n × n!)`)** – Təsadüfi sıralamalar üzərində orta hesabla `n!` sayda yoxlama aparılır.
- **Ən pis hal (`O(∞)`)** – Teorik olaraq, heç vaxt sıralama bitməyə bilər.

### **Space Complexity (Yaddaş Mürəkkəbliyi):**
- **Əlavə yaddaş tələbi:** `O(1)` – Yalnız bir neçə əlavə dəyişən istifadə edir və yerində (in-place) sıralama aparır.

## **3. Üstünlükləri və Çatışmazlıqları**
✅ **Üstünlüklər:**
- **Sadə və asan başa düşüləndir.**
- **Teorik olaraq ən yaxşı halda `O(n)` kimi işləyə bilər.**

❌ **Çatışmazlıqlar:**
- **Son dərəcə qeyri-effektivdir (`O(n!)`).**
- **Böyük verilənlər üçün praktik deyil.**
- **Əksər hallarda heç vaxt sıralama bitməyə bilər.**

## **4. Real Dünyada İstifadə Sahələri**
Bogo Sort praktik olaraq heç bir real dünyada istifadə olunmur. Lakin aşağıdakı məqsədlər üçün nəzərdə tutulmuşdur:
- **Alqoritmlərin müqayisəsi və səmərəsiz metodların nümayişi üçün.**
- **Tədris məqsədilə "sıralama necə olmamalıdır" nümunəsi kimi.**
- **Təsadüfi alqoritmlər və simulyasiya sistemlərində eksperimental məqsədlərlə.**


