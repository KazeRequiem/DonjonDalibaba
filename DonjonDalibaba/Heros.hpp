#pragma once
#include <iostream>
#include <unordered_map>
#include <string>

class Heros {
protected:
    int pv;
    double poidsmax;
    double poidsactuel;
    std::unordered_map<std::string, int> competences;

public:
    Heros(int pv, double poidsmax) : pv(pv), poidsmax(poidsmax), poidsactuel(0) {}

    virtual void set_pv(int pv) {
        this->pv = pv;
    }

    virtual void set_force(int niveau) {
        this->competences["Force"] = niveau;
    }

    virtual void set_intelligence(int niveau) {
        this->competences["Intelligence"] = niveau;
    }

    virtual void set_adresse(int niveau) {
        this->competences["Adresse"] = niveau;
    }

    virtual void set_charisme(int niveau) {
        this->competences["Charisme"] = niveau;
    }

    virtual void set_courage(int niveau) {
        this->competences["Courage"] = niveau;
    }

    virtual void set_poidsmax(double poidsmax) {
        this->poidsmax = poidsmax;
    }

    virtual void set_poidsactuel(double poidsactuel) {
        this->poidsactuel = poidsactuel;
    }

    virtual int get_pv() {
        return this->pv;
    }

    virtual double get_poidsmax() {
        return this->poidsmax;
    }

    virtual double get_poidsactuel() {
        return this->poidsactuel;
    }

    virtual std::string get_origine() = 0;

    virtual int get_force() {
        return this->competences["Force"];
    }

    virtual int get_intelligence() {
        return this->competences["Intelligence"];
    }

    virtual int get_adresse() {
        return this->competences["Adresse"];
    }

    virtual int get_charisme() {
        return this->competences["Charisme"];
    }

    virtual int get_courage() {
        return this->competences["Courage"];
    }

    virtual void ajoutPoint(std::string competence, int n) {
        this->competences[competence] += n;
    }

    virtual void afficher() {
        std::cout << "Origine : " << this->get_origine() << std::endl;
        std::cout << "PV : " << this->get_pv() << std::endl;
        std::cout << "Poids max : " << this->get_poidsmax() << std::endl;
        std::cout << "Poids actuel : " << this->get_poidsactuel() << std::endl;
        std::cout << "Force : " << this->get_force() << std::endl;
        std::cout << "Intelligence : " << this->get_intelligence() << std::endl;
        std::cout << "Adresse : " << this->get_adresse() << std::endl;
        std::cout << "Charisme : " << this->get_charisme() << std::endl;
        std::cout << "Courage : " << this->get_courage() << std::endl;
        std::cout << "" << std::endl;
    }
};
