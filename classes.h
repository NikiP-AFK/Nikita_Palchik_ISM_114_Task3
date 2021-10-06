#pragma once
#include <string>
#include <iostream>

/**
 * @brief Класс человек
 * 
 */

class human
{
  protected :

    /**
     * @brief гендер
     * 
     */
    std::string _gender;
  

  public :

    /**
     * \brief Конструктор копирования
     */
    human(const human& other);


    /**
     * \brief Деструктор по умолчанию
     */
    ~human() = default;

    /**
     * @brief конструктор нового обьекта человек
     */

    human::human(const std::string name, const int age, const int weight, const bool gender);
    /**
     * @brief Set the Name object
     */
    void SetName(const std::string name);

    /**
     * @brief Set the Age object
     * 
     */
    void SetAge(const int age);

    /**
     * @brief 
     * 
     */

    void Setweight(const int weight);

    /**
     * @brief Set the Gender object
     * 
     */

    void SetGender(const bool gender);

};

    /**
     * @brief производный класс студент 
     * 
     */

    class student : human
    {

    private :
        /**
         * @brief Создание переменной год
         * 
         */

        int _year;

        static constexpr CURRENT_YEAR = 2021;

    public :

    /**
     * \brief Конструктор копирования
     */
    student(const student& other);


    /**
     * \brief Деструктор по умолчанию
     */
    ~student() = default;

    /**
     * @brief конструктор нового обьекта студент
     * 
     */

    student::student(const int year, const std::string name, const int age, const int weight, const bool gender) 
        : base(year, name, age, weight, gender);

    /**
     * @brief Set the Year object
     * 
     */

    void SetYear(const int year);

    /**
     * @brief Изменение года
     * 
     */

    void AddYear(const int addValue);

    /**
     * @brief Увелечение года
     * 
     */
    void AddYear();
    /**
     * @brief Метод для корректного вывода ответа
     */
 
};