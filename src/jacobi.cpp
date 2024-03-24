#include <iostream>
#include <iomanip>

// если это делать по нормальному, то у меня компилятор немного ругается
// было лень менять все на нечто нормальное
#include "jacobi.h"

/*
 * теперь здесь ничего не будет
 * только то как я проверял, работает ли это дело
 */
int main()
{
    using namespace std;
    using namespace Eigen;

    // PermutationMatrix<Dynamic> P(3);
    // // P.setIdentity();
    // for (int i = 0; i < 3; ++i)
    // {
    //     P.indices()[i] = 3 - i - 1;
    // }
    // auto P2 = P * P.transpose();
    // for (int i = 0; i < 3; i++)
    //     cout << P2.indices()[i] << "\n";

    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> m(10, 9);
    m << 1,  2,  3,  4,  5,  6,  7,  8,  9,
         10, 11, 12, 13, 14, 15, 16, 17, 18,
         19, 20, 21, 22, 23, 24, 25, 26, 27,
         28, 29, 30, 31, 32, 33, 34, 35, 36,
         37, 38, 39, 40, 41, 42, 43, 44, 45,
         46, 47, 48, 49, 50, 51, 52, 53, 54,
         55, 56, 57, 58, 59, 60, 61, 62, 63,
         64, 65, 66, 67, 68, 68, 70, 71, 72,
         73, 74, 75, 76, 77, 78, 79, 80, 81,
         82, 83, 84, 85, 86, 87, 88, 89, 90;
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> m2 = m.transpose();
    
    JTS_SVD jts_svd(0.1, 1e-9);
    auto [U, S, V] = jts_svd(m);

    cout << U << "\n\n" << S << "\n\n" << V << "\n\n";
    cout << U * S * V << "\n\n";
    
    for (int i = 0; i < U.cols(); i++)
    {
        for (int j = 0; j < U.cols(); j++)
        {
            cout << setprecision(4) << fixed << U.col(i).dot(U.col(j)) << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << U * U.transpose();

    char c;
    cin >> c;
    return 0;
}
