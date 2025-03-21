# Radix Sort Algoritmi

## Radix Sort Alqoritminin Addımları

1. Sıralanacaq dəyərləri saxlayan birinci array yaradılır.
2. Əsas arraydəki **ən böyük elementin** neçə rəqəmli olduğu müəyyən edilir.
3. Hər bir rəqəm dərəcəsi (1-lər, 10-lar, 100-lər və s.) üçün **Counting Sort** tətbiq edilir:
   - Rəqəmin həmin dərəcədəki qiyməti tapılır.
   - Bu qiymətlərə əsasən Counting Sort alqoritmi ilə sıralama aparılır.
4. Bütün rəqəm dərəcələri üçün bu proses təkrarlanır.
5. Son nəticədə array tam sıralanmış olur.

## Time Complexity (Vaxt Mürəkkəbliyi)
- **Ən pis hal**: \(O(d \cdot (n + k))\)
- **Orta hal**: \(O(d \cdot (n + k))\)
- **Ən yaxşı hal**: \(O(d \cdot (n + k))\)
  
Burada:
- \(n\) — verilən siyahının elementlərinin sayı,
- \(k\) — mümkün rəqəmlərin maksimal dəyəri (\(0-9\) arası olduğundan \(k = 10\)),
- \(d\) — maksimum elementin rəqəm sayı.

## Space Complexity (Yaddaş Mürəkkəbliyi)
- **Əlavə köməkçi massivlərdən istifadə olunduğuna görə** \(O(n + k)\) yaddaş sərfiyyatı tələb olunur.

## Ən Pis, Ən Yaxşı və Orta Hal
- **Ən pis hal**: Verilənlər çox böyük ədədlərdən ibarətdirsə və rəqəm sayı (\(d\)) çoxdursa.
- **Ən yaxşı hal**: Rəqəm sayı az olan elementlərdə və \(n\) çox olduqda.
- **Orta hal**: Ümumiyyətlə, **kiçik diapazonlu tam ədədlər** üçün sürətli və stabil işləyir.

## Avantajları
- **Sabit sıralama (Stable Sort)**: Eyni dəyərə malik elementlərin sırası qorunur.
- **Çox sürətlidir**: Kiçik diapazonlu və böyük ölçülü verilənlər üçün **müqayisəli sıralama metodlarından daha effektivdir**.
- **Müqayisəsiz sıralama metodu**: Ədədləri bir-biri ilə müqayisə etmir.

## Dezavantajları
- **Sadəcə tam ədədlər və məhdud diapazondakı dəyərlər üçün effektivdir**.
- **Yüksək yaddaş istifadəsi**: Hər bir rəqəm dərəcəsi üçün əlavə köməkçi massivlər yaradıldığı üçün yaddaş istifadəsi artır.
- **Daha böyük ədədlər üçün effektiv olmaya bilər**: Çünki **d** rəqəm sayı çoxaldıqca performans aşağı düşə bilər.

## Real Dünyada İstifadə Halları
- **Poçt kodlarının sıralanması**: Əsasən sabit uzunluqlu nömrələri sıralamaq üçün effektivdir.
- **Telefon nömrələrinin sıralanması**: Böyük verilən bazalarında unikal identifikatorları sıralamaq üçün istifadə edilə bilər.
- **Bank əməliyyatlarında müştəri kodlarının sıralanması**: Xüsusilə eyni kodlu müştəriləri stabil şəkildə sıralamaq üçün uyğundur.


