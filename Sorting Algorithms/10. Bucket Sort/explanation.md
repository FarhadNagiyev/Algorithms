# **Bucket Sort Algoritmi**

## **1. Algoritmin İşləmə Qaydası**
Bucket Sort (Vedrə Çeşidləmə) sıralama alqoritmi olub, verilmiş dəyərləri müəyyən qruplara (bucket-lərə) bölərək hər qrup daxilində sıralayır və sonra birləşdirir. Addım-addım işləmə prinsipi:

1. **Bucket-lərin yaradılması** - Giriş massivinin ən böyük dəyərinə əsasən `k` ədəd boş bucket (vedrə) yaradılır.
2. **Elementlərin bucket-lərə paylanması** - Hər element uyğun vedrəyə yerləşdirilir.
3. **Hər bucket-in sıralanması** - Bucket-lərin içindəki elementlər başqa bir sıralama alqoritmi (məsələn, İnsert Sort) ilə sıralanır.
4. **Nəticənin birləşdirilməsi** - Bucket-lərdə sıralanmış elementlər tək massiv halına gətirilir.

## **2. Komplekslik Təhlili**
Bucket Sort-un mürəkkəblik səviyyəsi üç fərqli halda dəyişir:

### **Time Complexity (Vaxt Mürəkkəbliyi):**
- **Ən yaxşı hal (`Ω(n + k)`)** - Elementlər bərabər bölünərsə və hər bucket-in içindəki element sayı azdırsa.
- **Orta hal (`Θ(n + k)`)** - Elementlər bucket-lərə kifayət qədər balanslı bölünərsə.
- **Ən pis hal (`O(n^2)`)** - Bütün elementlər eyni bucket-ə düşərsə, məsələn, hamısı eyni və ya çox yaxın dəyərlərdədirsə.

Burada `n` girişdəki elementlərin sayı, `k` isə bucket-lərin sayıdır.

### **Space Complexity (Yaddaş Mürəkkəbliyi):**
- **Əlavə yaddaş tələbi:** `O(n + k)` – `k` sayda bucket və `n` element üçün əlavə yaddaş tələb olunur.
- **Əgər bucket-lər dinamik ayırılarsa**, `O(n)`-ə yaxın ola bilər.

## **3. Üstünlükləri və Çatışmazlıqları**
✅ **Üstünlüklər:**
- Tez işləyir (`O(n)`-ə yaxın ola bilər).
- Ümumiyyətlə stabil sıralama verir.
- Həqiqi ədədlərlə (`float`) yaxşı işləyir.

❌ **Çatışmazlıqlar:**
- Əgər bütün elementlər eyni bucket-ə düşsə, `O(n^2)` kompleksliyinə düşə bilər.
- Düzgün bucket sayı seçilməzsə, effektiv olmaya bilər.
- Əlavə yaddaş tələb edir (`O(n + k)`).

## **4. Real Dünyada İstifadə Sahələri**
Bucket Sort aşağıdakı sahələrdə istifadə olunur:
- **Rəng emalı** – Rəng dəyərlərinin sürətli sıralanması.
- **Maliyyə və statistik analizlər** – Gəlir, xərclər və digər iqtisadi göstəricilərin sıralanması.
- **Parallel proqramlaşdırma** – Böyük verilənlər massivlərini sürətli sıralamaq üçün paralel bucket-lərdən istifadə olunur.

Bu alqoritm müəyyən hallarda çox effektiv olsa da, düzgün tətbiq olunmazsa, alternativlərdən (Quick Sort, Merge Sort) daha yavaş ola bilər.

