//
// Created by Yasser Cristancho on 10/11/2021.
//

#include "Athlete.h"

Athlete::Athlete() {

}

Athlete::Athlete(const std::string &name, const std::string &id, const std::string &nationality,
                 const std::string &sport, short age, float height, float weight) : name(name), id(id),
                                                                                    nationality(nationality),
                                                                                    sport(sport), age(age),
                                                                                    height(height), weight(weight) {}

const std::string &Athlete::getName() const {
    return name;
}

void Athlete::setName(const std::string &name) {
    Athlete::name = name;
}

const std::string &Athlete::getId() const {
    return id;
}

void Athlete::setId(const std::string &id) {
    Athlete::id = id;
}

const std::string &Athlete::getNationality() const {
    return nationality;
}

void Athlete::setNationality(const std::string &nationality) {
    Athlete::nationality = nationality;
}

const std::string &Athlete::getSport() const {
    return sport;
}

void Athlete::setSport(const std::string &sport) {
    Athlete::sport = sport;
}

short Athlete::getAge() const {
    return age;
}

void Athlete::setAge(short age) {
    Athlete::age = age;
}

float Athlete::getHeight() const {
    return height;
}

void Athlete::setHeight(float height) {
    Athlete::height = height;
}

float Athlete::getWeight() const {
    return weight;
}

void Athlete::setWeight(float weight) {
    Athlete::weight = weight;
}

std::ostream &operator<<(std::ostream &os, const Athlete &athlete) {
    os << "name: " << athlete.name << " id: " << athlete.id << " nationality: " << athlete.nationality << " sport: "
       << athlete.sport << " age: " << athlete.age << " height: " << athlete.height << " weight: " << athlete.weight;
    return os;
}

Athlete::~Athlete() {

}

