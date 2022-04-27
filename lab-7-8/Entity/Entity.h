#ifndef LAB7_ENTITY_H
#define LAB7_ENTITY_H

#include "ostream";
class Entity {
private:
    char* name;
    int number;
    int sum,id;
public:
    Entity();
    Entity(const Entity& ent);
    Entity(int id,const char* name, int number, int sum);
    char *getName();
    void setName(const char *n);
    void setId(int id);
    int getId();
    int getNumber();
    void setNumber(int num);
    int getSum();
    void setSum(int s);
    Entity &operator=(const Entity &ent);
    bool operator==(const Entity &ent);
    friend std::ostream& operator<<(std::ostream& os, const Entity& ent);
    ~Entity();
    bool isValid();
};

#endif //LAB7_ENTITY_H
