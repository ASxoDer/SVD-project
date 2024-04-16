# SVD-project

![GitHub Actions Workflow Status](https://img.shields.io/github/actions/workflow/status/MathPerv/SVD-project/cmake-multi-platform.yml)

## Building

```sh
mkdir build
cd build
cmake ..
cmake --build .
```

## О проекте

Проект студентов РТУ МИРЭА по импелментации наиболее популярных алгоритмов нахождения SVD.

## Описание

.github/workflows — данные для тестирования cmake

Documentation — Документация проекта

Extern — техническая информация

Src — Исходный код

Theory — алгоритмы СВД

 * bidiagonal svd — [алгоритмы с бидиагональным СВД](https://github.com/MathPerv/SVD-project/tree/main/theory/bidiagonal%20svd)
 
 * iterative refinement — [алгоритмы итеративного вычисления СВД](https://github.com/MathPerv/SVD-project/tree/main/theory/iterative%20refinement)
 
 * Результат тестирования алгоритмов — [результаты тестирования алгоритмов JTS](https://github.com/MathPerv/SVD-project/tree/main/theory/jacobi)
 
 * other — [Другие алгоритмы](https://github.com/MathPerv/SVD-project/tree/main/theory/other)

## Руководители проекта

* Парфенов Денис Васильевич
  promasterden@yandex.ru

* Дроздов Игорь Юрьевич
  drozdovigor94@gmail.com

## Участники проекта

* Абрамов Семён, КМБО-01-20
  semenabramov2002@gmail.com

* Виноградова Арина, КМБО-01-20
  arina.arina@yandex.ru

* Александр Грузберг, КМБО-01-20
  sasha@gruzberg.ru

* Едренников Данила, КМБО-01-20
  don20132020@gmail.com

* Искенеева Камила, КМБО-01-20
  kamila.iskeneeva@yandex.ru

* Ишутин Андрей, КМБО-01-20
  andy-in@mail.ru

* Каргаполов Руслан, КМБО-01-20
  rkargapolov@yandex.ru

* Корешкова Виктория, КМБО-01-20
  officialkvv@rambler.ru

* Кулибаба Данил, КМБО-01-20
  danilkulibaba@ya.ru

* Мустафин Рамиль, КМБО-01-20
  mrr201702@mail.ru

* Нам Александр, КМБО-04-20
  alexnam16@gmail.com

* Романцов Андрей, КМБО-01-20
  powerpineapple@gmail.com

* Савельев Марк, КМБО-01-20
  saveleva2355@gmail.com

## Результаты работы
* Абрамов Семён: "О границах применимости и iteartive refinement
Сингулярные значения бидиагональной матрицы методом бисекции
Документация"

* Виноградова Арина:
"Обновление SVD с помощью μ-вращений
Ускорение итеративного уточнения"

* Александр Грузберг:
"Ускорение итеративного уточнения
Документация"

* Едренников Данила:
Код "iterative-refinement"

* Искенеева Камиля:
"Косвенный метод вычисления SVD
Вычисления сингулярных значений и сингулярных векторов бидиагональной"

* Ишутин Андрей:
Код "Jacobi"

* Каргаполов Руслан:
"Высокая относительная точность
Алгоритм вычисление приближённых тригонометрических факторов
Документация"

* Корешкова Виктория:
Программа для генерации матриц U,V, Σ по массиву сингулярных значений

* Мустафин Рамиль:
"Бидиагонализация
Голуб Кохан с шагом"

* Нам Александр:
Код "Testing.cpp", "generate svd.h"

* Романцов Андрей:
A GPU based hyperbolic SVD algorithm-Novakovic-Singer-2011

* Савельев Марк:
"Разделяй и влавствуй бидиагональное SVD
Документация"
