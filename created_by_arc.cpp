#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <list>
#include <unistd.h>
using namespace std;
 
class Role
{
public:
    ~Role();
    Role();
    string name;
    int hp = 0;
    int mp = 0;
    int aggressivity = 0; //攻击
    int defense = 0; //防御
    string status; //状态，战斗时生效
};
Role::Role(){};
Role::~Role(){};

class Armor
{
public:

    ~Armor();
    Armor();
    Armor(int number);

    int number;
    string name;
    string quality;
    int hp;
    int defense;
    string describe;

    void renovate();
    void showInfo();
    void insteaded(list<Armor>::iterator i);
};
Armor::~Armor(){}
Armor::Armor(){}
void Armor::showInfo()
{
    cout << "name: " << name << "quality: " << quality << "skill: " << hp;
    cout << "defense: " << defense << "describe: " << describe << endl;
}

void Armor::insteaded(list<Armor>::iterator i)
{
    number = i->number;
    renovate();
}

Armor::Armor(int number) : number(number)
{
    renovate();
}

void Armor::renovate()
{
    if (number == 2)
    {
        name = "Xuanhua_Robe";
        quality = "Perfect";
        hp = 20;
        defense = 9;
        describe = " People on and off, full moon, flowers bloomand thank you, do not want to meet again.";
    }
    if (number == 3)
    {
        name = "Laozhe Robe";
        quality = "Perfect";
        hp = 40;
        defense = 12;
        describe = "this life immortal...";
    }
    if (number == 4)
    {
        name = "LuoSha Ghost Clothes";
        quality = "evil spirit";
        hp = 300;
        defense = -14;
        describe = "Devil's clothes...";
    }
    if (number == 5)
    {
        name = "Tian Sha Yu Robe";
        quality = "excellent";
        hp = 150;
        defense = 4;
        describe = "with infinite magic power...";
    }
    if (number == 6)
    {
        name = "a sea monster";
        quality = "evil spirits";
        hp = 2000;
        defense = -99;
        describe = "solid as a rock...";
    }
    if (number == 7)
    {
        name = "blood sea demon";
        quality = "evil spirit";
        hp = -20;
        defense = 50;
        describe = "Come out of a pool of blood soaked for several years as solid as a rock...";
    }
    if (number == 8)
    {
        name = "Roxar ring";
        quality = "epic";
        hp = 1000;
        defense = 35;
        describe = "It is said the ring of Asura...";
    }
    if (number == 9)
    {
        name = "Grand JIhad T";
        quality = "legend";
        hp = 2000;
        defense = 50;
        describe = "The Dragon King has customized armor for the emperor...";
    }
    if (number == 10)
    {
        name = "Lunbao";
        quality = "artifact";
        hp = 5000;
        defense = 100;
        describe = "a golden wheel with its wheels dry and full of all the elements...";
    }

}


class Weapon
{
public:

    Weapon(int number);
    ~Weapon();
    Weapon();

    int number;
    string name;
    string quality;
    int mp;
    int aggressivity;
    string describe;

    void renovate();
    void showInfo();
    void insteaded(list<Weapon>::iterator i);
};

void Weapon::showInfo()
{
    cout << "name:  " << name << "\nquality: " << quality << "\nskill: " << mp;
    cout << "\naggressivity: " << aggressivity << "\ndescribe:" << describe << endl;
}

void Weapon::insteaded(list<Weapon>::iterator i)
{
    number = i->number;
    renovate();
}

Weapon::~Weapon() {}

Weapon::Weapon() {}

Weapon::Weapon(int number) : number(number)
{
    renovate();
}

void Weapon::renovate()
{
    if (number == 1)
    {
        name = "walker's_stick";
        quality = "ordinary";
        mp = 3;
        aggressivity = 3;
        describe = "very ordinary stick,just a stick...";
    }
    if (number == 2)
    {
        name = "xuan_hua_Hammer";
        quality = "excellent";
        mp = 50;
        aggressivity = 9;
        describe = "a good harmmer";
    }
    if (number == 3)
    {
        name = "Tianshayue_halbert";
        quality = "good";
        mp = 60;
        aggressivity = 35;
        describe = "It is made from stone and moon...";
    }
    if (number == 4)
    {
        name = "Rasa_scythe";
        quality = "evil spirit";
        mp = -30;
        aggressivity = 50;
        describe = "long enough to last a thousand...";
    }
    if (number == 5)
    {
        name = "ghost_still";
        quality = "good";
        mp = 666;
        aggressivity = 36;
        describe = "you can die,and when?";
    }
    if (number == 6)
    {
        name = "Blood_sea_evil_Emperor";
        quality = "evil spirit";
        mp = 900;
        aggressivity = -10;
        describe = "always exude the smell of death...";
    }
    if (number == 7)
    {
        name = "Hoop_Stick";
        quality = "legend";
        mp = 900;
        aggressivity = 50;
        describe = "the magic pin of the Dragon Palace...";
    }
    if (number == 8)
    {
        name = "Heart_hardcore";
        quality = "legrnd";
        mp = 900;
        aggressivity = 50;
        describe = "Barrier blocj withour victory or defeat...";
    }
}

