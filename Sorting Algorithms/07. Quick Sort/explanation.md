### Quick Sort İşləmə Prinsipi

1. **Pivot seçilir** (adətən ilk, son, orta və ya random bir element).  
2. **Siyahı partition (bölünmə) edilir:**  
   - Pivotdan **kiçik elementlər** sol tərəfə yerləşdirilir.  
   - Pivotdan **böyük elementlər** sağ tərəfə yerləşdirilir.  
3. **Rekursiv olaraq sol və sağ hissələrə Quick Sort tətbiq edilir.**  

### Quick Sort-un Asimptotik Komplekslik Analizi

| Hal               | **Big-O (O) (Üst Sınır)** | **Theta (Θ) (Orta Hal)** | **Omega (Ω) (Alt Sınır)** |
|------------------|----------------|----------------|----------------|
| **En iyi hal**   | O(n log n)     | Θ(n log n)     | Ω(n log n)     |
| **Orta hal**     | O(n log n)     | Θ(n log n)     | Ω(n log n)     |
| **En kötü hal**  | O(n²)          | Θ(n²)          | Ω(n²)          |
### Quick Sort-un Real Dünyada İstifadə Sahələri

- **Proqramlaşdırma Kitabxanaları** (STL, Java, Python)  
- **Məlumat Bazaları** (SQL, NoSQL, B-Tree, AVL Tree)  
- **Böyük Məlumatların Emalı** (Google, Facebook, Hadoop, Spark)  
- **Qrafiklər və Görüntü Emalı** (Pixel Sorting, Median Filter, Ray Tracing)  
- **Şəbəkə Yönləndiriciləri və Firewall-lar** (Routerlər, Paket Analizi, DoS Hücumları)  
- **Kriptoqrafiya və Şifrələmə** (RSA, AES, Hash Funksiyaları)  
