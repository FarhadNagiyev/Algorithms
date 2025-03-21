# **Selection Sort Algoritmi**

## **1. Algoritmin İşləmə Qaydası**
Selection Sort (Seçmə Çeşidləmə) sadə, lakin effektiv sıralama alqoritmidir. O, massivdəki ən kiçik elementi tapıb ilk yerə qoymaqla işləyir. Addım-addım işləmə prinsipi:

1. **Massivin ilk elementi seçilir.**
2. **Massivin qalan hissəsində ən kiçik element tapılır.**
3. **Bu element ilk seçilən elementlə yer dəyişdirilir.**
4. **Növbəti element üçün eyni proses təkrarlanır.**
5. **Bütün elementlər sıralanana qədər bu addımlar davam edir.**

## **2. Komplekslik Təhlili**
Selection Sort-un mürəkkəblik səviyyəsi aşağıdakı kimidir:

### **Time Complexity (Vaxt Mürəkkəbliyi):**
- **Ən yaxşı hal (`Ω(n^2)`)** – Elementlər artıq sıralanmış olsa belə, bütün müqayisələr aparılır.
- **Orta hal (`Θ(n^2)`)** – Massivin elementləri təsadüfi düzülmüşdür.
- **Ən pis hal (`O(n^2)`)** – Elementlər tam tərs sıradadır və bütün müqayisələr aparılmalıdır.

### **Space Complexity (Yaddaş Mürəkkəbliyi):**
- **Əlavə yaddaş tələbi:** `O(1)` – Yalnız bir neçə əlavə dəyişən istifadə edir və yerində (in-place) sıralama aparır.

## **3. Üstünlükləri və Çatışmazlıqları**
✅ **Üstünlüklər:**
- **Sadə və asan başa düşüləndir.**
- **Yerdə (in-place) işləyir, əlavə yaddaş tələb etmir (`O(1)`).**
- **Sabit sayda dəyişmə əməliyyatı (`O(n)`) aparır.**

❌ **Çatışmazlıqlar:**
- **Qeyri-effektivdir (`O(n^2)`)** – Böyük verilənlər üçün yavaş işləyir.
- **Stabil deyil** – Eyni dəyərə malik elementlərin nisbəti qorunmur.
- **Bütün hallarda eyni mürəkkəbliyə sahibdir (`O(n^2)`).**

## **4. Real Dünyada İstifadə Sahələri**
Selection Sort aşağıdakı sahələrdə istifadə olunur:
- **Kiçik verilənlər üçün effektivdir** – Sadəliyinə görə az miqdarda verilənlər üçün yaxşı seçimdir.
- **Yaddaş məhdudiyyətləri olan sistemlərdə** – Əlavə yaddaş istifadə etmədiyi üçün istifadə olunur.
- **Tədris və akademik məqsədlər** – Sıralama alqoritmlərinin öyrədilməsində əsas nümunələrdən biridir.

Bu alqoritm kiçik verilənlər üçün effektiv olsa da, böyük verilənlər üçün Quick Sort və Merge Sort kimi daha güclü alqoritmlər daha üstün hesab olunur.