void Jindutiao() {
    int i = 0;

    char bar[102] = { 0 };

    while (i <= 100) {
        printf("[%-101s][%d%%]\r", bar, i);
        fflush(stdout);
        if (!(i % 50)) {
            sleep(1);
        }
        bar[i++] = '#';
        bar[i] = '0';
    }
    printf("\n");


}


void wuKongSkills0()
{
    cout << "preparing..." << endl;
    Jindutiao();
    cout << "ready" << endl;
    //sleep(200);
    ////system("cls");
}

void wuKongDie()
{
cout<<"you die!!!!"<<endl;
}//空

void wuKongSkills1()
{

    cout << "preparing..." << endl;
    Jindutiao();
    cout << "ready!" << endl;
    //sleep(200);
    ////system("cls");
}

void wuKongSkills2()
{
    cout << "preparing..." << endl;
    Jindutiao();
    cout << "ready" << endl;
   // sleep(200);
    ////system("cls");
}

void wuKongSkills3()
{
    cout << "preparing...." << endl;
    Jindutiao();
    cout << "ready" << endl;
    //sleep(200);
    ////system("cls");
}

void wuKongSkills4()
{
    cout << "preparing..." << endl;
    Jindutiao();
    cout << "ready" << endl;
    //sleep(200);
    ////system("cls");
}

void wuKongSkills5()
{
    cout << "preparing..." << endl;
    Jindutiao();
    cout << "ready" << endl;
   // sleep(200);
    ////system("cls");
}


void biKeSkill1()
{
    cout << "  0000    000000000         0          00000000000  000000000              " << "\n";
    cout << " 000000   000000000        000         00       00  000000000                  " << "\n";
    cout << "000   00     000          00000        00       00     000            " << "\n";
    cout << " 0000        000         000 000       0000000000      000           " << "\n";
    cout << "   0000      000        000   000      0000            000         " << "\n";
    cout << "00   000     000       00000000000     00  00          000           " << "\n";
    cout << " 000000      000      000       000    00    00        000        " << "\n";
    cout << " 00000       000     000         000   0 0     000     000          ";
    //sleep(100);
    ////system("cls");
}

void beijitaSkill1()
{
    cout << "  0000    000000000         0          00000000000  000000000              " << "\n";
    cout << " 000000   000000000        000         00       00  000000000                  " << "\n";
    cout << "000   00     000          00000        00       00     000            " << "\n";
    cout << " 0000        000         000 000       0000000000      000           " << "\n";
    cout << "   0000      000        000   000      0000            000         " << "\n";
    cout << "00   000     000       00000000000     00  00          000           " << "\n";
    cout << " 000000      000      000       000    00    00        000        " << "\n";
    cout << " 00000       000     000         000   0 0     000     000          ";
    //sleep(100);
    ////system("cls");
}

void kalikeSkill1()
{
    cout << "  0000    000000000         0          00000000000  000000000              " << "\n";
    cout << " 000000   000000000        000         00       00  000000000                  " << "\n";
    cout << "000   00     000          00000        00       00     000            " << "\n";
    cout << " 0000        000         000 000       0000000000      000           " << "\n";
    cout << "   0000      000        000   000      0000            000         " << "\n";
    cout << "00   000     000       00000000000     00  00          000           " << "\n";
    cout << " 000000      000      000       000    00    00        000        " << "\n";
    cout << " 00000       000     000         000   0 0     000     000          ";
    //sleep(100);
    ////system("cls");
}

void kalikeSkill2()
{
    cout << "  0000    000000000         0          00000000000  000000000              " << "\n";
    cout << " 000000   000000000        000         00       00  000000000                  " << "\n";
    cout << "000   00     000          00000        00       00     000            " << "\n";
    cout << " 0000        000         000 000       0000000000      000           " << "\n";
    cout << "   0000      000        000   000      0000            000         " << "\n";
    cout << "00   000     000       00000000000     00  00          000           " << "\n";
    cout << " 000000      000      000       000    00    00        000        " << "\n";
    cout << " 00000       000     000         000   0 0     000     000          ";
    //sleep(100);
    ////system("cls");
}

