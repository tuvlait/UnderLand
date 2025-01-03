#include "Library.h"
#define Dialogues
#include "Game.h"
#include "Inventory.h"
#include "Quests.h"
#include "Items.h"
#define Project_VRPO

extern int heroHealth, heroAttack, heroMana, heroSpeed, heroArmor, getQuest;
extern bool questList[];

using namespace std;

void notlheimTavern() {
    cout << std::endl << "***  ВЫ ПРЕБЫВАЕТЕ В ТАВЕРНУ  ***" << endl;
    cout << std::endl << "В этом месте стоял запах дешевой выпивки и крови. В углу с важным видом играли в карты четверо мужчин. Каждый на вид был лет сорока." << endl;
    cout << "Чуть левее парень, лет двадцати, заигрывал с такой же молодой девушкой. А еще дальше сидели местные стражники, опрокидывая в себя темный эль, " << endl;
    cout << "параллельно разговаривая о выполненной норме патрулирования окрестностей старых дорог. Около стойки стояло человек пять. Все присутствующие были одеты по-разному: " << endl;
    cout << "у одних чистые офицерские мундиры, у других обыкновенное рабочее тряпьё, разной степени загрязненности." << endl;

    system("pause");

    bool tavernBool = true;
    while (tavernBool) {
        int tavern;
 cout << "###  Выберите действия:  ###" << endl;
 cout << "1. Подойти к барной стойке." << endl;
 cout << "2. Подойти к офицерам." << endl;
 cout << "3. Подойти к рабочим." << endl;
 cout << "4. Уйти." << std::endl;
 cin >> tavern;

 switch (tavern) {
 case 1: {
     cout << "Подойдя к барной стойке, я осмотрелся." << endl;
     system("pause");

     bool innkeeperBool = true;
     while (innkeeperBool) {
         int tavernSwitch;
         cout << "###  Выберите действия:  ###" << endl;
         cout << "1. Украсть бутылку спиртного." << endl;
         cout << "2. Затеять драку с рядом стоящим гражданином." << endl;
         cout << "3. Дождаться трактирщика." << endl;
         cout << "4. Уйти." << endl;
         cin >> tavernSwitch;

         switch (tavernSwitch) {   // Innkeeper
         case 1: {
             std::cout << "Облокотившись на стойку, я начал рассматривать." << std::endl;
 system("pause");

 int drinkChoice;
 std::cout << "###  Выберите действие:  ###" << std::endl;
 std::cout << "1. Украсть пинту эля." << std::endl;
 std::cout << "2. Украсть бутылку водки." << std::endl;
 std::cout << "3. Украсть бутылку бренди." << std::endl;
 std::cin >> drinkChoice;

 switch (drinkChoice) {
 case 1:
     cout << "Ловким движением рук я выхватил пинту эля и спрятал за пазухой." << endl;

     AddItem("Пинта эля", 1, pintOfEl);
     cout << "В иневентарь добавлен новый предмет!" << endl;
     cout << "Нажмите 1 для просмотра." << endl;
     cin >> tavernSwitch;
     if (tavernSwitch == 1) {
         OutputInventory();
         system("pause");
     }

     break;
 case 2:
     cout << "Ловким движением рук я выхватил бутылку водки и спрятал за пазухой." << endl;

                        AddItem("Бутылка водки", 1, bottleOfVodka);
                        cout << "В иневентарь добавлен новый предмет!" << endl;
                        cout << "Нажмите 1 для просмотра." << endl;
                        cin >> tavernSwitch;
                        if (tavernSwitch == 1) {
                            OutputInventory();
                            system("pause");
                        }

                        break;
                    case 3:
                        cout << "Ловким движением рук я выхватил бутылку бренди и спрятал за пазухой." << endl;

                        AddItem("Бутылка бренди", 1, bottleOfBrendy);
                        cout << "В иневентарь добавлен новый предмет!" << endl;
                        cout << "Нажмите 1 для просмотра." << endl;
                        cin >> tavernSwitch;
                        if (tavernSwitch == 1) {
                            OutputInventory();
                            system("pause");
                        }

                        break;
                    default:
        cout << "ОШИБКА!!! Вы ввели неверное значение." << endl;
        continue;
    }
    break;
}
case 2: {
    cout << "Подойдя поближе к стоящему у стойки молодому человеку, я сказал:" << endl << endl;;
    cout << "- Парень, мне кажется, ты на меня косо смотришь, у тебя есть ко мне претензии?" << endl;
    system("pause");

    cout << "- Чего?" << endl;
    system("pause");

    cout << "- Того, давай разберемся один на один. Или ты боишься?" << endl;
    system("pause");

    cout << "- Да ты, наверное, охренел. Ты за свои слова сейчас получишь!" << endl;
    system("pause");

    enemy("Рабочий", 15, 3, 0, heroHealth, heroMana, heroAttack, heroArmor, heroSpeed);
    break;
}
case 3: {
    notlheimInnkeeper();
    break;
        }
        case 4: {
            innkeeperBool = false;
            break;
        }
        default: {
            cout << "ОШИБКА!!! Вы ввели неверное значение." << endl;
            break;
        }
        }
    }
    break;
}
case 2: {   // Officers
    cout << "Подойдя к офицерам местной армии, они сразу обратили на меня внимание." << endl;
    system("pause");

    bool officerBool = true;

    while (officerBool == true) {
        cout << "Чего тебе, парень?" << endl << endl;
        cout << "###  Выберите варианты ответа: ###" << endl;
        cout << "1. Хочу сделать что-то полезное для этого городишки." << endl;
        cout << "2. Что вы можете сказать про местную армию?" << endl;
        cout << "3. Мне кажется, вы сильно много о себе возомнили..." << endl;
  cout << "4. Уйти." << endl;
  cin >> tavern;

  switch (tavern) {
  case 1: {
      cout << "Ну раз уж так, можешь сделать одно дело. У нас в канализациях завелась некая тварь, которая постоянно пробирается в дома к людям. Посылали пару бойцов, осмотреть, что там происходит. Как итог — они не вернулись." << endl;
      cout << "Было бы хорошо, если бы ты сходил туда и посмотрел, что там происходит, а еще лучше, если ты избавишься от этой проблемы. Без награды не останешься, не бойся." << endl;

      system("pause");
      cout << "###  Выберите варианты ответа: ###" << endl;
      cout << "1. Я согласен." << endl;
      cout << "2. Нет, спасибо." << endl;
      cin >> tavern;

      if (tavern == 1) {
          cout << "Получен новый квест!" << endl;
          getQuest++;
          questList[0] = true;

          system("pause");
          cout << "Так держать, парень! Как выполнишь, подходи к казармам, мы будем там." << endl;
      }
      else if (tavern == 2) {
          cout << "Ну как хочешь..." << endl;
          system("pause");
        cout << "После этих слов, я отошел обратно." << endl;
    }

    break;
}
case 2: {
    std::cout << std::endl << "Ну что я могу сказать... В армию нашу может записаться каждый желающий, даже ты. Предназначена она в основном для отражения атак нечисти." << std::endl;
    std::cout << "То есть, если на нас нападут, например, Гадиране, мы можем и не выстоять. Раньше этим занималась инквизиция, а теперь своими руками." << std::endl;
    std::cout << "Касательно вооружения все соответствует вышеперечисленному. Длинные копья, чтобы держать врагов на расстоянии, арбалеты для таких же целей, высокие щиты и короткие мечи." << std::endl;
    std::cout << "Вся экипировка выполнена из стали, либо железа. Броня также соответствует всем требованиям. Для пехоты ближнего боя предусмотрены шлема, полностью защищающие" << std::endl;
    std::cout << "голову, латный нагрудник с высоким воротником, защищающим шейные отделы и всё в этом роде." << std::endl << std::endl;

    system("pause");

    std::cout << std::endl << "Касательно офицерского состава у нас с этим проблемы. Сейчас тут сидят двое координаторов и я, то есть офицер управления. Всего насчитывается двадцать восемь координаторов," << std::endl;
    std::cout << "двадцать офицеров управления, четыре стратега и один штабный командир. Сама армия является регулярной и состоит из пяти тысяч бойцов, готовых ринуться в бой прямо сейчас" << std::endl;
    std::cout << "и умереть во славу императора. На этом все." << std::endl << std::endl;

    system("pause");
    break;
}
case 3: {
    std::cout << std::endl << "- Извини, ты это мне?" << std::endl;
    system("pause");

        std::cout << std::endl << "- Ну а кому еще? Много денег из городской казны воруешь?" << std::endl;
        system("pause");

        std::cout << std::endl << "- Если ты сейчас же не уйдешь, мне придется применить силу..." << std::endl;
        system("pause");

        std::cout << std::endl << "- Все, что ты можешь, это сидеть своей жопой здесь и пить дешевое пиво." << std::endl;
        system("pause");

        enemy("Координатор армии Нотльхейма", 20, 8, 2, heroHealth, heroMana, heroAttack, heroArmor, heroSpeed);
        break;
    }
    case 4: {
        officerBool = false;

        break;
    }
    default: {
        std::cout << "ОШИБКА!!! Вы ввели неверное значение." << std::endl;
        break;
    }
           break;
    }
}
break;
  }
  case 3: {    // Workers
      std::cout << "Подойдя к рабочим поближе, в нос сразу ударило запахом пота и дешевого эля." << std::endl << endl;

      system("pause");

      bool tavernWorkers = true;

      while (tavernWorkers == true) {
          cout << "###  Выберите действия:  ###" << endl;
          cout << "1. Присесть рядом." << endl;
          cout << "2. Уйти." << endl;
          cin >> tavern;

          bool dialogueWithWorkers = true;
          while (dialogueWithWorkers == true) {
              switch (tavern) {
              case 1: {
                  cout << "1. Спросить про условия здешние труда." << endl;
                  cout << "2. Узнать про нынешнее положение города." << endl;
                  cout << "3. Выпить эля." << endl;
                  cout << "4. Уйти." << endl;
                  cin >> tavern;
                  switch (tavern) {
                  case 1: {
