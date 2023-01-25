#include <iostream>
using namespace std;

class Enemy {
public:
	Enemy(int damage = 10);
	void virtual Taunt() const; 
	void virtual Attack() const; 
private:
	int m_Damage;
};

Enemy::Enemy(int damage) :
	m_Damage(damage)
{}

void Enemy::Taunt() const
{
	cout << "The enemy says they will fight you.\n";
}

void Enemy::Attack() const
{
	cout << "Attack! Inflicts " << m_Damage << " damage points.";
}



class Boss : public Enemy {
public:
	Boss(int damage = 30);
	void Taunt() const; 
	void Attack() const; 
};

Boss::Boss(int damage) :
	Enemy(damage) //call base class constructor with argument
{}

void Boss::Taunt() const //override base class member function
{
	cout << "The boss says they will end your pitiful existence.\n";
}

void Boss::Attack() const //override base class member function
{
	Enemy::Attack(); //call base class member function
	cout << " And laughs heartily at you.\n";
}



void main()
{
	cout << "Enemy object:\n";
	Enemy anEnemy;
	anEnemy.Taunt();
	anEnemy.Attack();

	cout << "\n\nBoss object:\n";
	Boss aBoss;
	aBoss.Taunt();
	aBoss.Attack();

}