void fulishaSkill1()
{
    cout << "  0000    000000000         0          00000000000  000000000              " << "\n";
    cout << " 000000   000000000        000         00       00  000000000                  " << "\n";
    cout << "000   00     000          00000        00       00     000            " << "\n";
    cout << " 0000        000         000 000       0000000000      000           " << "\n";
    cout << "   0000      000        000   000      0000            000         " << "\n";
    cout << "00   000     000       00000000000     00  00          000           " << "\n";
    cout << " 000000      000      000       000    00    00        000        " << "\n";
    cout << " 00000       000     000         000   0 0     000     000          ";
    //sleep(100);
    ////system("cls");
}

void fulishaSkill2()
{
    cout << "  0000    000000000         0          00000000000  000000000              " << "\n";
    cout << " 000000   000000000        000         00       00  000000000                  " << "\n";
    cout << "000   00     000          00000        00       00     000            " << "\n";
    cout << " 0000        000         000 000       0000000000      000           " << "\n";
    cout << "   0000      000        000   000      0000            000         " << "\n";
    cout << "00   000     000       00000000000     00  00          000           " << "\n";
    cout << " 000000      000      000       000    00    00        000        " << "\n";
    cout << " 00000       000     000         000   0 0     000     000          ";
    //sleep(100);
    ////system("cls");
}

void shaluSkill1()
{
    cout << "  0000    000000000         0          00000000000  000000000              " << "\n";
    cout << " 000000   000000000        000         00       00  000000000                  " << "\n";
    cout << "000   00     000          00000        00       00     000            " << "\n";
    cout << " 0000        000         000 000       0000000000      000           " << "\n";
    cout << "   0000      000        000   000      0000            000         " << "\n";
    cout << "00   000     000       00000000000     00  00          000           " << "\n";
    cout << " 000000      000      000       000    00    00        000        " << "\n";
    cout << " 00000       000     000         000   0 0     000     000          ";
    //sleep(100);
    ////system("cls");
}



class Skill
{
public:

    Skill(string name = "ordinary attack", int addPower = 1, int consume = 0, string describe = ".", string status = ".");
    ~Skill();
    Skill(Skill& skill);

    string name;
    int addPower;
    int consume;
    string describe;
    string status; //生成效果

    void showInfo();
    void attack(Role& aim, Role& user);
};
Skill::~Skill() {}
Skill::Skill(string name, int addPower, int consume, string describe, string status) :
        name(name), addPower(addPower), consume(consume), describe(describe), status(status) {}

Skill::Skill(Skill& skill)
{
    name = skill.name;
    addPower = skill.addPower;
    consume = skill.consume;
    describe = skill.describe;
    status = skill.status;
}

void Skill::showInfo()
{
    cout << "name" << name << "\nsttack power " << addPower << "\nconsume " << consume << "\ndescribe " << describe << endl;
}

void Skill::attack(Role& aim, Role& user)
{


    if (this->name == "Ordinary attack")
    {
        if (aim.defense >= user.aggressivity)
        {
            cout << "your attack is useless" << endl;
        }
        else
            aim.hp = aim.hp - this->addPower * (user.aggressivity - aim.defense);
    }
    else
        aim.hp = aim.hp - this->addPower * user.aggressivity;


    if (this->name == "flash of frame")
        aim.hp = aim.hp - int(aim.hp * 0.05);
    if (this->name == "Fire chop")
        aim.hp = aim.hp - 9 * this->addPower * user.aggressivity;
    if (this->name == "Fire eye")
        user.status = "\0";


    aim.status = this->status;

}

void setSkill(Skill skills[6])
{

    Skill skill0("Ordinary attack", 1, 0, "None");
    skills[0] = skill0;

    Skill skill1("Dragon chop", 1, 10, "Bring the enemy");
    skills[1] = skill1;

    Skill skill2("flash of frame", 0, 20, "dodge enemy next attack");
    skills[2] = skill2;

    Skill skill3("Firestorm", 2, 40, "5% of enemy's health");
    skills[3] = skill3;

    Skill skill4("Fire eye", 0, -30, "Restore your skill");
    skills[4] = skill4;

    Skill skill5("Fire chop", 1, 60, "deal 9 times damage");
    skills[5] = skill5;
}



class Pack
{
public:

    Pack();
    ~Pack();

    list<Weapon> weapons;
    list<Armor> armors;

};
Pack::Pack(){};
Pack::~Pack(){};

