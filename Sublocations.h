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
 cout << "Ну что мы можем сказать... Все очень плохо. Работа тяжелая: как-никак рудники копать. Дак мало того, что сложно еще и опасно. Буквально на той" << endl;
 cout << "неделе один из наших сорвался и сиганул вниз. Падать порядка километра было... Но еще и не платят ничерта! У меня семья, четверо детей, жена еле сама ходит," << endl;
 cout << "а на этой работе еще и платят копейки! Чтоб оно все провалилось..." << endl;

 system("pause");

 cout << "###  Выберите варианты диалога:  ###" << endl;
 cout << "1. А что по этому поводу думает правительство?" << endl;
 cout << "2. Почему здесь нету гильдии шахтеров?" << endl;
 cout << "3. Уйти." << endl;
 cin >> tavern;

 switch (tavern) {
 case 1: {
     cout << "Чхать хотели это правительство и империя нас и нашм хотелки. Вон, тоже один из наших высказался по этому поводу. Через пару его казнили на главной" << endl;
     cout << "площади вместе с женой. Детей в армию забрали. С тех пор прошло лет этак десять. Но боимся что-либо сказать и сейчас. Если на рынок выйдешь, то увидишь" << endl;
     cout << "похожую картину. Люди продают ценные вещи из дома на бесценок. Например как-то видел настоящий эльфийский меч! Легкий как перышко, твердый как сталь и" << endl;
     cout << "и острый как лезвие бритвы. А потом, через пару дней вижу, как какой-то офицер вместе с поддаными запинали ногами этого беднягу, который его продавал, и" << endl;
     cout << "отобрал этот самый меч. С тех пор он с ним и ходит..." << endl << endl;

     system("pause");
     break;
 }
     case 2: {
     cout << "А потому что гильдии еще платить надо, понимаешь. А администрации лучше потратить денег на дорогие украшения для своих жен и на обучение детей в столице." << endl;
        cout << "Ктстати по этой же причине у нас такие низкие жалованья. Взяточничество тут страшное. Оно конечно есть везде, но здесь особенно..." << endl << endl;

        system("pause");
        break;
    }
    case 3: {
        dialogueWithWorkers = false;

        break;
    }
    }

    break;
}
case 2: {
    cout << "Все в городе сейчас плохо. Вон то офицеры, которые там сейчас сидят, скажут что и хорошо, мол сейчас город встает с колен. Но это не так." << endl;
    cout << "Жалования низкие, дети голодные, люди выносят на продажу все ценное из дома, чтобы продать на бесценок, могут повесть или мрезать голову за любую провинность." << endl;
    cout << "Не редкость у нас и суициды. Однажды один парень повессился из-за того что его жену вместе с детьми сожгли на площади, на глазах у всего города." << endl;
    cout << "А парня самое главное держала стража, чтобы он никуда не убежал и смотрел на это ужасное зрелище. Жалко было парня... Его труп потом еще вывесили там, где был костер." << endl;
    cout << "Показать, мол вот что будет если не соблюдать наши законы. А сожгли их кстати, потому что его младший сын подрался с сыном одного высокопоставленного офицера." << endl;

    system("pause");

    break;
}

                        case 3: {
                            cout << "Сделав пару глотков слегка сладкого и в большей степени кисло-горького алкогольного папитка, я почувствовал прилив сил." << endl;

                            cout << "Вы выпили эль!" << endl;
                            cout << "Здоровье: + 2" << endl;

                            heroHealth += 2;

                            if (heroHealth > 20) {
                                heroHealth = 20;
                            }
                         
                            system("pause");

                            break;
                        }
                        case 4: {
                            dialogueWithWorkers = false;

                            break;
                        }
                        }
                        break;
                    }

                    case 2: {
                        tavernWorkers = false;
                    }
                    }
                break;
                }
            }
        }
        case 4: {
            tavernBool = false;
            break;
        }
        default: {
            cout << "ОШИБКА!!! Вы ввели неверное значение." << endl;
            break;
        }

        case 9: {
            cout << endl << "###  Выберите действия:  ###" << endl;
            cout << "1. Инвентарь." << endl;
            cout << "2. Статистика персонажа." << endl;
            cout << "3. Квесты." << endl;
            cin >> tavern;

            switch (tavern) {
            case 1: {
                OutputInventory();

                break;
            }
            case 2: {
                stats(heroHealth, heroMana, heroAttack, heroArmor, heroSpeed);

                break;
            }
            case 3: {
                quests();

                break;
            }
            }

            break;
        }

        }
    }
}
 

void notlheimBarracks() {
    setlocale(LC_ALL, "RU");

    cout << endl << "**  ВЫ ПРЕБЫВАЕТЕ В КАЗАРМЫ!  **" << endl;

    cout << "Подойдя поближе к глввным воротам здешней воиской части, я сразу обратил внимание на колонну, идущих строем солдат и командира впереди." << endl;
    cout << "Чуть дальше, за ними, были ограждения и частокол, предупреждающие, что туда вход посторонним лицам запрещен. Об этом так же свидетельствовал знак об этои." << endl;

    int barracks;
    cout << "###  Выберите действия:  ###" << endl;
    cout << "1. Подойти к воротам" << endl;
    cout << "2. Уйти" << endl;
    cin >> barracks;

    bool barracksBool = true;
    while (barracksBool == true) {
        switch (barracks) {
        case 1: {
            cout << "Подойдя поближе к воротам ко мне обратился стражник." << endl;

            system("pause");

            cout << "###  Выберите действия:  ###" << endl;
            cout << "1. Я бы хотел пройти." << endl;
 cout << "2. Уйти." << endl;
 if (questList[0] == 1) {
     cout << "3. Я пришел сдать задание вашему офицеру." << endl;
 }
 cin >> barracks;
 switch (barracks) {
 case 1: {
     cout << "Назови звание." << endl;

     system("pause");

     cout << endl << "###  Выберите действия:  ###" << endl;
     cout << endl << "1. У меня нет звания." << endl;
     cout << endl << "2. Старший дивизионщик." << endl;
     cout << endl << "3. Ударить стражника" << endl;

     switch (barracks) {
     case 1: {
         cout << endl << "В таком случае пошел вон отсюда." << endl;

         system("pause");

         break;
     }
     case 2: {
            cout << endl << "Ничего ты загнул! Пошел вон отсюда, обманщик гнилой, иначе сейчас позову людей постарше и загребут тебя на трое суток, понял меня?!" << endl;

            system("pause");

            break;
        }
        }
        break;
    }

    case 2: {
        cout << "Проходи." << endl;

        system("pause");

        barracksBool = false;
        break;
    }
    }
 
    break;
}

case 2: {
    return;
