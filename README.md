Multilayer Perceptron.

Реализация базового многослойного перцептрона с графическим интерфейсом. 
Для реализации графической части используется Qt. 
Проект реализован с применением паттерна MVC с использованием многопоточности для отображения некоторых характеристик нейросети в процессе обучения.

Сборка<br>

Для установки проекта на компьютере должны быть установлены зависимости:

make<br>
gcc(g++)<br>
CMake<br>
Qt6<br>
Qt6::Core<br>
Qt6::Gui<br>
Qt6::Widgets<br>
Qt6::PrintSupport<br>

Порядок действий для установки:<br>

1. Скопируйте ссылку на репозиторий<br>
2. Склонируйте репозиторий и зайдите в папку src<br>
3. Впишите в терминал make install<br>

Тестовые и обучающие выборки находятся в папке datasets. Обучение происходит на готовом датасете в формате .csv.
Интерфейс программы позволяет загружать изображения в формате .bmp для тестирования работы нейросети. Некоторые тестовые изображения находяться в папке materials.