class WuKong : public Role
{
public:

    WuKong();

    ~WuKong();

    int level;
    int exp;
    Weapon* currentWeapon; //已装备的武器
    Armor* currentArmor; //已装备防具
    int money; //积分
    Skill skills[6];
    Pack pack; //背包

    void levelup();
    void showInfo();
    bool die();
    void renovate(); //刷新属性
    void attack(Role& role);
    void showInfoPack();
};
WuKong::~WuKong(){}
WuKong::WuKong()
{
    hp = 10000000;
    mp = 50000000;
    aggressivity = 100000;
    defense = 1;
    name = "Wu kong";
    money = 0;
    level = 1;
    exp = 0;

    currentWeapon = NULL;
    currentArmor = NULL;

    setSkill(skills);

}

void WuKong::levelup()
{
    if (exp >= level && level < 75)
    {
        cout << "\t now ,your level is " << ++level << endl;
        exp = 0;
        this->renovate();
    }
}

void WuKong::showInfo()
{
    cout << "\t your name:" << name << "\t your level: " << level << endl;
    cout << "\t your experience: " << exp << "\t your goal: " << money << endl;
    cout << "\t your life: " << hp << "  \t your skill: " << mp << endl;
    cout << "\t your  aggressivity" << aggressivity << "\t your defense: " << defense << endl;
    if (currentWeapon)
        cout << "\t your weapon:" << currentWeapon->name;
    if (currentArmor)
        cout << "\t Armor:  " << currentArmor->name;
    cout << endl;
}

bool WuKong::die()
{
    if (hp <= 0)
        return true;

    else
        return false;
}

void WuKong::renovate()
{
    hp = 100 + level * 10;
    mp = 50 + level * 10;
    aggressivity = 10 + level * 10;
    defense = 1 + level * 10;
    if (currentWeapon)
    {
        mp += currentWeapon->mp;
        aggressivity += currentWeapon->aggressivity;
    }
    if (currentArmor)
    {
        hp += currentArmor->hp;
        defense += currentArmor->defense;
    }
}

void WuKong::attack(Role& role)
{
    int choice;

    do
    {
        cout << "\tchoose your skill now:" << endl;
        cout << "0.Ordinary attack" << endl;
        cout << "1.Dragon chop" << endl;
        cout << "2.flash of frame" << endl;
        cout << "3.Firestorm" << endl;
        cout << "4.Fire eye " << endl;
        cout << "5.Fire chop" << endl;
        cin >> choice;
        if (choice < 0 || choice > 5)
            continue;
        if (mp < skills[choice].consume)
        {
            cout << "you can't choose this because of your poor skill!!" << endl;
            continue;
        }
        else
        {
            mp -= skills[choice].consume;
            break;
        }
    } while (1);
    skills[choice].attack(role, *this);
    if (choice == 0)
        wuKongSkills0();
    if (choice == 1)
        wuKongSkills1();
    if (choice == 2)
        wuKongSkills2();
    if (choice == 3)
        wuKongSkills3();
    if (choice == 4)
        wuKongSkills4();
    if (choice == 5)
        wuKongSkills5();

}

