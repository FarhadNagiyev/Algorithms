# Counting Sort Algoritmi

## Counting Sort Alqoritminin Addımları

1. Sıralanacaq dəyərləri saxlayan birinci array yaradılır.

2. Arrayin ən böyük elementi tapılır.

3. 0-dan maksimum dəyərə qədər ikinci array (sayma massivi) yaradılır.

4. Əsas arraydəki hər bir elementin neçə dəfə təkrarlandığı ikinci arraydə qeyd olunur.

5. Sayma massivində hər bir dəyər, ondan əvvəlki dəyər ilə toplanaraq yenilənir.

6. Əsas arraydəki hər bir element üçün, sayma massivindəki dəyərin indeksindən 1 çıxılaraq müvafiq mövqeyə yerləşdirilir və üçüncü array (çıxış massivi) yaradılır.

## Time Complexity (Vaxt Mürəkkəbliyi)
- **Ən pis hal**: \(O(n + k)\)
- **Orta hal**: \(O(n + k)\)
- **Ən yaxşı hal**: \(O(n + k)\)
  
Burada \(n\) verilən siyahının elementlərinin sayı, \(k\) isə maksimum elementin dəyəridir.

## Space Complexity (Yaddaş Mürəkkəbliyi)
- \(O(n + k)\)
- Əlavə olaraq, sayma üçün \(k+1\) ölçülü bir köməkçi massiv (count array) yaradıldığı üçün yaddaş istifadəsi artır.

## Ən Pis, Ən Yaxşı və Orta Hal
- **Ən pis hal**: Elementlərin maksimum dəyəri çox böyükdürsə (\(k\) çox böyükdürsə), yaddaş istifadəsi artar.
- **Ən yaxşı hal**: Elementlər az sayda müxtəlif dəyərə malik olduqda (\(k\) kiçik olduqda), çox sürətli işləyir.
- **Orta hal**: Elementlərin dəyərləri məhdud diapazondadırsa, yaxşı performans göstərir.

## Avantajları
- **Sabit sıralama (Stable Sort)**: Eyni dəyərə malik elementlərin sırası qorunur.
- **Sürətli performans**: Kiçik diapazonlu elementlər üçün \(O(n)\) zaman mürəkkəbliyinə malikdir.
- **Əlavə müqayisəyə ehtiyac yoxdur**: Ənənəvi müqayisəli sıralama alqoritmləri kimi elementlər bir-biri ilə müqayisə edilmir.

## Dezavantajları
- **Yüksək yaddaş istifadəsi**: Elementlərin maksimum dəyəri (\(k\)) böyük olduqda, çoxlu əlavə yaddaş tələb edir.
- **Sadəcə tam ədədlər üçün effektivdir**: Bu alqoritm yalnız tam ədədlər və məhdud diapazondakı dəyərlər üçün istifadə edilə bilər.
- **Çox geniş diapazonlu verilənlərdə effektiv deyil**: Əgər \(k\) çox böyükdürsə və \(n\)-dən qat-qat böyükdürsə, bu zaman yaddaş sərfiyyatı çox artır.

## Real Dünyada İstifadə Halları
- **Anket nəticələrinin emalı**: Məsələn, sorğuların nəticələrində cavablar 1-dən 10-a qədərdirsə, Counting Sort çox effektivdir.
- **Rəqəmsal şəkillərin emalı**: Piksellərin intensivliyini sıralamaq üçün istifadə edilə bilər.
- **Anbar və inventar idarəetməsi**: Məhsul sayını müəyyən bir diapazonda izləmək üçün istifadə oluna bilər.

Counting Sort, xüsusi hallarda olduqca effektiv bir sıralama alqoritmidir, lakin geniş diapazonlu verilənlər üçün yaddaş istifadəsinə görə qeyri-praktik ola bilər.

