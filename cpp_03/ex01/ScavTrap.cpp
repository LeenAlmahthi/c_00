#include "ScavTrap.hpp"
// ScavTrap::ScavTrap(){
//     // name = "destructor";
//     // this->ClapTrap->Hit_points = 10;
//     // this->ClapTrap->Energy_points = 10;
//     // this->ClapTrap->Attack_damage = 0;
//     // std::cout << "[ScavTrap Created] " << name << "\n";
//     std::cout << "[ScavTrap Created] \n";
// }

ScavTrap::ScavTrap(std::string n){
    ClapTrap::set_name(n);
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "[ScavTrap Created] " << ClapTrap::get_name() << "\n";
}

// ScavTrap::ScavTrap(ScavTrap const &tmp){
//     *this = tmp; // this will call operator=
//     std::cout << "[Copy Constructor] " << name << "\n";
// }

// ScavTrap::~ScavTrap(){
//     std::cout << "[ScavTrap Destroyed] " << name << "\n";
// }