void WuKong::showInfoPack()
{
    cout << "\tweapon " << endl;
    for (list<Weapon>::iterator i = pack.weapons.begin(); i != pack.weapons.end(); i++)
    {
        cout << "\t" << i->name;
    }
    cout << endl << endl;

    cout << "\tarmor " << endl;
    for (list<Armor>::iterator i = pack.armors.begin(); i != pack.armors.end(); i++)
    {
        cout << "\t" << i->name;
    }
    cout << endl << endl;

    cout << "currentWeapon:";
    if (currentWeapon)
        cout << currentWeapon->name;
    else
        cout << " none";
    cout<<endl;
    cout << "currentArmor:";
    if (currentArmor)
        cout << currentArmor->name;
    else
        cout << "none";
    cout << endl << endl;

    int choice;
    do
    {

        string name;
        do
        {
            cout <<"Function options: "<<endl;
            cout<<"0. exit "<<endl;
            cout<<"1. view weapon attribute"<<endl;
            cout<<"2. wear Weapon "<<endl;
            cout<<"3. view armor attribute "<<endl;
            cout<<"4. wear armor " << endl;

            cin >> choice;
        } while (choice < 0 || choice > 5);

        if (choice == 1)
        {
            cout << "enter the name: " << endl;
            cin >> name;
            for (list<Weapon>::iterator i = pack.weapons.begin(); i != pack.weapons.end(); i++)
                if (i->name == name)
                {
                    i->showInfo();
                    break;
                }

        }

        if (choice == 3)
        {
            cout << "enter the name:" << endl;
            cin >> name;
            for (list<Armor>::iterator i = pack.armors.begin(); i != pack.armors.end(); i++)
                if (i->name == name)
                {
                    i->showInfo();
                    break;
                }
        }

        if (choice == 2)
        {
            cout << "Enter the name of the device you want to wear" << endl;
            cin >> name;
            for (list<Weapon>::iterator i = pack.weapons.begin(); i != pack.weapons.end(); i++)
                if (i->name == name)
                {
                    if (currentWeapon)
                    {
                        mp -= currentWeapon->mp;
                        aggressivity -= currentWeapon->aggressivity;
                        delete currentWeapon;
                    }
                    currentWeapon = new Weapon;
                    currentWeapon->insteaded(i);
                    mp += currentWeapon->mp;
                    aggressivity += currentWeapon->aggressivity;

                    cout << "\tcurrentWeapon：";
                    if (currentWeapon)
                        cout << currentWeapon->name;
                    else
                        cout << "None";
                    cout << " currentArmor：";
                    if (currentArmor)
                        cout << currentArmor->name;
                    else
                        cout << "None";
                    cout << endl << endl;
                    break;
                }
        }

        if (choice == 4)
        {
            cout << "Enter the name of the device you want to wear" << endl;
            cin >> name;
            for (list<Armor>::iterator i = pack.armors.begin(); i != pack.armors.end(); i++)
                if (i->name == name)
                {
                    if (currentArmor)
                    {
                        hp -= currentArmor->hp;
                        defense -= currentArmor->defense;
                        delete currentArmor;
                    }
                    currentArmor = new Armor;
                    currentArmor->insteaded(i);
                    hp += currentArmor->hp;
                    defense += currentArmor->defense;

                    cout << "\t已装备 武器：";
                    if (currentWeapon)
                        cout << currentWeapon->name;
                    else
                        cout << "无";
                    cout << " 防具：";
                    if (currentArmor)
                        cout << currentArmor->name;
                    else
                        cout << "无";
                    cout << endl << endl;
                    break;

                }
        }



    }
    while (choice);


}


class Boss : public Role
{
public:


    int money;
    int exp;
    int fallPossibility;
    string describe;
    Skill skill0;

    void showInfo();
    bool die();

    virtual void fallequipment(Pack& pack) = 0;
    virtual void attack(Role& aim, Role& user) = 0;
    virtual ~Boss();
};

Boss::~Boss() {}


void Boss::showInfo()
{
    cout << "\t name: " << name << endl;
    cout << "\t life: " << hp << "  \t skill: " << mp << endl;
    cout << "\t aggressivity: " << aggressivity << "\t defense: " << defense << endl;
    cout << describe << endl;

}

bool Boss::die()
{
    if (hp <= 0)
    {
        return true;
    }
    else
        return false;
}

class BossBiKe : public Boss
{
public:

    BossBiKe();
    ~BossBiKe();
    Skill skill1;

    void fallequipment(Pack& pack);
    void attack(Role& aim, Role& user);

};

BossBiKe::BossBiKe()
{
    name = "BossBike";
    hp = 40;
    mp = 100;
    aggressivity = 10;
    defense = 2;
    exp = 1;
    money = 10;
    fallPossibility = 50;
    describe = "go and you can be a hero!!!";
    skill1 = Skill("心灵感应", 2);

    //heiWuChangZhanli();
}

void BossBiKe::fallequipment(Pack& pack)
{
    srand((unsigned int)(time(NULL)));
    if (rand() % 100 < fallPossibility)
    {
        Weapon weapon(2);
        pack.weapons.push_back(weapon);
        cout << "\t 恭喜获得武器萱花锤" << endl;
    }
    if (rand() % 100 < fallPossibility)
    {
        Weapon weapon(1);
        pack.weapons.push_back(weapon);
        cout << "\t 恭喜获得武器行者棍" << endl;
    }
    if (rand() % 100 < fallPossibility)
    {
        Armor armor(2);
        pack.armors.push_back(armor);
        cout << "\t 恭喜获得防具萱花袍" << endl;
    }
}

void BossBiKe::attack(Role& aim, Role& user)
{
    srand((unsigned int)(time(NULL)));
    if (rand() % 10 < 4)
    {
        //bikeSkill1();//标注
        cout << "\tBoss使用" << skill1.name << endl;
        skill1.attack(aim, user);
    }
    else
    {
        cout << "\tBoss使用" << skill0.name << endl;
        skill0.attack(aim, user);
    }
}

