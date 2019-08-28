# Лабораторные работы по дисциплине "Основы криптографии" на факультете ПМИ, НГТУ


### Папки:
### 2. Основные методы побуквенного кодирования
> 1. Реализовать приложение для кодирования с помощью **алгоритма Хафмфмана**:  
>     * вероятности появления символов алфавита должны храниться в одном файле, а последовательность, подлежащая кодированию, – в другом;
>     * закодированный текст должен сохраняться в файл;
>     * приложение должно:  
> а) выводить полученные кодовые слова для всех символов алфавита;  
> б) вычислять среднюю длину кодового слова;  
> в) вычислять избыточность;  
> г) проверять неравенство Крафта.  
> 2. Реализовать приложение для декодирования с помощью **алгоритма Хафмфмана**:  
>     * вероятности появления символов алфавита должны храниться в одном файле, а закодированная последовательность – в другом;  
>     * раскодированная последовательность должна сохраняться в файл.

### 3. Помехоустойчивое кодирование
> 1. Реализовать приложение, кодирующее заданную последовательность символов **X = [x1, x2, ..., xn]** по **алгоритму Хаффмана** для 
случая равновероятного появления символов алфавита с проверкой на чётность. Проверка на чётность означает, что на выходе из кодера 
получается сообщение **Y = [y1, y2, ..., ym-1, y\`m, ym+1, ym+2, ..., yk-1, y\`k, ..., y\`s]**, при этом биты **y\`m, ..., y\`s** 
являются проверочными. Если длина кодового слова четна, то в окончательном виде оно будет иметь вид: 
**Y = [y1, y2, y1, y1ꚛy2, y3, y4, y3ꚛy4, ...]**;  иначе **Y = [y1, y2, y3, y1ꚛy2ꚛy3, y4, y5, y6, y4ꚛy5ꚛy6, ...]**.  
> 2. Реализовать приложение для декодирования сообщения:
>     * подлежащая декодированию последовательность задаётся через входной файл;
>     * результатом работы программы являются все части сообщения, которые удалось раскодировать (т.е. в них не было ошибок при передаче по 
каналу связи), а также сообщения об ошибках с номерами позиций, в которых они произошли (если ошибки были);
>     * раскодированная последовательность сохраняется в один файл, а сообщения об обнаруженных ошибках – в другой либо выводятся 
на интерфейс.

### 4. Шифры перестановки и замены
> 1. Реализовать приложение для шифрования:
>     * Шифруемый текст должен храниться в одном файле, а ключ шифрования (если есть) – в другом.
>     * Шифрование производится согласно **составному шифру Виженера**. Конкретную реализацию алгоритма нужно выбрать самостоятельно. 
В алфавит шифруемых сообщений, который задан в варианте, нужно добавить символ пробела, который является разделителем слов.
>     * Зашифрованный текст должен сохраняться в файл.
> 2. Реализовать приложение для дешифрования:  
>     * Зашифрованный текст должен храниться в одном файле, ключ (если есть) – в другом.  
>     * Расшифрованный текст должен сохраняться в файл.  

### 5. Генерирование равномерно распределённых псевдослучайных последовательностей
> Реализовать приложение **Конгруэнтный генератор со случайными параметрами**, удовлетворяющее следующим требованиям:
> * Во входном файле хранятся параметры генератора и прочие входные данные, необходимые для работы программы.
> * Программа генерирует псевдослучайную равномерно распределённую последовательность с помощью заданного в варианте генератора.
> * Для сгенерированной последовательности программа вычисляет период.
> * Программа проводит проверку качества сгенерированной последовательности по критерию χ2-Пирсона.
> * Сгенерированная последовательность, а также данные о найденном периоде и о результате проверки по критерию χ2-Пирсона сохраняются 
в выходной файл (или файлы).

### 6. Тестирование числа на простоту и построение больних простых числе
> Реализовать приложение **Тест на основе малой теоремы Ферма**, удовлетворяющее следующим требованиям:
> * Во входном файле хранятся входные данные, необходимые для работы программы.
> * Программа генерирует простое число с помощью заданного в варианте теста простоты.
> * Программа выдаёт сгенерированное число, время и количество итераций основного цикла, потребовавшихся для генерации.