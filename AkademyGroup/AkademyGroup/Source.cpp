﻿#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <conio.h>
//---------------------------------------------------------------------------------------------------
#include "Academy.h"
#include "Director.h"
#include "Employee.h"
#include "Group.h"
#include "Person.h"
#include "Program.h"
#include "Salesman.h"
#include "Student.h"
#include "Teacher.h"
#include "Functions.h"

using namespace std;
//---------------------------------------------------------------------------------------------------
void main()
{
	Program pro;
	pro.load();

	int sel = 0, key = 0, choose = 0, lvl = 1;
	bool stat = true;
	while (true)
	{
		if (stat) pro.welcomeMenu(sel);
		else
		if (pro.info) pro.infoMenu(sel);
		else
		if (pro.edit) pro.editMenu(sel);
		else
		if (pro.manag) pro.manegMenu(sel);
		else
		if (pro.EditStudGroupEmployee)
		{
			switch (choose)
			{
			case 0:
				pro.EditStudGroupEmployeeMenu(sel, "stud");
				break;
			case 1:
				pro.EditStudGroupEmployeeMenu(sel, "group");
				break;
			case 2:
				pro.EditStudGroupEmployeeMenu(sel, "employee");
			}
		}

		key = _getch();
		if (key == 0 || key == 224)
			key = _getch();

		switch (key)
		{
		case KeyCode::UP:
			if (sel > 0) sel--;
			break;
		case KeyCode::RIGHT:
			sel = pro.getCount() - 1;
			break;
		case KeyCode::DOWN:
			if (sel < pro.getCount() - 1) sel++;
			break;
		case KeyCode::LEFT:
			sel = 0;
			break;
		case KeyCode::ENTER:
			Functions::clearFrame();


			if (lvl == 1)
				stat = false;
			else
			if (lvl == 2)
				pro.info = pro.manag = pro.edit = false;
			//else
			//if (lvl == 3)
			//	pro.EditStud = pro.InfAboutTheAcademy = false;
			if (lvl != 3)
			{
				pro.path.push_back(pro.getName(sel));
				lvl++;
			}

			choose = sel;
			pro.menu(choose);

			sel = 0;
			break;
		case KeyCode::BACKSPACE:
			Functions::clearFrame();
			pro.backMenu();

			if (lvl == 3)
			{
				if (pro.path[lvl - 2] == "Student" || pro.path[lvl - 2] == "Group" || pro.path[lvl - 2] == "Employee")
					pro.edit = true;
			}
			else
			if (lvl == 2)
				stat = true;

			sel = 0;
			if (lvl != 1)
			{
				pro.path.pop_back();
				lvl--;
			}
			break;
		case KeyCode::ESC:
			if (stat)
				exit(0);
		}
	}

	_getch();
}
//---------------------------------------------------------------------------------------------------
/*
---ИНФОРМАЦИЯ---
1. Информация об академии
- Название
- Город
- Адрес
- Количество групп
- Количество студентов
- Количество работников
- Инфо о директоре

2. Вывести список групп (дизайнеры / программисты / админы на выбор)

3. Вывести информацию о группе (поиск по названию)
- Название
- Текущий предмет
- Количество студентов
- Преподаватель
- Средний балл по группе
- Средняя посещаемость по группе

4. Вывести информацию о студентах в группе (поиск по названию)
- Фамилия
- Имя
- Возраст
- Средний балл
- Процент посещаемости
- Телефон
- Email

5. Вывести список сотрудников
- Фамилия
- Имя
- Возраст
- Зарплата
- Стаж (в днях)
- Список навыков (у преподавателей)
- Количество контрактов (у консультантов)
- Рейтинг (у директора)
- Телефон
- Email

6. Рейтинг студентов академии
- Студент с лучшей посещаемостью
- Студент с лучшей успеваемостью
- Группа с лучшей посещаемостью
- Группа с лучшей успеваемостью

7. Рейтинг сотрудников академии
- Сотрудник с самой высокой зарплатой
- Сотрудник с самым большим стажем
- Преподаватель с наибольшим количеством групп

---РЕДАКТИРОВАНИЕ---
1. Студенты
- Добавить студента
- Редактировать студента
- Удалить студента

2. Сотрудники
- Добавить сотрудника
- Редактировать сотрудника
- Удалить сотрудника

3. Группы
- Добавить группу
- Редактировать группу
- Удалить группу

---УПРАВЛЕНИЕ---

1. Показать доходы и расходы академии
- За месяц
- За семестр
- За год

2. Изменить стоимость обучения в академии

3. Повысить / понизить зарплату всем сотрудниками на n%

4. Сменить директора академии

---ВЫХОД---
*/