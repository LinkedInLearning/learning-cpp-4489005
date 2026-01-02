// Learning C++ 
// Exercise 03_03
// Using Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>
#define January    1
#define February   2
#define March      3
#define April      4
#define May        5
#define June       6
#define July       7
#define August     8
#define September  9
#define October   10
#define November  11
#define December  12

#define KingSpades     1
#define QueenSpades    2
#define JackSpades     3
#define TenSpades      4
#define NineSpades     5
#define EightSpades    6
#define SevenSpades    7
#define SixSpades      8
#define FiveSpades     9
#define FourSpades    10
#define ThreeSpades   11
#define TwoSpades     12
#define AceSpades     13
#define KingHearts    14
#define QueenHearts   15
#define JackHearts    16
#define TenHearts     17
#define NineHearts    18
#define EightHearts   19
#define SevenHearts   20
#define SixHearts     21
#define FiveHearts    22
#define FourHearts    23
#define ThreeHearts   24
#define TwoHearts     25
#define AceHearts     26
#define KingHearts    14
#define QueenHearts   15
#define JackHearts    16
#define TenHearts     17
#define NineHearts    18
#define EightHearts   19
#define SevenHearts   20
#define SixHearts     21
#define FiveHearts    22
#define FourHearts    23
#define ThreeHearts   24
#define TwoHearts     25
#define AceHearts     26
#define KingClubs     27
#define QueenClubs    28
#define JackClubs     29
#define TenClubs      30
#define NineClubs     31
#define EightClubs    32
#define SevenClubs    33
#define SixClubs      34
#define FiveClubs     35
#define FourClubs     36
#define ThreeClubs    37
#define TwoClubs      38
#define AceClubs      39
#define KingDiamonds  40
#define QueenDiamonds 41
#define JackDiamonds  42
#define TenDiamonds   43
#define NineDiamonds  44
#define EightDiamonds 45
#define SevenDiamonds 46
#define SixDiamonds   47
#define FiveDiamonds  48
#define FourDiamonds  49
#define ThreeDiamonds 50
#define TwoDiamonds   51
#define AceDiamonds   52


char mandane_card[12][31] = {
    {KingSpades,JackSpades, NineSpades, SevenSpades,FiveSpades, ThreeSpades, AceSpades, QueenDiamonds, \
     TenDiamonds, EightDiamonds, SixDiamonds, FourDiamonds},
    {KingSpades,JackSpades, NineSpades, SevenSpades,FiveSpades, ThreeSpades, AceSpades, QueenDiamonds, \
     TenDiamonds, EightDiamonds, SixDiamonds, FourDiamonds},


enum class cow_purpose {dairy, meat, hide, pet};

class sacred_symbol{
public:
    sacred_symbol(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    std::string get_name() const{
        return name;
    }
    int get_mondane_card() const
    {
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
    void set_age(int new_age){
        age = new_age;
    }
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet);
    std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
