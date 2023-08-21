Multilayer Perceptron.

Реализация базового многослойного перцептрона с графическим интерфейсом. 
Для реализации графической части используется Qt. 
Проект реализован с применением паттерна MVC с использованием многопоточности для отображения некоторых характеристик нейросети в процессе обучения.

Сборка
Для установки проекта на компьютере должны быть установлены зависимости:

make
gcc(g++)
CMake
Qt6
Qt6::Core
Qt6::Gui
Qt6::Widgets
Qt6::PrintSupport

Порядок действий для установки:

Скопируйте ссылку на репозиторий
Склонируйте репозиторий и зайдите в папку src
Впишите в терминал make install

Тестовые и обучающие выборки находятся в папке datasets. Обучение происходит на готовом датасете в формате .csv.
