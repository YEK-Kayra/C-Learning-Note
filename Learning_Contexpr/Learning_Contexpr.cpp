//#include <iostream>
//using namespace std;
///* Normal fonksiyonlar gibi run-time da değil compile-time'da hesaplanır */
//constexpr int product(int x, int y)
//{
//    return (x * y);
//}
//
//int main()
//{
//    /* Değişkenin contexpr ile tanımlanması compile time'da değerinin hesaplanma garantisi verir*/
//    constexpr int var1 = product(10, 20);
//    std::cout << var1 << endl;
//
//    /* Yani fonksiyon çağrısı runtime’da gerçekleşmez.
//     * Sonuç doğrudan derleme sırasında hesaplanır.
//     * Bu hesaplama avantajından dolayı dizinin boyutu compile time'da hesaplanır
//     */
//    int arr[product(2, 3)] = { 1, 2, 3, 4, 5, 6 };
//    std::cout << arr[5] << endl;;
//}


//#include <iostream>
//using namespace std;
//constexpr double PI = 3.14159265359;
//constexpr double ConvertDegreeToRadian(const double& dDegree)
//{
//    return (dDegree * (PI / 180));
//}
//int main() 
//{
//    /*
//    * Derece → Radyan dönüşümünde constexpr kullanımının amacı:
//    *
//    * Trigonometrik fonksiyonlar (sin, cos, tan vb.) radyan cinsinden çalışır.
//    * Ancak insanlar genellikle açı değerleriyle derece cinsinden işlem yapmayı
//    * daha okunabilir ve anlaşılır bulur.
//    *
//    * Bu nedenle dönüşüm işlemi ayrı bir constexpr fonksiyon içerisinde tanımlanır.
//    * Böylece:
//    *
//    * - Kod okunabilirliği korunur.
//    * - Dönüşüm formülü tek bir yerde tutulur (merkezi kontrol).
//    * - Parametre sabit (literal) ise dönüşüm derleme aşamasında (compile-time)
//    *   hesaplanır.
//    * - Program çalışırken (run-time) ek çarpma maliyeti oluşmaz.
//    *
//    * Not:
//    * Eğer tam compile-time garantisi isteniyorsa değişken de constexpr olarak
//    * tanımlanmalıdır:
//    *
//    * constexpr auto angleRad = ConvertDegreeToRadian(90.0);
//    *
//    *  Sabit açı → compile-time, değişken açı → runtime.
//    */
//    auto dAngleInRadian = ConvertDegreeToRadian(90.0); // auto ile değişkenin tiği ='in sağ tarafındaki ifadenin tipine bağlar
//    cout << "Angle in radian: " << dAngleInRadian;
//}



/*
 * ===================== ÖZET =====================
 *
 * inline:
 * - Fonksiyon çağrısı maliyetini (call overhead) azaltmak için kullanılır.
 * - Küçük ve basit fonksiyonlarda daha mantıklıdır.
 * - Compile-time hesaplama garantisi vermez.
 * - Derleyiciye bir öneridir (zorunlu değildir).
 *
 * constexpr:
 * - Sabit (constant expression) üretmek için kullanılır.
 * - Parametreler sabitse işlemi compile-time’da yapar.
 * - Compile-time hesaplama garantisi sağlar (uygunsa).
 *
 * Not:
 * inline → performans optimizasyonu odaklıdır.
 * constexpr → sabitlik ve derleme zamanı hesaplama odaklıdır.
 */
//#include <iostream>
//using namespace std;
//
///* Çağrıldığında stack frame oluşturur */
//int sum(int a, int b)
//{
//    return a + b;
//}
//
///* Çağrıldığında direkt a + b işlemi koda gömülür
// int x = sum(3,4); ==> int x = 3 + 4*/
//inline int sum(int a, int b)
//{
//    return a + b;
//}
//
//int main()
//{
//    int x = sum(3, 4);
//}



// contexpr ları kaldırınca 2 katı süre meydana geliyor
//#include<iostream>  
//using namespace std;
//
//constexpr long int fib(int n)
//{
//    return (n <= 1) ? n : fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//    // value of res is computed at compile time. 
//    constexpr long int res = fib(20);
//    std::cout << res;
//    return 0;
//}






