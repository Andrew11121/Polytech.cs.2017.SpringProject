# Игра Тетрис


## Информация
Проект написан на языке C. Unit-тесты были написаны с истользованием фреймворка Unity.

### Интерфейс
Командная строка, где сначала пишется путь к программе, а следом путь кфайлу.
![Image alt](https://github.com/alievilya/Polytech.cs.2017.SpringProject/blob/master/doc/res/image1.png)

### Запуск
Запуск игры осуществляется при помощи командной строки. Сначала нужно написать путь к программе.

### Структура директории
Файлы в директории лежат следующим образом:

  Каталог    |   Описание
-------------|--------------------------
src/         | файлы исходного кода 
src/tests    | unit-тесты
doc/         | документация
doc/res/     | ресурсы для документации

### Сборка
Для того, чтобы собрать проект напишите следующее:

Чтобы установить библиотеку Allegro

````
sudo apt-get install liballegro5-dev
````

Чтобы выполнить сборку игры:

````
make
````
Чтобы пересобрать все с нуля, выполните следующие действия::
````
make clean
````
Чтобы открыть игру (тетрис), в консоли напишите: 
````
./AllegroTetris
````
Для запуска тестов необходимо ввести следующую команду:
````
make D_UNITY=res/Unity check
````
Для сборки документации:
````
make doxygen
````
Для сборки документации в формате PDF:
````
make pdf
````
Для сборки документации в формате HTML:
````
make html
````

## Авторы
* **Ilya Aliev** - aliev.ilia@yandex.ru
* **Andrew Bezborodov** - andrew1000@list.ru
## Лицензия
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details

