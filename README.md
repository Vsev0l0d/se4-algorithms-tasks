# Содержание
1. [Введение в алгоритмы](#введение-в-алгоритмы)
	1. [Агроном](#агроном)
	2. [Профессор Хаос](#профессор-хаос)
	3. [Зоопарк Глеба](#зоопарк-глеба)
	4. [Конфигурационный файл](#конфигурационный-файл)
	5. [1005 Куча камней](#1005-куча-камней)
	6. [1296 Гиперпереход](#1296-гиперпереход)
2. [Сортировка](#сортировка)
	1. [Коровы](#коровы)
	2. [Число](#число)
	3. [Кошмар в замке](#кошмар-в-замке)
	4. [Магазин](#магазин)
	5. [1322 Шпион](#1322-шпион)
	6. [1604 В Стране Дураков](#1604-в-стране-дураков)
3. [Структуры данных](#структуры-данных)
	1. [Минимум на отрезке](#минимум-на-отрезке)
	2. [Гоблины и очереди](#гоблины-и-очереди)
	3. [Машинки](#машинки)
	4. [Менеджер памяти - 1](#менеджер-памяти---1)
	5. [1521 Военные учения 2](#1521-военные-учения-2)
	6. [1628 Белые полосы](#1628-белые-полосы)
4. [Алгоритмы на графах](#алгоритмы-на-графах)
	1. [Цивилизация](#цивилизация)
	2. [Свинки-копилки](#свинки-копилки)
	3. [Долой списывание](#долой-списывание)
	4. [Авиаперелёты](#авиаперелёты)
	5. [1162 Currency Exchange](#1162-currency-exchange)
	6. [1806 Мобильные телеграфы](#1806-мобильные-телеграфы)

# Введение в алгоритмы
## Агроном
Городской школьник Лёша поехал на лето в деревню и занялся выращиванием цветов. Он посадил n цветков вдоль одной длинной прямой грядки, и они успешно выросли. Лёша посадил множество различных видов цветков, i-й от начала грядки цветок имеет вид ai, где ai "— целое число, номер соответствующего вида в «Каталоге юного агронома».

Теперь Лёша хочет сделать фотографию выращенных им цветов и выложить ее в раздел «мои грядки» в социальной сети для агрономов «ВКомпосте». На фотографии будет виден отрезок из одного или нескольких высаженных подряд цветков.

Однако он заметил, что фотография смотрится не очень интересно, если на ней много одинаковых цветков подряд. Лёша решил, что если на фотографии будут видны три цветка одного вида, высаженные подряд, то его друзья — специалисты по эстетике цветочных фотографий — поставят мало лайков.

Помогите ему выбрать для фотографирования как можно более длинный участок своей грядки, на котором нет трех цветков одного вида подряд.

### Формат ввода
В первой строке содержится целое число n (1 ≤ n ≤ 200 000) — количество цветов на грядке.

Во второй строке содержится n целых чисел ai (1 ≤ ai ≤ 10^9), обозначающих вид очередного цветка. Одинаковые цветки обозначаются одинаковыми числами, разные — разными.

### Формат вывода
Выведите номер первого и последнего цветка на самом длинном искомом участке. Цветки нумерются от 1 до n.

Если самых длинных участков несколько, выведите участок, который начинается раньше.

### Пример
| **Ввод**     | **Вывод**  |
| :----------- | :--------- |
| 6            | 3 6        |
| 5 6 6 6 23 9 |            |

[Содержание](#содержание)
## Профессор Хаос
В секретной лаборатории профессора Хаоса проходит эксперимент по выращиванию особо опасных бактерий. В начале первого дня эксперимента у Хаоса имеется a особо опасных бактерий.

Каждый день эксперимента устроен следующим образом. Рано утром профессор достает из контейнера все свои бактерии и помещает их в инкубатор, где бактерии начинают делиться. Вместо каждой бактерии образуется b новых бактерий.

После извлечения бактерий из инкубатора c из них используются для проведения различных опытов и затем уничтожаются. Если после извлечения из инкубатора имеется менее c бактерий, для проведения опытов используются все имеющиеся бактерии, и эксперимент заканчивается.

Оставшиеся бактерии в конце дня необходимо поместить в контейнер и продолжить использовать в эксперименте. Однако в контейнер можно поместить не более d бактерий, поэтому если число оставшихся бактерий больше d, то в контейнер помещаются d бактерий, а остальные уничтожаются.

Теперь профессор Хаос хочет выяснить, сколько особо опасных бактерий будет у него в контейнере после k-го дня эксперимента. Помогите ему найти ответ на этот вопрос.

### Формат ввода
В единственной строке входного файла содержится пять целых чисел a, b, c, d и k (1 ≤ a, b ≤ 1000, 0 ≤ c ≤ 1000, 1 ≤ d ≤ 1000, a ≤ d, 1 ≤ k ≤ 10^18).

### Формат вывода
Выведите одно число — количество бактерий у Хаоса к концу k-го дня. Если эксперимент завершится в k-й день или ранее, выведите число 0.

### Пример 1
| **Ввод**     | **Вывод**  |
| :----------- | :--------- |
| 1 3 1 5 2    | 5          |

### Пример 2
| **Ввод**     | **Вывод**  |
| :----------- | :--------- |
| 1 2 0 4 3    | 4          |

### Пример 3
| **Ввод**     | **Вывод**  |
| :----------- | :--------- |
| 1 2 3 5 2    | 0          |

[Содержание](#содержание)
## Зоопарк Глеба
Недавно Глеб открыл зоопарк. Он решил построить его в форме круга и, естественно, обнёс забором. Глеб взял вас туда начальником охраны. Казалось бы все началось так хорошо, но именно в вашу первую смену все животные разбежались. В зоопарке n животных различных видов, также под каждый из видов есть свои ловушки. К сожалению некоторые животные враждуют с друг другом в природе (они обозначены разными буквами), а зоопарк обнесён забором и имеет форму круга. С помощью камер, удалось выяснить, где находятся все животные. Умная система поддержки жизнедеятельности зоопарка уже просканировала зоопарк и вывела id всех животных и ловушек в том порядке, в котором они видны из центра зоопарка. Получилось так, что все животные и все ловушки находятся на краю зоопарка. Вы хотите понять, могут ли животные прийти в свою ловушку так, чтобы их путь не пересекался с другими. Если да, также предъявите какую-нибудь из схем поимки животных.

### Формат ввода
 На вход подается строчка из 2 ⋅ n символов латинского алфавита, где маленькая буква - животное, а большая - ловушка. Размер строки не более 100000.

### Формат вывода
Требуется вывести "Impossible", если решения не существует или "Possible", если можно вернуть всех животных в клетки. В случае если можно, то для каждой ловушки в порядке обхода требуется вывести индекс животного в ней.

### Пример 1
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| ABba     | Possible   |
|          | 2 1        |
 
### Пример 2
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| ABab     | Impossible |

### Примечания
Первый пример: Животное b идёт в ловушку B, а животное a ловится в ловушку A. Их пути не пересекаются, поэтому

Второй пример: Пути животных пересекаются, поэтому поймать их невозможно

[Содержание](#содержание)
## Конфигурационный файл
Вадим разрабатывает парсер конфигурационных файлов для своего проекта. Файл состоит из блоков, которые выделяются с помощью символов «{» — начало блока, и «}» — конец блока. Блоки могут вкладываться друг в друга. В один блок может быть вложено несколько других блоков.

В конфигурационном файле встречаются переменные. Каждая переменная имеет имя, которое состоит из не более чем десяти строчных букв латинского алфавита. Переменным можно присваивать числовые значения. Изначально все переменные имеют значение 0.

Присваивание нового значения записывается как <variable>=<number>, где <variable> — имя переменной, а <number> — целое число, по модулю не превосходящее 10^9. Парсер читает конфигурационный файл построчно. Как только он встречает выражение присваивания, он присваивает новое значение переменной. Это значение сохраняется до конца текущего блока, а затем восстанавливается старое значение переменной. Если в блок вложены другие блоки, то внутри тех из них, которые идут после присваивания, значение переменной также будет новым.

Кроме того, в конфигурационном файле можно присваивать переменной значение другой переменной. Это действие записывается как <variable1>=<variable2>. Прочитав такую строку, парсер присваивает текущее значение переменной variable2 переменной variable1. Как и в случае присваивания константного значения, новое значение сохраняется только до конца текущего блока. После окончания блока переменной возвращается значение, которое было перед началом блока.

Для отладки Вадим хочет напечатать присваиваемое значение для каждой строки вида <variable1>=<variable2>. Помогите ему отладить парсер.

### Формат ввода
Входные данные содержат хотя бы одну и не более 105 строк. Каждая строка имеет один из четырех типов:

* { — начало блока;
* } — конец блока;
* <variable>=<number> — присваивание переменной значения, заданного числом;
* <variable1>=<variable2> — присваивание одной переменной значения другой переменной. Переменные <variable1> и <variable2> могут совпадать.

Гарантируется, что ввод является корректным и соответствует описанию из условия. Ввод не содержит пробелов.

### Формат вывода
Для каждой строки типа <variable1>=<variable2> выведите значение, которое было присвоено.

### Пример
| **Ввод**     | **Вывод**  |
| :----------- | :--------- |
| a=b          | 0          |
| b=123        | 123        |
| var=b        | -34        |
| b=-34        | 1000000000 |
| {            | 1000000000 |
| c=b          | 123        |
| b=1000000000 | -34        |
| d=b          |
| {            |
| a=b          |
| e=var        |
| }            |
| }            |
| b=b          |

[Содержание](#содержание)
## 1005 Куча камней
У вас есть несколько камней известного веса w1, …, wn. Напишите программу, которая распределит камни в две кучи так, что разность весов этих двух куч будет минимальной.

### Исходные данные
Ввод содержит количество камней n (1 ≤ n ≤ 20) и веса камней w1, …, wn (1 ≤ wi ≤ 100 000) — целые, разделённые пробельными символами.

### Результат
Ваша программа должна вывести одно число — минимальную разность весов двух куч.

### Пример
| **Ввод**     | **Вывод**  |
| :----------- | :--------- |
| 5            | 3          |
| 5 8 13 27 14 |            |

[Содержание](#содержание)
## 1296 Гиперпереход
Гиперпереход, открытый ещё в начале XXI-го века, и сейчас остаётся основным способом перемещения на расстояния до сотен тысяч парсеков. Но совсем недавно физиками открыто новое явление. Оказывается, длительностью альфа-фазы перехода можно легко управлять. Корабль, находящийся в альфа-фазе перехода, накапливает гравитационный потенциал. Чем больше накопленный гравитационный потенциал корабля, тем меньше энергии потребуется ему на прыжок сквозь пространство. Ваша цель — написать программу, которая позволит кораблю за счёт выбора времени начала альфа-фазы и её длительности накопить максимальный гравитационный потенциал.

В самой грубой модели грави-интенсивность — это последовательность целых чисел pi. Будем считать, что если альфа-фаза началась в момент i и закончилась в момент j, то накопленный в течение альфа-фазы потенциал — это сумма всех чисел, стоящих в последовательности на местах от i до j.

### Исходные данные
В первой строке входа записано целое число N — длина последовательности, отвечающей за грави-интенсивность (0 ≤ N ≤ 60000). Далее идут N строк, в каждой записано целое число pi (−30000 ≤ pi ≤ 30000).

### Результат
Максимальный гравитационный потенциал, который может накопить корабль в альфа-фазе прыжка. Считается, что потенциал корабля в начальный момент времени равен нулю.

### Пример 1
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 10 | 187 |
| 31
| -41
| 59
| 26
| -53
| 58
| 97
| -93
| -23
| 84

### Пример 2
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 3 | 0 |
| -1
| -5
| -6

[Содержание](#содержание)
# Сортировка
## Коровы
На прямой расположены стойла, в которые необходимо расставить коров так, чтобы минимальное расcтояние между коровами было как можно больше.

### Формат ввода
В первой строке вводятся числа N (2 < N ≤ 10^5) – количество стойл и K (1 < K < N ) – количество коров. Во второй строке задаются N натуральных чисел в порядке возрастания – координаты стойл (координаты не превосходят 10^9).

### Формат вывода
Выведите одно число – наибольшее возможное допустимое расстояние.

### Пример 1
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 6 3 | 9 |
| 2 5 7 11 15 20 |

### Пример 2
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 5 3 | 99 |
| 1 2 3 100 1000 |

[Содержание](#содержание)
## Число
Вася написал на длинной полоске бумаги большое число и решил похвастаться своему старшему брату Пете этим достижением. Но только он вышел из комнаты, чтобы позвать брата, как его сестра Катя вбежала в комнату и разрезала полоску бумаги на несколько частей. В результате на каждой части оказалось одна или несколько идущих подряд цифр.

Теперь Вася не может вспомнить, какое именно число он написал. Только помнит, что оно было очень большое. Чтобы утешить младшего брата, Петя решил выяснить, какое максимальное число могло быть написано на полоске бумаги перед разрезанием. Помогите ему!

### Формат ввода
Входной файл содержит одну или более строк, каждая из которых содержит последовательность цифр. Количество строк во входном файле не превышает 100, каждая строка содержит от 1 до 100 цифр. Гарантируется, что хотя бы в одной строке первая цифра отлична от нуля.

### Формат вывода
Выведите в выходной файл одну строку — максимальное число, которое могло быть написано на полоске перед разрезанием.

### Пример 1
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 2 | 66220004 |
| 20
| 004
| 66

### Пример 2
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 3 | 3 |

[Содержание](#содержание)
## Кошмар в замке
Ходят легенды, что пока Аврора спала, ей снилось, что она ходит по разным местам: леса, поля, города и сёла. И вот однажды она наткнулась на пещеру, в которой сидел мудрец. Когда мудрец поднял на Аврору глаза, он изрёк: «Дорогая Аврора! Ты уже годами скитаешься по этим землям. Я хочу предложить тебе задачку. Вот тебе строка s. Каждая буква из алфавита имеет свой вес ci. Вес строки, которую ты можешь получить из s многократным обменом любых двух букв, вычисляется так: для каждой буквы алфавита посчитай максимальное расстояние между позициями, в которых стоит эта буква и перемножь его с весом этой буквы. Принеси мне строку максимально возможного веса, и я тебе расскажу, в чём смысл жизни».

К счастью, когда Аврора уже шла со строкой к мудрецу, её поцеловал Филипп, и Аврора вышла из этого кошмара. Теперь вам предлагается самим окунуться в этот кошмар и решить поставленную задачу.

### Формат ввода
Дана строка, состоящая из строчных букв латинского алфавита (1 ≤ |s| ≤ 10^5). Следующая строка ввода содержит 26 чисел — веса букв латинского алфавита от «a» до «z», веса неотрицательны и не превосходят 2^31 - 1.

### Формат вывода
Выведите строку s, в которой переставлены буквы так, чтобы полученный вес был максимально возможным. Если искомых вариантов несколько, выведите любой из них.

### Пример
| **Ввод**  | **Вывод**  |
| :-------- | :--------- |
| lkshrules | slkhruels  |
| 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 |

[Содержание](#содержание)
## Магазин
У Билла большая семья: трое сыновей, девять внуков. И всех надо кормить. Поэтому Билл раз в неделю ходит в магазин.

Однажды Билл пришел в магазин и увидел, что в магазине проводится акция под названием «каждый k-й товар бесплатно». Изучив правила акции, Билл выяснил следующее. Пробив на кассе товары, покупатель получает чек. Пусть в чеке n товаров, тогда n/k округленное вниз самых дешевых из них достаются бесплатно.

Например, если в чеке пять товаров за 200, 100, 1000, 400 и 100 рублей, соответственно, и k = 2, то бесплатно достаются оба товара по 100 рублей, всего покупатель должен заплатить 1600 рублей.

Билл уже выбрал товары, и направился к кассе, когда сообразил, что товары, которые он хочет купить, можно разбить на несколько чеков, и благодаря этому потратить меньше денег.

Помогите Биллу выяснить, какую минимальную сумму он сможет заплатить за выбранные товары, возможно разбив их на несколько чеков.

### Формат ввода
Первая строка входного файла содержит два целых числа n, k (1 ≤ n ≤ 100 000, 2 ≤ k ≤ 100) — количество товаров, которые хочет купит Билл и параметр акции «каждый k-й товар бесплатно».

Следующая строка содержит n целых чисел ai (1 ≤ ai ≤ 10 000) — цены товаров, которые покупает Билл.

### Пример
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 5 2 | 1300 |
| 200 100 1000 400 100 |

[Содержание](#содержание)
## 1322 Шпион
Спецслужбы обнаружили действующего иностранного агента. Шпиона то есть. Установили наблюдение и выяснили, что каждую неделю он через Интернет посылает кому-то странные нечитаемые тексты. Чтобы выяснить, к какой информации получил доступ шпион, требуется расшифровать информацию. Сотрудники спецслужб проникли в квартиру разведчика, изучили шифрующее устройство и выяснили принцип его работы.

На вход устройства подается строка текста S1 = s1s2...sN. Получив ее, устройство строит все циклические перестановки этой строки, то есть S2 = s2s3...sNs1, ..., SN = sNs1s2...sN-1. Затем множество строк S1, S2, ..., SN сортируется лексикографически по возрастанию. И в этом порядке строчки выписываются в столбец, одна под другой. Получается таблица размером N × N. В какой-то строке K этой таблицы находится исходное слово. Номер этой строки вместе с последним столбцом устройство и выдает на выход.

Например, если исходное слово S1 = abracadabra, то таблица имеет такой вид:
1. aabracadabr = S11
1. abraabracad = S8
1. abracadabra = S1
1. acadabraabr = S4
1. adabraabrac = S6
1. braabracada = S9
1. bracadabraa = S2
1. cadabraabra = S5
1. dabraabraca = S7
1. raabracadab = S10
1. racadabraab = S3

И результатом работы устройства является число 3 и строка rdarcaaaabb.

Это все, что известно про шифрующее устройство. А вот дешифрующего устройства не нашли. Но поскольку заведомо известно, что декодировать информацию можно (а иначе зачем же ее передавать?), Вам предложили помочь в борьбе с хищениями секретов и придумать алгоритм для дешифровки сообщений. А заодно и реализовать дешифратор.

### Исходные данные
В первой и второй строках находятся соответственно целое число и строка, возвращаемые шифратором. Длина строки и число не превосходят 100000. Строка содержит лишь следующие символы: a-z, A-Z, символ подчеркивания. Других символов в строке нет. Лексикографический порядок на множестве слов задается таким порядком символов:

ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyz

Символы здесь выписаны в порядке возрастания.

### Результат
Выведите декодированное сообщение в единственной строке.

### Пример
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 3 | abracadabra |
| rdarcaaaabb |

[Содержание](#содержание)
## 1604 В Стране Дураков
Главный бульдог-полицейский Страны Дураков решил ввести ограничение скоростного режима на автомобильной трассе, ведущей от Поля Чудес к пруду Черепахи Тортиллы. Для этого он заказал у Папы Карло n знаков ограничения скорости. Папа Карло слабо разбирался в дорожном движении и поэтому изготовил знаки с разными ограничениями на скорость: 49 км/ч, 34 км/ч, 42 км/ч, и т.д. Всего получилось k различных ограничений: n1 знаков с одним ограничением, n2 знаков со вторым ограничением, и т.д. (n1 + … + nk = n)

Бульдог-полицейский ничуть не расстроился, получив такие знаки, напротив, он решил извлечь из этого экономическую выгоду. Дело в том, что по Правилам дорожного движения Страны Дураков ограничение на скорость действует вплоть до следующего знака. Если на знаке написано число 60, это означает, что участок от данного знака до следующего нужно проехать ровно со скоростью 60 километров в час — не больше и не меньше. Бульдог распорядился расставить знаки так, чтобы обогатившимся на Поле Чудес автолюбителям во время своего движения по трассе приходилось как можно больше раз менять скорость. Для этого нужно расставить имеющиеся знаки в правильном порядке. Если Вы поможете бульдогу это сделать, то он готов будет поделиться с Вами частью своих доходов.

### Исходные данные
В первой строке дано число k — количество различных типов знаков с ограничением скорости (1 ≤ k ≤ 10000). Во второй строке через пробел перечислены целые положительные числа n1, …, nk. Сумма всех ni не превосходит 10000.

### Результат
Выведите n целых чисел в пределах от 1 до k — порядок, в котором нужно расставить по трассе имеющиеся знаки. Вне зависимости от того, какой знак стоит первым, считается, что, проезжая его, водитель меняет скорость, так как до этого ограничения не действовали. Если задача имеет несколько решений, выведите любое.

### Пример
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 2        | 1 2 1 2    |
| 2 2      |

[Содержание](#содержание)
# Структуры данных
## Минимум на отрезке
Рассмотрим последовательность целых чисел длины N. По ней с шагом 1 двигается «окно» длины K, то есть сначала в «окне» видно первые K чисел, на следующем шаге в «окне» уже будут находиться K чисел, начиная со второго, и так далее до конца последовательности. Требуется для каждого положения «окна» определить минимум в нём.

### Формат ввода
В первой строке входных данных содержатся два числа N и K (1 ≤ N ≤ 150000, 1 ≤ K ≤ 10000, K ≤ N) – длины последовательности и «окна», соответственно. На следующей строке находятся N чисел – сама последовательность. Числа последовательности не превосходят по модулю 10^5.

### Формат вывода
Выходые данные должны содержать N - K + 1 строк – минимумы для каждого положения «окна».

### Пример
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 7 3      | 1 2 2 3 1  |
| 1 3 2 4 5 3 1 |


[Содержание](#содержание)
## Гоблины и очереди
Гоблины Мглистых гор очень любях ходить к своим шаманам. Так как гоблинов много, к шаманам часто образуются очень длинные очереди. А поскольку много гоблинов в одном месте быстро образуют шумную толку, которая мешает шаманам проводить сложные медицинские манипуляции, последние решили установить некоторые правила касательно порядка в очереди.

Обычные гоблины при посещении шаманов должны вставать в конец очереди. Привилегированные же гоблины, знающие особый пароль, встают ровно в ее середину, причем при нечетной длине очереди они встают сразу за центром.

Так как гоблины также широко известны своим непочтительным отношением ко всяческим правилам и законам, шаманы попросили вас написать программу, которая бы отслеживала порядок гоблинов в очереди.
### Формат ввода
В первой строке входных данный записано число N (1 ≤ N ≤ 10^5)  количество запросов. Следующие N строк содержат описание запросов в формате:

- \+ i  гоблин с номером i (1 ≤ i ≤ N) встаёт в конец очереди.
- \* i  привилегированный гоблин с номером i встает в середину очереди.
- \- первый гоблин из очереди уходит к шаманам. Гарантируется, что на момент такого запроса очередь не пуста.

### Формат вывода
Для каждого запроса типа - программа должна вывести номер гоблина, который должен зайти к шаманам.

### Пример 1
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 7        | 1 |
| + 1      | 2 |
| + 2      | 3 |
| - |
| + 3 |
| + 4 |
| - |
| - |

### Пример 2
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 2        |
| * 1      |
| + 2      |

[Содержание](#содержание)
## Машинки
Петя, которому три года, очень любит играть с машинками. Всего у Пети N различных машинок, которые хранятся на полке шкафа так высоко, что он сам не может до них дотянуться. Одновременно на полу комнаты может находиться не более K машинок. Петя играет с одной из машинок на полу и если он хочет поиграть с другой машинкой, которая также находится на полу, то дотягивается до нее сам. Если же машинка находится на полке, то он обращается за помощью к маме. Мама может достать для Пети машинку с полки и одновременно с этим поставить на полку любую машинку с пола. Мама очень хорошо знает своего ребенка и может предугадать последовательность, в которой Петя захочет играть с машинками. При этом, чтобы не мешать Петиной игре, она хочет совершить как можно меньше операций по подъему машинки с пола, каждый раз правильно выбирая машинку, которую следует убрать на полку. Ваша задача состоит в том, чтобы определить минимальное количество операций. Перед тем, как Петя начал играть, все машинки стоят на полке.

### Формат ввода
В первой строке содержаться три числа N, K и P (1≤ K, N ≤ 100000, 1≤ P ≤ 500000). В следующих P строках записаны номера машинок в том порядке, в котором Петя захочет играть с ними.

### Формат вывода
Выведите единственное число: минимальное количество операций, которое надо совершить Петиной маме.

### Пример 1
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 3 2 7    | 4 |
| 1 |
| 2 |
| 3 |
| 1 |
| 3 |
| 1 |
| 2 |

### Пример 2
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 10 3 20  | 11 |
| 1 |
| 2 |
| 3 |
| 2 |
| 3 |
| 4 |
| 5 |
| 4 |
| 3 |
| 5 |
| 1 |
| 5 |
| 6 |
| 8 |
| 10 |
| 9 |
| 8 |
| 9 |
| 10 |
| 6 |
 
### Примечания
В этой задаче можно использовать STL.

Пояснения к примеру 1:

Операция 1: снять машинку 1

Операция 2: снять машинку 2

Операция 3: поднять машинку 2 и снять машинку 3

Операция 4: поднять машинку 3 или 1 и снять машинку 2

[Содержание](#содержание)
## Менеджер памяти - 1
Пете поручили написать менеджер памяти для новой стандартной библиотеки языка \varphi++. В распоряжении у менеджера находится массив из N последовательных ячеек памяти, пронумерованных от 1 до N. Задача менеджера – обрабатывать запросы приложений на выделение и освобождение памяти. Запрос на выделение памяти имеет один параметр K. Такой запрос означает, что приложение просит выделить ему K последовательных ячеек памяти. Если в распоряжении менеджера есть хотя бы один свободный блок из K последовательных ячеек, то он обязан в ответ на запрос выделить такой блок. При этом непосредственно перед самой первой ячейкой памяти выделяемого блока не должно располагаться свободной ячейки памяти. После этого выделенные ячейки становятся занятыми и не могут быть использованы для выделения памяти, пока не будут освобождены. Если блока из K последовательных свободных ячеек нет, то запрос отклоняется. Запрос на освобождение памяти имеет один параметр T. Такой запрос означает, что менеджер должен освободить память, выделенную ранее при обработке запроса с порядковым номером T. Запросы нумеруются, начиная с единицы. Гарантируется, что запрос с номером T – запрос на выделение, причем к нему еще не применялось освобождение памяти. Освобожденные ячейки могут снова быть использованы для выделения памяти. Если запрос с номером T был отклонен, то текущий запрос на освобождение памяти игнорируется. Требуется написать менеджер памяти, удовлетворяющий приведенным критериям.

### Формат ввода
Первая строка входного файла содержит числа N и M – количество ячеек памяти и количество запросов соответственно (1 ≤ N ≤ 2^31 - 1; 1 ≤ M ≤ 10^5). Каждая из следующих M строк содержит по одному числу: (i+1)-я строка входного файла (1 ≤ i ≤ M) содержит либо положительное число K, если i-й запрос – запрос на выделение с параметром K (1 ≤ K ≤ N), либо отрицательное число -T, если i-й запрос – запрос на освобождение с параметром T (1 ≤ T < i).

### Формат вывода
Для каждого запроса на выделение памяти выведите в выходной файл результат обработки этого запроса: для успешных запросов выведите номер первой ячейки памяти в выделенном блоке, для отклоненных запросов выведите число -1. Результаты нужно выводить в порядке следования запросов во входном файле.

### Пример 1
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 42 9     | 1 |
| 7 | 8 |
| 3 | 11 |
| 8 | 19 |
| -2 | 25 |
| 6 | 30 |
| 5 | 39 |
| -5 | 
| 9 | 
| 4 | 

### Пример 2
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 128 12   | 1 |
| 1 | 2 |
| 2 | 4 |
| 4 | 8 |
| -2 | 16 |
| 8 | 32 |
| -3 | 64 |
| 16 | 
| -5 | 
| 32 | 
| -7 | 
| 64 | 
| -1 | 

### Пример 3
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 2000000000 9 | 1 2000000000 -1 1 -1 -1 |
| 1999999999 1 2 -3 -1 1999999999 1 -7 1 | 

### Пример 4
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 16 40 | 1 5 9 13 -1 -1 1 1 1 1 1 13 1 1 4 9 1 4 9 1 |
| 4 4 4 4 4 4 -1 -2 1 -9 -3 -4 -5 -6 15 -15 16 -17 10 -19 12 4 -21 12 -22 -24 3 5 8 -28 -27 -29 3 5 7 -33 -35 -34 16 -39 |

[Содержание](#содержание)
## 1521 Военные учения 2
### Вступление
В ходе недавних военных учений (более подробно эта история рассказана в задаче «Военные учения») министр обороны Советской Федерации товарищ Иванов имел возможность лично убедиться в блестящей боевой готовности солдат вверенной ему Советской Армии. Но одна вещь всё же продолжала беспокоить выдающегося военачальника. Прославленный генерал понимал, что была продемонстрирована лишь физическая подготовка солдат. Теперь настало время организовать очередные учения и проверить интеллектуальные способности личного состава.

Генерал Шульман, вновь назначенный ответственным за проведение учений, пожертвовал все выделенные деньги бедным и с чистой совестью лёг спать. Во сне генералу явился учебник по тактике и изложил схему, руководствуясь которой можно провести учения совершенно бесплатно.

### Задача
В соответствии с этой схемой учения делятся на N раундов, в течение которых N солдат, последовательно пронумерованных от 1 до N, маршируют друг за другом по кругу, т.е. первый следует за вторым, второй за третьим, ..., (N-1)-й за N-м, а N-й за первым. В каждом раунде очередной солдат выбывает из круга и идёт чистить унитазы, а оставшиеся продолжают маршировать. В очередном раунде выбывает солдат, марширующий на K позиций впереди выбывшего на предыдущем раунде. В первом раунде выбывает солдат с номером K.

Разумеется, г-н Шульман не питал никаких надежд на то, что солдаты в состоянии сами определить очерёдность выбывания из круга. «Эти неучи даже траву не могут ровно покрасить», – фыркнул он и отправился за помощью к прапорщику Шкурко.

### Исходные данные
Единственная строка содержит целые числа N (1 ≤ N ≤ 100000) и K (1 ≤ K ≤ N).

### Результат
Вывести через пробел номера солдат в порядке их выбывания из круга.

### Пример
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 5 3      | 3 1 5 2 4  |

[Содержание](#содержание)
## 1628 Белые полосы
У каждого неудачника в жизни бывают не только чёрные, но и белые полосы. Марсианин Вась-Вась отмечает в календаре, представляющем собой таблицу m × n, те дни, когда ему ужасно не повезло. Если Вась-Васю не повезло в j-й день i-й недели, то он закрашивает ячейку таблицы (i, j) в чёрный цвет. Все незакрашенные ячейки в таблице имеют белый цвет.

Будем называть отрезками жизни прямоугольники размером 1 × l либо l × 1. Белыми полосами Вась-Вась считает все максимальные по включению белые отрезки таблицы. А сможете ли Вы определить, сколько всего белых полос было в жизни Вась-Вася?

### Исходные данные
Первая строка содержит целые числа m, n, k — размеры календаря и количество неудачных дней в жизни Вась-Вася (1 ≤ m, n ≤ 30000; 0 ≤ k ≤ 60000). В следующих k строках перечислены неудачные дни в виде пар (xi, yi), где xi — номер недели, к которой относится неудачный день, а yi — номер дня в этой неделе (1 ≤ xi ≤ m; 1 ≤ yi ≤ n). Описание каждого неудачного дня встречается только один раз.

### Результат
Выведите число белых полос в жизни Вась-Вася.

### Пример 1
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 3 5 4    | 8 |
| 1 1 |
| 1 5 |
| 2 2 |
| 3 3 |

### Пример 2
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 5 1 2    | 2 |
| 2 1 |
| 3 1 |

[Содержание](#содержание)
# Алгоритмы на графах
## Цивилизация

Карта мира в компьютерной игре «Цивилизация» версии 1 представляет собой прямоугольник, разбитый на квадратики. Каждый квадратик может иметь один из нескольких возможных рельефов, для простоты ограничимся тремя видами рельефов  — поле, лес и вода. Поселенец перемещается по карте, при этом на перемещение в клетку, занятую полем, необходима одна единица времени, на перемещение в лес  — две единицы времени, а перемещаться в клетку с водой нельзя.

У вас есть один поселенец, вы определили место, где нужно построить город, чтобы как можно скорее завладеть всем миром. Найдите маршрут переселенца, приводящий его в место строительства города, требующий минимального времени. На каждом ходе переселенец может перемещаться в клетку, имеющую общую сторону с той клеткой, где он сейчас находится.

### Формат ввода
Во входном файле записаны два натуральных числа N и M, не превосходящих 1000  — размеры карты мира (N  — число строк в карте, M  — число столбцов). Затем заданы координаты начального положения поселенца x и y, где x  — номер строки, y  — номер стролбца на карте (1 ≤ x ≤ N, 1 ≤ y ≤ M), строки нумеруются сверху вниз, столбцы  — слева направо. Затем аналогично задаются координаты клетки, куда необходимо привести поселенца.

Далее идет описание карты мира в виде N строк, каждая из которых содержит M символов. Каждый символ может быть либо «.» (точка), обозначающим поле, либо «W», обозначающим лес, либо «#», обозначающим воду. Гарантируется, что начальная и конечная клетки пути переселенца не являются водой.

### Формат вывода
В первой строке выходного файла выведите количество единиц времени, необходимое для перемещения поселенца (перемещение в клетку с полем занимает 1 единицу времени, перемещение в клетку с лесом  — 2 единицы времени). Во второй строке выходного файла выведите последовательность символов, задающих маршрут переселенца. Каждый символ должен быть одним из четырех следующих: «N» (движение вверх), «E» (движение вправо), «S» (движение вниз), «W» (движение влево). Если таких маршрутов несколько, выведите любой из них.

Если дойти из начальной клетки в конечную невозможно, выведите число -1.

### Пример
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 4 8 1 1 4 8 | 13 |
| ....WWWW | SSSEENEEEEES |
| .######. |
| .#..W... |
| ...WWWW. |

[Содержание](#содержание)
## Свинки-копилки
У Васи есть n свинок-копилок, свинки занумерованы числами от 1 до n. Каждая копилка может быть открыта единственным соответствующим ей ключом или разбита.

Вася положил ключи в некоторые из копилок (он помнит, какой ключ лежит в какой из копилок). Теперь Вася собрался купить машину, а для этого ему нужно достать деньги из всех копилок. При этом он хочет разбить как можно меньшее количество копилок (ведь ему еще нужно копить деньги на квартиру, дачу, вертолет…). Помогите Васе определить, какое минимальное количество копилок нужно разбить.

### Формат ввода
В первой строке содержится число n — количество свинок-копилок (1 ≤ n ≤ 100). Далее идет n строк с описанием того, где лежит ключ от какой копилки: в i-й из этих строк записан номер копилки, в которой находится ключ от i-й копилки.

### Формат вывода
Выведите единственное число: минимальное количество копилок, которые необходимо разбить.

### Пример
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 4 | 2 |
| 2 |
| 1 |
| 2 |
| 4 |

[Содержание](#содержание)
## Долой списывание
Во время теста Михаил Дмитриевич заметил, что некоторые лкшата обмениваются записками. Сначала он хотел поставить им всем двойки, но в тот день Михаил Дмитриевич был добрым, а потому решил разделить лкшат на две группы: списывающих и дающих списывать, и поставить двойки только первым.

У Михаила Дмитриевича записаны все пары лкшат, обменявшихся записками. Требуется определить, сможет ли он разделить лкшат на две группы так, чтобы любой обмен записками осуществлялся от лкшонка одной группы лкшонку другой группы.

### Формат ввода
В первой строке находятся два числа N и M — количество лкшат и количество пар лкшат, обменивающихся записками (1 ≤ N ≤ 100, 1 ≤ M ≤ (N * (N - 1)) / 2). Далее в M строках расположены описания пар лкшат: два различных числа, соответствующие номерам лкшат, обменивающихся записками (нумерация лкшат идёт с 1). Каждая пара лкшат перечислена не более одного раза.

### Формат вывода
Необходимо вывести ответ на задачу Павла Олеговича. Если возможно разделить лкшат на две группы, выведите «YES»; иначе выведите «NO».

### Пример
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 3 2 | YES |
| 1 2 |
| 2 3 |

[Содержание](#содержание)
## Авиаперелёты
Главного конструктора Петю попросили разработать новую модель самолёта для компании «Air Бубундия». Оказалось, что самая сложная часть заключается в подборе оптимального размера топливного бака.

Главный картограф «Air Бубундия» Вася составил подробную карту Бубундии. На этой карте он отметил расход топлива для перелёта между каждой парой городов.

Петя хочет сделать размер бака минимально возможным, для которого самолёт сможет долететь от любого города в любой другой (возможно, с дозаправками в пути).

### Формат ввода
Первая строка входного файла содержит натуральное число n (1 ≤ n ≤ 1000) — число городов в Бубундии. Далее идут n строк по n чисел каждая. j-е число в i-й строке равно расходу топлива при перелёте из i-го города в j-й. Все числа не меньше нуля и меньше 109. Гарантируется, что для любого i в i-й строчке i-е число равно нулю.

### Формат вывода
Первая строка выходного файла должна содержать одно число — оптимальный размер бака.

### Пример
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 4 | 10 |
| 0 10 12 16 |
| 11 0 8 9 |
| 10 13 0 22 |
| 13 10 17 0 |


[Содержание](#содержание)
## 1162 Currency Exchange
Several currency exchange points are working in our city. Let us suppose that each point specializes in two particular currencies and performs exchange operations only with these currencies. There can be several points specializing in the same pair of currencies. Each point has its own exchange rates, exchange rate of A to B is the quantity of B you get for 1A. Also each exchange point has some commission, the sum you have to pay for your exchange operation. Commission is always collected in source currency.

For example, if you want to exchange 100 US Dollars into Russian Rubles at the exchange point, where the exchange rate is 29.75, and the commission is 0.39 you will get (100 - 0.39) * 29.75 = 2963.3975RUR.

You surely know that there are N different currencies you can deal with in our city. Let us assign unique integer number from 1 to N to each currency. Then each exchange point can be described with 6 numbers: integer A and B - numbers of currencies it exchanges, and real RAB, CAB, RBA and CBA - exchange rates and commissions when exchanging A to B and B to A respectively.

Nick has some money in currency S and wonders if he can somehow, after some exchange operations, increase his capital. Of course, he wants to have his money in currency S in the end. Help him to answer this difficult question. Nick must always have non-negative sum of money while making his operations.

### Исходные данные
The first line contains four numbers: N - the number of currencies, M - the number of exchange points, S - the number of currency Nick has and V - the quantity of currency units he has. The following M lines contain 6 numbers each - the description of the corresponding exchange point - in specified above order. Numbers are separated by one or more spaces. 1 ≤ S ≤ N ≤ 100, 1 ≤ M ≤ 100, V is real number, 0 ≤ V ≤ 103.

For each point exchange rates and commissions are real, given with at most two digits after the decimal point, 10-2 ≤ rate ≤ 102, 0 ≤ commission ≤ 102.

Let us call some sequence of the exchange operations simple if no exchange point is used more than once in this sequence. You may assume that ratio of the numeric values of the sums at the end and at the beginning of any simple sequence of the exchange operations will be less than 104.

### Результат
If Nick can increase his wealth, output YES, in other case output NO.

### Пример 1
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 3 2 1 10.0 | NO |
| 1 2 1.0 1.0 1.0 1.0 |
| 2 3 1.1 1.0 1.1 1.0 |

### Пример 2
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 3 2 1 20.0 | YES |
| 1 2 1.0 1.0 1.0 1.0 |
| 2 3 1.1 1.0 1.1 1.0 |

### Пример 3
| **Ввод** | **Вывод**  |
| :------- | :--------- |
| 4 4 1 11.1 | YES |
| 1 2 2.0 0.5 0.5 0.5 |
| 2 3 1.05 1 0.01 1.0 |
| 3 4 1.05 1 0.01 1.0 |
| 4 2 1.05 1 0.01 1.0 |

[Содержание](#содержание)
## 1806 Мобильные телеграфы

[Содержание](#содержание)