BossBiKe::~BossBiKe() {}


class BossBeiJiTa : public Boss
{
public:

    BossBeiJiTa();
    ~BossBeiJiTa();
    Skill skill1;

    void fallequipment(Pack& pack);
    void attack(Role& aim, Role& user);

};

BossBeiJiTa::BossBeiJiTa()
{
    name = "BeiJiTa";
    hp = 60;
    mp = 100;
    aggressivity = 16;
    defense = 5;
    exp = 2;
    money = 10;
    fallPossibility = 50;
    describe = "Sun Wukong fought with him fiercely and won the final victory. ";
    skill1 = Skill("加利克炮", 2);
    //baiWuChangZhanli();
}

void BossBeiJiTa::fallequipment(Pack& pack)
{
    srand((unsigned int)(time(NULL)));
    if (rand() % 100 < fallPossibility)
    {
        Armor armor(3);
        pack.armors.push_back(armor);
        cout << "\t 恭喜获得防具老者袍" << endl;
    }
}

void BossBeiJiTa::attack(Role& aim, Role& user)
{
    srand((unsigned int)(time(NULL)));
    if (rand() % 10 < 5)
    {
        beijitaSkill1();
        cout << "\tBoss使用" << skill1.name << endl;
        skill1.attack(aim, user);
    }
    else
    {
        cout << "\tBoss使用" << skill0.name << endl;
        skill0.attack(aim, user);
    }
}

BossBeiJiTa::~BossBeiJiTa() {}

class BossKaLiKe : public Boss
{
public:

    BossKaLiKe();
    ~BossKaLiKe();
    Skill skill1;
    Skill skill2;

    void fallequipment(Pack& pack);
    void attack(Role& aim, Role& user);

};

BossKaLiKe::BossKaLiKe()
{
    name = "BossKaLiKe";
    hp = 500;
    mp = 100;
    aggressivity = 15;
    defense = 19;
    exp = 3;
    money = 30;
    fallPossibility = 20;
    describe ="Having the body of immortality";
    skill1 = Skill("大爆炸攻击", 3);
    skill2 = Skill("地狱漩涡", 0, 0, "\0");
    //qinGuangWangZhanli();
}

void BossKaLiKe::fallequipment(Pack& pack)
{
    srand((unsigned int)(time(NULL)));
    if (rand() % 100 < fallPossibility)
    {
        Armor armor(5);
        pack.armors.push_back(armor);
        cout << "\t 恭喜获得防具煞羽袍" << endl;
    }
    if (rand() % 100 < fallPossibility)
    {
        Weapon weapon(3);
        pack.weapons.push_back(weapon);
        cout << "\t 恭喜获得武器天煞月戟" << endl;
    }
    if (rand() % 100 < fallPossibility)
    {
        Armor armor(4);
        pack.armors.push_back(armor);
        cout << "\t 恭喜获得防具罗刹鬼衣" << endl;
    }
}

void BossKaLiKe::attack(Role& aim, Role& user)
{
    srand((unsigned int)(time(NULL)));
    if (rand() % 10 < 3)
    {
        kalikeSkill1();
        cout << "\tBoss使用" << skill1.name << endl;
        skill1.attack(aim, user);

    }
    else if (rand() % 10 < 4)
    {
        kalikeSkill2();
        cout << "\tBoss使用" << skill2.name << endl;
        skill2.attack(aim, user);
    }
    else
    {
        cout << "\tBoss使用" << skill0.name << endl;
        skill0.attack(aim, user);

    }
}

BossKaLiKe::~BossKaLiKe() {}

class BossFuLiSha : public Boss
{
public:

    BossFuLiSha();
    ~BossFuLiSha();
    Skill skill1;
    Skill skill2;

    void fallequipment(Pack& pack);
    void attack(Role& aim, Role& user);

};

BossFuLiSha::BossFuLiSha()
{
    name = "BossFuLiSha";
    hp = 1200;
    mp = 100;
    aggressivity = 30;
    defense = 20;
    exp = 4;
    money = 40;
    fallPossibility = 30;
    describe ="His personality is cold and heartless, his mood changes are unstable, ";
    skill1 = Skill("舞空术", 0, 0, "\0");
    skill2 = Skill("高速飞行", 3);
    //panGuanZhanli();
}

void BossFuLiSha::fallequipment(Pack& pack)
{
    srand((unsigned int)(time(NULL)));
    if (rand() % 100 < fallPossibility)
    {
        Weapon weapon(4);
        pack.weapons.push_back(weapon);
        cout << "\t 恭喜获得武器罗刹镰刀" << endl;
    }
}

