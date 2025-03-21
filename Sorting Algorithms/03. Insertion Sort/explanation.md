# **Insertion Sort Algoritmi**

## **1. Algoritmin İşləmə Qaydası**
Insertion Sort (Daxiletmə Çeşidləmə) sadə və effektiv sıralama alqoritmlərindən biridir. O, massivin hər bir elementini uyğun yerinə yerləşdirərək işləyir. Addım-addım işləmə prinsipi:

1. **İlk elementin artıq sıralanmış olduğu qəbul edilir.**
2. **Növbəti element götürülür və sol tərəfdəki sıralanmış hissədə uyğun yerə yerləşdirilir.**
3. **Bunun üçün sol tərəfdəki elementlər sağa ötürülür ki, yeni element düzgün yerinə yerləşdirilə bilsin.**
4. **Bu proses massiv sonuna qədər davam edir.**

## **2. Komplekslik Təhlili**
Insertion Sort-un mürəkkəblik səviyyəsi aşağıdakı kimidir:

### **Time Complexity (Vaxt Mürəkkəbliyi):**
- **Ən yaxşı hal (`Ω(n)`)** – Əgər massiv artıq sıralanıbsa, hər element yalnız bir dəfə müqayisə olunur.
- **Orta hal (`Θ(n^2)`)** – Massivin elementləri təsadüfi düzülmüşdür və orta hesabla hər element üçün `n/2` qədər müqayisə aparılır.
- **Ən pis hal (`O(n^2)`)** – Elementlər tam tərs sıradadır və hər element öz yerini tapana qədər bütün sol tərəfdəki elementlərlə müqayisə olunmalıdır.

### **Space Complexity (Yaddaş Mürəkkəbliyi):**
- **Əlavə yaddaş tələbi:** `O(1)` – Yalnız bir neçə əlavə dəyişən istifadə edir və yerində (in-place) sıralama aparır.

## **3. Üstünlükləri və Çatışmazlıqları**
✅ **Üstünlüklər:**
- **Sadə və asan başa düşüləndir.**
- **Yerdə (in-place) işləyir, əlavə yaddaş tələb etmir (`O(1)`).**
- **Stabil sıralama alqoritmidir** – Eyni dəyərə malik elementlərin sırası qorunur.
- **Kiçik verilənlər və demək olar ki, sıralanmış massivlər üçün daha effektiv işləyir.**

❌ **Çatışmazlıqlar:**
- **Böyük verilənlər üçün qeyri-effektivdir (`O(n^2)`).**
- **Digər sıralama alqoritmlərinə (məsələn, Merge Sort və Quick Sort) nisbətən daha yavaş işləyir.**

## **4. Real Dünyada İstifadə Sahələri**
Insertion Sort aşağıdakı sahələrdə istifadə olunur:
- **Kiçik ölçülü verilənlərin sıralanması üçün.**
- **Demək olar ki, sıralanmış verilənlər üçün effektivdir.**
- **Əlavə yaddaş tələbi olmadan (`O(1)`) işləməsi lazım olan sistemlərdə.**
- **Tədris və akademik məqsədlər üçün sıralama alqoritmlərinin öyrədilməsində.**

