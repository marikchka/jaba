#pragma once
#ifndef ODIN_H
#define ODIN_H
#include <iostream>
#include "Date.h";
#include "Animal.h";
using namespace std;


class Odin { 
 private: 
    Animal animal_; 
    Date date_; 
    int cost_; 
    public: 
    // Конструктор за замовчуванням 
    Odin() : animal_(), date_(), cost_(0) {} ;
    // Конструктор з параметрами 
    Odin(const Animal& animal, const Date& date, int cost) : animal_(animal), date_(date), cost_(cost) {} ;
 
// Конструктор копіювання 
    Odin(const Odin& other) : animal_(other.animal_), date_(other.date_), cost_(other.cost_) {} ;
 
// Селектори 
    const Animal& getAnimal() const { return animal_; } ;
    const Date& getDate() const { return date_; } ;
    int getCost() const { return cost_; } ;
 
// Модифікатори з поверненням посилання на модифікований об'єкт 
    Odin& setAnimal(const Animal& animal) { animal_ = animal; return *this; } ;
    Odin& setDate(const Date& date) { date_ = date; return *this; } ;
    Odin& setCost(int cost) { cost_ = cost; return *this; } ;
    
};

#endif