void BossFuLiSha::attack(Role& aim, Role& user)
{
    srand((unsigned int)(time(NULL)));
    if (rand() % 10 < 3)
    {
        fulishaSkill1();
        cout << "\tBoss使用" << skill1.name << "以闪避下次攻击" << endl;
        skill1.attack(aim, user);
    }
    else if (rand() % 10 < 3)
    {
        fulishaSkill2();
        cout << "\tBoss使用" << skill2.name << endl;
        skill2.attack(aim, user);
    }
    else
    {
        cout << "\tBoss使用" << skill0.name << endl;
        skill0.attack(aim, user);
    }
}

BossFuLiSha::~BossFuLiSha() {}


class BossShaLu : public Boss
{
public:

    BossShaLu();
    ~BossShaLu();
    Skill skill1;

    void fallequipment(Pack& pack);
    void attack(Role& aim, Role& user);

};

BossShaLu::BossShaLu()
{
    name = "BossShaLu";
    hp = 2000;
    mp = 100;
    aggressivity = 50;
    defense = 30;
    exp = 4;
    money = 50;
    fallPossibility = 70;
    describe = "Saru is the ultimate man-made man made by Dr. gro";
    skill1 = Skill("舞空术", 0, 0, "\0");
    //yanLuoWangZhanli();
}

void BossShaLu::fallequipment(Pack& pack)
{
    srand((unsigned int)(time(NULL)));
    if (rand() % 100 < fallPossibility)
    {
        Weapon weapon(5);
        pack.weapons.push_back(weapon);
        cout << "\t 恭喜获得武器鬼王剑" << endl;
    }
}

void BossShaLu::attack(Role& aim, Role& user)
{
    srand((unsigned int)(time(NULL)));
    if (rand() % 10 < 4)
    {
        shaluSkill1();
        cout << "\tBoss使用" << skill1.name << "吸收法力" << endl;
        skill1.attack(aim, user);
    }
    else
    {
        cout << "\tBoss使用" << skill0.name << endl;
        skill0.attack(aim, user);
    }
}

BossShaLu::~BossShaLu() {}


class Map
{
public:

    Map(int lock = 1, string name = "\0", string describe = "\0");
    ~Map();

    int lock; //表示这是第几关
    string name;
    string describe;
    int mapsNum; //表示总共有几关

    void showInfo(WuKong& wuKong, int& key, int choiceMap);
    bool check(WuKong& wuKong, Boss& boss, int& key); //检测是否有角色死亡
    Boss& produceBoss(int key);

};
Map::~Map(){}
Map::Map(int lock, string name, string describe) :
        lock(lock), name(name), describe(describe)
{
    mapsNum = 5;
}

Boss& Map::produceBoss(int key)
{
    while(key<1 ||key >5);
    if (key == 1)
    {
        BossBiKe* BossbiKe = new BossBiKe;
        return *BossbiKe;
    }
    if (key == 2)
    {
        BossBeiJiTa* Bossbeijita = new BossBeiJiTa;
        return *Bossbeijita;
    }
    if (key == 3)
    {
        BossKaLiKe* Bosskalike = new BossKaLiKe;
        return *Bosskalike;
    }
    if (key == 4)
    {
        BossFuLiSha* Bossfulisha = new BossFuLiSha;
        return *Bossfulisha;
    }
    if (key == 5)
    {
        BossShaLu* Bossshalu = new BossShaLu;
        return *Bossshalu;
    }

}

bool Map::check(WuKong& wuKong, Boss& boss, int& key)
{
    if (wuKong.die())
    {
        wuKongDie();
        cout << "DIE!!!" << endl;
        return false;
    }
    if (boss.die())
    {
        boss.fallequipment(wuKong.pack);
        wuKong.exp += boss.exp;
        wuKong.money += boss.money;
        wuKong.levelup();
        cout << "   WIN!!!" << endl;
        if (key == lock && key < mapsNum)
        {
            key++;
            cout << "you can go to next barrier!" << endl;
        }

        return false;
    }

    return true;
}

