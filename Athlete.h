//
// Created by Yasser Cristancho on 10/11/2021.
//

#ifndef ATHLETELINKEDLISTS_ATHLETE_H
#define ATHLETELINKEDLISTS_ATHLETE_H

#include <String>
#include <ostream>

class Athlete {
public:

    Athlete();

    Athlete(const std::string &name, const std::string &id, const std::string &nationality, const std::string &sport,
            short age, float height, float weight);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getNationality() const;

    void setNationality(const std::string &nationality);

    const std::string &getSport() const;

    void setSport(const std::string &sport);

    short getAge() const;

    void setAge(short age);

    float getHeight() const;

    void setHeight(float height);

    float getWeight() const;

    void setWeight(float weight);

    friend std::ostream &operator<<(std::ostream &os, const Athlete &athlete);

    virtual ~Athlete();

private:
    std::string name, id, nationality, sport;
    short int age;
    float height, weight;

};


#endif //ATHLETELINKEDLISTS_ATHLETE_H
