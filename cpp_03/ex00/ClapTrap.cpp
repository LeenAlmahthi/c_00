#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    name = "destructor";
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "[ClapTrap Created] " << name << "\n";
}

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "[ClapTrap Created] " << name << "\n";
}

ClapTrap::ClapTrap(ClapTrap const &tmp){
    *this = tmp; // this will call operator=
    std::cout << "[Copy Constructor] " << name << "\n";
}

ClapTrap::~ClapTrap(){
    std::cout << "[ClapTrap Destroyed] " << name << "\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &tmp){
    if (this != &tmp)
    {
        name = tmp.name; 
        Hit_points = tmp.Hit_points;
        Energy_points = tmp.Energy_points;
        Attack_damage = tmp.Attack_damage;
    }
    std::cout << "[Copy Assignment] " << name << "\n";
    return (*this);
}

void ClapTrap::attack(const std::string& target){
    if (this->Energy_points - 1 > 0)
        this->Energy_points--;
    else
    {
        std::cout << "[Action Failed] " << name << " has no energy left!\n";
        return;
    }
    std::cout << "[" << name << "] attacks "  << target << ", causing " << Attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount){
    if (Hit_points - amount > 0)
        this->Hit_points -= amount;
    else
    {
        std::cout << "[Action Failed] " << name << " has no hit points left!\n";
        return;
    }
    std::cout << "[" << name << "] takes "  << amount << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount){
    this->Hit_points += amount;
    if (this->Energy_points - 1 > 0)
        this->Energy_points--;
    else
    {
        std::cout << "[Action Failed] " << name << " has no energy left!\n";
        return;
    }
    std::cout << "[" << name << "] is repaired by "  << amount << " points!\n";
}

int ClapTrap::getAttackDamage() const{

	return (Attack_damage);
}

void ClapTrap::point_table(){
    std::cout << name << " | HP: "  << Hit_points << " | Energy: " <<  Energy_points << " | Attack: " << Attack_damage << "\n";
}