void Map::showInfo(WuKong& wuKong, int& key, int choiceMap)
{

    cout << wuKong.name << " in " << this->name << endl;
    Boss* boss = &produceBoss(choiceMap);
    cout << "Boss  " << boss->name << "  start！" << endl;
    int choice;

    do
    {

        do
        {
            // //system("pause");
            ////system("cls");
            cout << "you can choose" << endl;
            cout << "0.escape " << endl;
            cout << "1.attack" << endl;
            cout << "2.know the boss" << endl;
            cout << "3.know myself" << endl;
            cout << "4.know my skill" << endl;
            cout << "5.show my pack" << endl;
            cin >> choice;
        } while (choice < 0 || choice > 5);

        ////system("cls");
        if (choice == 1)
        {
            wuKong.attack(*boss);
            ////system("cls");
            boss->attack(wuKong, *boss);
            if (!check(wuKong, *boss, key))
            {
                delete boss;
                ////system("pause");
                return;
            }

            cout << endl << "remain life:" << wuKong.hp << "  remain skill:" << wuKong.mp << endl;
            cout << "Boss's remaining life:" << boss->hp << endl << endl;
        }

        if (choice == 2)
            boss->showInfo();

        if (choice == 3)
            wuKong.showInfo();

        if (choice == 4)
            for (int i = 0; i < 6; i++)
            {
                wuKong.skills[i].showInfo();
                cout << endl;
            }

        if (choice == 5)
            wuKong.showInfoPack();
    } while (choice);
}

void setMaps(Map maps[])
{
    Map map0(1, "the world's best martial arts meeting venue");
    maps[0] = map0;
    Map map1(2, "North Highland");
    maps[1] = map1;
    Map map2(3, "Temple");
    maps[2] = map2;
    Map map3(4, "Barbidi's spaceships");
    maps[3] = map3;
    Map map4(5, "King of the divine world");
    maps[4] = map4;


}

class BigMap
{
public:

    BigMap();
    ~BigMap();

    int key; //已解锁关卡

    void start(); //开始游戏
    void showInfo(WuKong &wuKong, Map maps[]);
    void changeWuKongName(WuKong &wuKong);
    void enterMap(WuKong &wuKong, int &key, Map maps[]);
    void save(WuKong &wuKong);
    void load(WuKong &wuKong);

};
BigMap::~BigMap() {}
BigMap::BigMap()
{
    key = 1;
}

void BigMap::start()
{


    WuKong wuKong;


    Map maps[9];

    setMaps(maps);
    showInfo(wuKong, maps);

}

void BigMap::showInfo(WuKong &wuKong, Map maps[])
{

    do
    {

        ////system("cls");
        cout << endl << endl << "Current main menu" << endl;
        int choice;
        wuKong.renovate();

        do
        {
            cout << "Function selection: "<<endl;
            cout<<"1. Rename "<<endl;
            cout<<"2. Select Level"<<endl;
            cout<<"3. View personal attributes"<<endl;
            cout<<"4. View skills "<<endl;
            cout<<"5. View backpack" << endl;

            cin >> choice;
        }
        while(choice < 1 || choice > 5);
        // //system("cls");

        if (choice == 1)
            changeWuKongName(wuKong);

        if (choice == 2)
            enterMap(wuKong, key, maps);



        if (choice ==3)
        {
            wuKong.showInfo();
            // //system("pause");
        }

        if (choice == 4)
        {
            for(int i = 0; i < 6; i++)
            {
                wuKong.skills[i].showInfo();
                cout << endl;
            }
            // //system("pause");

        }

        if (choice == 5)
            wuKong.showInfoPack();

    }
    while(1);
}

void BigMap::changeWuKongName(WuKong &wuKong)
{
    string name;
    cout <<"Enter a new name" << endl;
    cin >> name;

    wuKong.name = name;
    cout << "\tnow,your name is " << name << endl;
    // //system("pause");
}

void BigMap::enterMap(WuKong &wuKong, int &key, Map maps[])
{
    int choice;

    cout<<"The menu:"<<endl;
    for (int i = 0; i < maps[0].mapsNum; i++)
        cout << i + 1 << "." << maps[i].name << endl;
    cout << endl << "\t\n"
                    "Enter the level number to enter, and enter 0 to return" << endl;

    do
    {
        cout << "The " << key << " level is currently unlocked" << endl;
        cin >> choice;
        if (choice >= 0 && choice <= key)
            break;
    }
    while(1);

    if (choice)
    {
        wuKong.status = "\0";
        maps[choice - 1].showInfo(wuKong, key, choice);
    }

}


int main()
{
    cout << "\Dragon Ball abridged version" << endl;
    // zhanli();
    cout << endl << "\t\t\n"
                    "\n"
                    "Welcome to the Dragon Ball abridged version" << endl;
    //system("pause");
    BigMap bigMap;
    bigMap.start();
    //cout<<sizeof(WuKong)<<endl;
    return 0;
}


